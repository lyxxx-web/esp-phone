// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: ESPPHONE

#ifndef _ESPPHONE_UI_H
#define _ESPPHONE_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
#include "lv_numpad.h"

void turnOFF_Animation(lv_obj_t * TargetObject, int delay);
void turnON_Animation(lv_obj_t * TargetObject, int delay);

extern lv_style_t style_outline;
// SCREEN: ui_stateLight
void ui_stateLight_screen_init(void);
extern lv_obj_t * ui_stateLight;
extern lv_obj_t * ui_LightBar;
extern lv_obj_t * ui_lightTime;
extern lv_obj_t * ui_lightBattery;
extern lv_obj_t * ui_lightWifi;
extern lv_obj_t * ui_lightMobile;
// SCREEN: ui_dial
void ui_dial_screen_init(void);
void ui_event_dialBtnans(lv_event_t * e);
void ui_event_dial(lv_event_t *e);
extern char dialTxt[23];
extern lv_obj_t * ui_dial;
extern lv_obj_t * ui_dialKeyboard;
extern lv_obj_t * ui_dialBtnAnswer;
// SCREEN: ui_answer
void ui_answer_screen_init(void);
void ui_event_answer(lv_event_t * e);
void ui_event_ansBtnDec(lv_event_t * e);
extern lv_obj_t * ui_answer;
extern lv_obj_t * ui_ansFuc;
extern lv_obj_t * ui_ansFucmute;
extern lv_obj_t * ui_ansBtnmute;
extern lv_obj_t * ui_ansFucLabel1;
extern lv_obj_t * ui_ansFuckeypad;
void ui_event_ansBtnkeypad(lv_event_t * e);
extern lv_obj_t * ui_ansBtnkeypad;
extern lv_obj_t * ui_ansFucLabel2;
extern lv_obj_t * ui_ansFucaudio;
extern lv_obj_t * ui_ansBtnaudio;
extern lv_obj_t * ui_ansFucLabel3;
extern lv_obj_t * ui_ansFuccall;
extern lv_obj_t * ui_ansBtncall;
extern lv_obj_t * ui_ansFucLabel4;
extern lv_obj_t * ui_ansFucfacetime;
extern lv_obj_t * ui_ansBtnfacetime;
extern lv_obj_t * ui_ansFucLabel5;
extern lv_obj_t * ui_ansFuccontact;
extern lv_obj_t * ui_ansBtncontact;
extern lv_obj_t * ui_ansFucLabel6;
extern lv_obj_t * ui_ansLabelName;
extern lv_obj_t * ui_ansLabelTime;
extern lv_obj_t * ui_ansBtnDEC;
extern lv_obj_t * ui_answerKeyboard;
extern lv_obj_t * ui_anskeypadEsc;
void ui_event_ansKeypadEsc(lv_event_t * e);
// SCREEN: ui_stateDark
void ui_stateDark_screen_init(void);
extern lv_obj_t * ui_stateDark;
extern lv_obj_t * ui_darkBar;
extern lv_obj_t * ui_darkTime;
extern lv_obj_t * ui_darkBattery;
extern lv_obj_t * ui_darkWifi;
extern lv_obj_t * ui_darkMobile;
// SCREEN: ui_oncall
void ui_oncall_screen_init(void);
void ui_event_oncall(lv_event_t * e);
extern lv_obj_t * ui_oncall;
extern lv_obj_t * ui_oncallLabelPhone;
extern lv_obj_t * ui_oncallLabelName;
extern lv_obj_t * ui_oncallMsg;
extern lv_obj_t * ui_oncallFuc;
extern lv_obj_t * ui_oncallFucRemind;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_oncallFucLabel1;
extern lv_obj_t * ui_oncallFucMsg;
void ui_event_Image1(lv_event_t * e);
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_oncallFucLabel2;
extern lv_obj_t * ui_oncallFucAns;
extern lv_obj_t * ui_oncallBtnAns;
extern lv_obj_t * ui_Label27;
extern lv_obj_t * ui_oncallFucDec;
extern lv_obj_t * ui_oncallBtnDec;
extern lv_obj_t * ui_Label31;
extern lv_obj_t * ui____initial_actions0;
void ui_event_oncall_answer(lv_event_t * e);
void ui_event_oncall_decline(lv_event_t * e);


LV_IMG_DECLARE(ui_img_1152878764);    // assets/电池电量.png
LV_IMG_DECLARE(ui_img_1515518950);    // assets/wifi (1).png
LV_IMG_DECLARE(ui_img_1755492943);    // assets/信号.png
LV_IMG_DECLARE(ui_img_352369578);    // assets/拨号 (1).png
LV_IMG_DECLARE(ui_img_backspace_png);    // assets/backspace.png
LV_IMG_DECLARE(ui_img_988448286);    // assets/麦克风.png
LV_IMG_DECLARE(ui_img_753335661);    // assets/麦克风-dark.png
LV_IMG_DECLARE(ui_img_keypad_png);    // assets/keypad.png
LV_IMG_DECLARE(ui_img_1143594758);    // assets/keypad-dark.png
LV_IMG_DECLARE(ui_img_1817873855);    // assets/audio-off.png
LV_IMG_DECLARE(ui_img_495558844);    // assets/audio-high.png
LV_IMG_DECLARE(ui_img_addcontacts_png);    // assets/AddContacts.png
LV_IMG_DECLARE(ui_img_facetime_fill_png);    // assets/facetime_fill.png
LV_IMG_DECLARE(ui_img_contacts_png);    // assets/contacts.png
LV_IMG_DECLARE(ui_img_1328003813);    // assets/电池电量-dark.png
LV_IMG_DECLARE(ui_img_667377057);    // assets/wifi-dark.png
LV_IMG_DECLARE(ui_img_336861511);    // assets/信号强度1-dark.png
LV_IMG_DECLARE(ui_img_126583460);    // assets/闹钟3.png
LV_IMG_DECLARE(ui_img_2054516389);    // assets/信息 (1).png
LV_IMG_DECLARE(ui_img_keypadEsc);   
LV_IMG_DECLARE(ui_img_backspace_light);    
LV_IMG_DECLARE(ui_img_backspace_dark);    
LV_IMG_DECLARE(ui_img_dial_off);    




LV_FONT_DECLARE(ui_font_DISPLAYTFB25);
LV_FONT_DECLARE(ui_font_OPPOSansBold14);
LV_FONT_DECLARE(ui_font_OPPOSansBold25);
LV_FONT_DECLARE(ui_font_OPPOSansBold50);
LV_FONT_DECLARE(ui_font_OPPOSansBold60);
LV_FONT_DECLARE(ui_font_OPPOSansRegular14);
LV_FONT_DECLARE(ui_font_OPPOSansRegular20);
LV_FONT_DECLARE(ui_font_OPPOSansRegular34);
LV_FONT_DECLARE(ui_font_OPPOSansRegular70);
LV_FONT_DECLARE(ui_font_OPPOSansBoldttf70);
LV_FONT_DECLARE(ui_font_OPPOSansBold18);
LV_FONT_DECLARE(ui_font_OPPOSansBold10);
LV_FONT_DECLARE(ui_font_OPPOSansBold30);
LV_FONT_DECLARE(ui_font_OPPOSansBold40);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
