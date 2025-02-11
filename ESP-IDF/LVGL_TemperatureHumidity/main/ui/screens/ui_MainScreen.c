// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: TemperateHumidity

#include "../ui.h"

void ui_MainScreen_screen_init(void)
{
    ui_MainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblHeadLine = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_lblHeadLine, 320);
    lv_obj_set_height(ui_lblHeadLine, 20);
    lv_obj_set_x(ui_lblHeadLine, 0);
    lv_obj_set_y(ui_lblHeadLine, -100);
    lv_obj_set_align(ui_lblHeadLine, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_lblHeadLine, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_lblHeadLine, "Temperature and Humidity Graph.");
    lv_obj_set_style_text_color(ui_lblHeadLine, lv_color_hex(0x084146), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblHeadLine, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblHeadLine, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblHeadLine, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblHumidity = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_lblHumidity, 100);
    lv_obj_set_height(ui_lblHumidity, 20);
    lv_obj_set_x(ui_lblHumidity, 50);
    lv_obj_set_y(ui_lblHumidity, -50);
    lv_obj_set_align(ui_lblHumidity, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblHumidity, "Humidity");

    ui_lblTemperatureValue = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_lblTemperatureValue, 40);
    lv_obj_set_height(ui_lblTemperatureValue, 20);
    lv_obj_set_x(ui_lblTemperatureValue, 120);
    lv_obj_set_y(ui_lblTemperatureValue, -70);
    lv_obj_set_align(ui_lblTemperatureValue, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_lblTemperatureValue, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_lblTemperatureValue, "0 °C");

    ui_lblTemperature = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_lblTemperature, 100);
    lv_obj_set_height(ui_lblTemperature, 20);
    lv_obj_set_x(ui_lblTemperature, 50);
    lv_obj_set_y(ui_lblTemperature, -70);
    lv_obj_set_align(ui_lblTemperature, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblTemperature, "Temperature");

    ui_lblHumidityValue = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_lblHumidityValue, 40);
    lv_obj_set_height(ui_lblHumidityValue, 20);
    lv_obj_set_x(ui_lblHumidityValue, 120);
    lv_obj_set_y(ui_lblHumidityValue, -50);
    lv_obj_set_align(ui_lblHumidityValue, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_lblHumidityValue, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_lblHumidityValue, "0 %");

    ui_chart = lv_chart_create(ui_MainScreen);
    lv_obj_set_width(ui_chart, 240);
    lv_obj_set_height(ui_chart, 120);
    lv_obj_set_x(ui_chart, 0);
    lv_obj_set_y(ui_chart, 30);
    lv_obj_set_align(ui_chart, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_chart, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(ui_chart, 100);
    lv_chart_set_range(ui_chart, LV_CHART_AXIS_PRIMARY_Y, 10, 60);
    lv_chart_set_range(ui_chart, LV_CHART_AXIS_SECONDARY_Y, 20, 100);
    lv_chart_set_axis_tick(ui_chart, LV_CHART_AXIS_PRIMARY_X, 10, 5, 0, 2, false, 50);
    lv_chart_set_axis_tick(ui_chart, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 6, 2, true, 50);
    lv_chart_set_axis_tick(ui_chart, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, true, 25);
    lv_obj_set_style_bg_color(ui_chart, lv_color_hex(0xF0F0F0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);




}
