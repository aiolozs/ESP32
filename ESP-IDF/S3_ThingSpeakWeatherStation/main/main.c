#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"

#include "main.h"
#include "dht11.h"
#include "gui_mng.h"

// macros
#define DHT11_PIN                           (GPIO_NUM_17)
#define MAIN_TASK_PERIOD                    (6000)

// Private Variables
static const char *TAG = "APP";
/* Sensor Related Variables */
static sensor_data_t sensor_data = { .sensor_idx = 0 };


void app_main(void)
{
  // Disable default gpio logging messages
  esp_log_level_set("gpio", ESP_LOG_NONE);

  // initialize dht sensor library
  dht11_init(DHT11_PIN, true);

  // start the gui task, this handles all the display related stuff
  gui_start();

  while(1)
  {
    // Get DHT11 Temperature and Humidity Values
    if( dht11_read().status == DHT11_OK )
    {
      uint8_t temp = (uint8_t)dht11_read().humidity;
      // humidity can't be greater than 100%, that means invalid data
      if( temp < 100 )
      {
        if( sensor_data.sensor_idx < SENSOR_BUFF_SIZE )
        {
          sensor_data.humidity[sensor_data.sensor_idx] = temp;
          temp = (uint8_t)dht11_read().temperature;
          sensor_data.temperature[sensor_data.sensor_idx] = temp;
          ESP_LOGI(TAG, "Temperature: %d", sensor_data.temperature[sensor_data.sensor_idx]);
          ESP_LOGI(TAG, "Humidity: %d", sensor_data.humidity[sensor_data.sensor_idx]);
          sensor_data.sensor_idx++;
          // trigger event to display temperature and humidity
          // gui_send_event(GUI_MNG_EV_TEMP_HUMID, NULL );
          // if wifi is connected, trigger event to send data to ThingSpeak
          // if( wifi_connect_status )
          {
            // thingspeak_send_event(THING_SPEAK_EV_TEMP_HUMID, NULL);
          }
          // reset the index
          if( sensor_data.sensor_idx >= SENSOR_BUFF_SIZE )
          {
            sensor_data.sensor_idx = 0;
          }
        }
      }
      else
      {
        ESP_LOGE(TAG, "In-correct data received from DHT11 -> %u", temp);
      }
    }
    else
    {
      ESP_LOGE(TAG, "Unable to Read DHT11 Status");
    }
    // Wait before next measurement
    vTaskDelay(MAIN_TASK_PERIOD / portTICK_PERIOD_MS);
  }
}

// Public Function Definitions
/**
 * @brief Get the Pointer to the Sensor Data Structure to get the temperature
 *        and Humidity values
 * @param  None
 * @return sensor_data data structure pointer
 */
sensor_data_t * get_temperature_humidity( void )
{
  return &sensor_data;
}

// Private Function Definitions


