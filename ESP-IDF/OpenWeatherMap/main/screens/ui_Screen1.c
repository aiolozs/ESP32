// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: OpenWeatherMap

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_delhiImage = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_delhiImage, &ui_img_delhi_png);
    lv_obj_set_width(ui_delhiImage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_delhiImage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_delhiImage, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_delhiImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_delhiImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Temperature0 = lv_label_create(ui_Screen1);
    lv_obj_set_height(ui_Temperature0, 20);
    lv_obj_set_width(ui_Temperature0, lv_pct(45));
    lv_obj_set_x(ui_Temperature0, -70);
    lv_obj_set_y(ui_Temperature0, -100);
    lv_obj_set_align(ui_Temperature0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Temperature0, "Temperature: ");
    lv_obj_set_style_text_color(ui_Temperature0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Temperature0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Temperature0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Temperature0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pressure0 = lv_label_create(ui_Screen1);
    lv_obj_set_height(ui_Pressure0, 20);
    lv_obj_set_width(ui_Pressure0, lv_pct(45));
    lv_obj_set_x(ui_Pressure0, -70);
    lv_obj_set_y(ui_Pressure0, -80);
    lv_obj_set_align(ui_Pressure0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Pressure0, "Pressure:");
    lv_obj_set_style_text_color(ui_Pressure0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Pressure0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Pressure0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Pressure0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_tempValue0 = lv_label_create(ui_Screen1);
    lv_obj_set_height(ui_tempValue0, 20);
    lv_obj_set_width(ui_tempValue0, lv_pct(45));
    lv_obj_set_x(ui_tempValue0, 80);
    lv_obj_set_y(ui_tempValue0, -100);
    lv_obj_set_align(ui_tempValue0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_tempValue0, "20 C");
    lv_obj_set_style_text_color(ui_tempValue0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_tempValue0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_tempValue0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_tempValue0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pressureValue0 = lv_label_create(ui_Screen1);
    lv_obj_set_height(ui_pressureValue0, 20);
    lv_obj_set_width(ui_pressureValue0, lv_pct(45));
    lv_obj_set_x(ui_pressureValue0, 80);
    lv_obj_set_y(ui_pressureValue0, -80);
    lv_obj_set_align(ui_pressureValue0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pressureValue0, "1000 bar");
    lv_obj_set_style_text_color(ui_pressureValue0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pressureValue0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_pressureValue0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_pressureValue0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Humidity0 = lv_label_create(ui_Screen1);
    lv_obj_set_height(ui_Humidity0, 20);
    lv_obj_set_width(ui_Humidity0, lv_pct(45));
    lv_obj_set_x(ui_Humidity0, -70);
    lv_obj_set_y(ui_Humidity0, -60);
    lv_obj_set_align(ui_Humidity0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Humidity0, "Humidity:");
    lv_obj_set_style_text_color(ui_Humidity0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Humidity0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Humidity0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Humidity0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_humidityValue0 = lv_label_create(ui_Screen1);
    lv_obj_set_height(ui_humidityValue0, 20);
    lv_obj_set_width(ui_humidityValue0, lv_pct(45));
    lv_obj_set_x(ui_humidityValue0, 80);
    lv_obj_set_y(ui_humidityValue0, -60);
    lv_obj_set_align(ui_humidityValue0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_humidityValue0, "80 %");
    lv_obj_set_style_text_color(ui_humidityValue0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_humidityValue0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_humidityValue0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_humidityValue0, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

}
