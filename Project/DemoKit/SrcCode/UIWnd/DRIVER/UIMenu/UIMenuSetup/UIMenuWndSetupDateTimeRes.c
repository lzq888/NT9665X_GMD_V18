//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDSETUPDATETIMERES_H
#define UIMENUWNDSETUPDATETIMERES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,319,239)

SHOW_ITEM_RECT(CMD_Rectangle,Rect3,56,50,304,208,272,0,5,255,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin4Rect,0,0,243,150,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin4)
SHOW_MAP_BODY(Skin4Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin4,0,0,243,150)

SHOW_MAP_BEGIN(Skin6)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin6,0,0,67,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text8,2,14,65,43,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal5)
SHOW_MAP_BODY(Skin6)
SHOW_MAP_BODY(Text8)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal5,96,61,163,117)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar11, 5, 15, 61,44, ICON_SEL_BAR_YEAR,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up12, 25, 2, 42,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down13, 25, 45, 38,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin10)
SHOW_MAP_BODY(Image_Sel_Bar11)
SHOW_MAP_BODY(Image_Up12)
SHOW_MAP_BODY(Image_Down13)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin10,0,0,67,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text15,2,14,65,43,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused9)
SHOW_MAP_BODY(Skin10)
SHOW_MAP_BODY(Text15)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused9,96,61,163,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin17Rect,0,0,67,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin17)
SHOW_MAP_BODY(Skin17Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin17,0,0,67,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text19,2,14,65,43,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable16)
SHOW_MAP_BODY(Skin17)
SHOW_MAP_BODY(Text19)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable16,96,61,163,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin21Rect,0,0,67,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin21)
SHOW_MAP_BODY(Skin21Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin21,0,0,67,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text23,2,14,65,43,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable20)
SHOW_MAP_BODY(Skin21)
SHOW_MAP_BODY(Text23)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable20,96,61,163,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin25Rect,0,0,67,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin25)
SHOW_MAP_BODY(Skin25Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin25,0,0,67,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text27,2,14,65,43,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed24)
SHOW_MAP_BODY(Skin25)
SHOW_MAP_BODY(Text27)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed24,96,61,163,117)

CREATE_BUTTON_ITEM_DATA(STRID_A028,STRID_A0,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
SHOW_MAP_BODY(Normal5)
SHOW_MAP_BODY(Focused9)
SHOW_MAP_BODY(Normal_Disable16)
SHOW_MAP_BODY(Focused_Disable20)
SHOW_MAP_BODY(Pressed24)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Y)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
BUTTON_LIST_ITEM(STRID_A028)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Y,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Y,UIMenuWndSetupDateTime_YMD_Y,0,39,8,106,64)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin30)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin30,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text32,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal29)
SHOW_MAP_BODY(Skin30)
SHOW_MAP_BODY(Text32)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal29,173,61,212,117)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar35, 3, 15, 36,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up36, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down37, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin34Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin34)
SHOW_MAP_BODY(Skin34Rect)
SHOW_MAP_BODY(Image_Sel_Bar35)
SHOW_MAP_BODY(Image_Up36)
SHOW_MAP_BODY(Image_Down37)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin34,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text39,2,13,36,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused33)
SHOW_MAP_BODY(Skin34)
SHOW_MAP_BODY(Text39)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused33,173,61,212,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin41Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin41)
SHOW_MAP_BODY(Skin41Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin41,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text43,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable40)
SHOW_MAP_BODY(Skin41)
SHOW_MAP_BODY(Text43)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable40,173,61,212,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin45Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin45)
SHOW_MAP_BODY(Skin45Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin45,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text47,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable44)
SHOW_MAP_BODY(Skin45)
SHOW_MAP_BODY(Text47)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable44,173,61,212,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin49Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin49)
SHOW_MAP_BODY(Skin49Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin49,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text51,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed48)
SHOW_MAP_BODY(Skin49)
SHOW_MAP_BODY(Text51)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed48,173,61,212,117)

CREATE_BUTTON_ITEM_DATA(STRID_A152,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_M)
SHOW_MAP_BODY(Normal29)
SHOW_MAP_BODY(Focused33)
SHOW_MAP_BODY(Normal_Disable40)
SHOW_MAP_BODY(Focused_Disable44)
SHOW_MAP_BODY(Pressed48)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_M)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_M)
BUTTON_LIST_ITEM(STRID_A152)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_M,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_M,UIMenuWndSetupDateTime_YMD_M,0,116,8,155,64)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin54)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin54,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text56,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal53)
SHOW_MAP_BODY(Skin54)
SHOW_MAP_BODY(Text56)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal53,229,61,268,117)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar59, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up60, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down61, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin58Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin58)
SHOW_MAP_BODY(Skin58Rect)
SHOW_MAP_BODY(Image_Sel_Bar59)
SHOW_MAP_BODY(Image_Up60)
SHOW_MAP_BODY(Image_Down61)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin58,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text63,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused57)
SHOW_MAP_BODY(Skin58)
SHOW_MAP_BODY(Text63)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused57,229,61,268,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin65Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin65)
SHOW_MAP_BODY(Skin65Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin65,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text67,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable64)
SHOW_MAP_BODY(Skin65)
SHOW_MAP_BODY(Text67)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable64,229,61,268,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin69Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin69)
SHOW_MAP_BODY(Skin69Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin69,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text71,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable68)
SHOW_MAP_BODY(Skin69)
SHOW_MAP_BODY(Text71)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable68,229,61,268,117)

SHOW_ITEM_RECT(CMD_Rectangle,Skin73Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin73)
SHOW_MAP_BODY(Skin73Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin73,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text75,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed72)
SHOW_MAP_BODY(Skin73)
SHOW_MAP_BODY(Text75)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed72,229,61,268,117)

CREATE_BUTTON_ITEM_DATA(STRID_A276,STRID_A2,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_D)
SHOW_MAP_BODY(Normal53)
SHOW_MAP_BODY(Focused57)
SHOW_MAP_BODY(Normal_Disable64)
SHOW_MAP_BODY(Focused_Disable68)
SHOW_MAP_BODY(Pressed72)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_D)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_D)
BUTTON_LIST_ITEM(STRID_A276)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_D,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_D,UIMenuWndSetupDateTime_YMD_D,0,172,8,211,64)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin78)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin78,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text80,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal77)
SHOW_MAP_BODY(Skin78)
SHOW_MAP_BODY(Text80)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal77,116,104,155,160)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar83, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up84, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down85, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin82Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin82)
SHOW_MAP_BODY(Skin82Rect)
SHOW_MAP_BODY(Image_Sel_Bar83)
SHOW_MAP_BODY(Image_Up84)
SHOW_MAP_BODY(Image_Down85)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin82,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text87,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused81)
SHOW_MAP_BODY(Skin82)
SHOW_MAP_BODY(Text87)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused81,116,104,155,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin89Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin89)
SHOW_MAP_BODY(Skin89Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin89,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text91,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable88)
SHOW_MAP_BODY(Skin89)
SHOW_MAP_BODY(Text91)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable88,116,104,155,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin93Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin93)
SHOW_MAP_BODY(Skin93Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin93,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text95,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable92)
SHOW_MAP_BODY(Skin93)
SHOW_MAP_BODY(Text95)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable92,116,104,155,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin97Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin97)
SHOW_MAP_BODY(Skin97Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin97,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text99,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed96)
SHOW_MAP_BODY(Skin97)
SHOW_MAP_BODY(Text99)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed96,116,104,155,160)

CREATE_BUTTON_ITEM_DATA(STRID_5MWXH100,STRID_5MWXH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
SHOW_MAP_BODY(Normal77)
SHOW_MAP_BODY(Focused81)
SHOW_MAP_BODY(Normal_Disable88)
SHOW_MAP_BODY(Focused_Disable92)
SHOW_MAP_BODY(Pressed96)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_HR)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
BUTTON_LIST_ITEM(STRID_5MWXH100)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_HR,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_HR,UIMenuWndSetupDateTime_YMD_HR,0,59,51,98,107)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin102)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin102,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text104,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal101)
SHOW_MAP_BODY(Skin102)
SHOW_MAP_BODY(Text104)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal101,173,104,212,160)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar107, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up108, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down109, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin106Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin106)
SHOW_MAP_BODY(Skin106Rect)
SHOW_MAP_BODY(Image_Sel_Bar107)
SHOW_MAP_BODY(Image_Up108)
SHOW_MAP_BODY(Image_Down109)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin106,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text111,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused105)
SHOW_MAP_BODY(Skin106)
SHOW_MAP_BODY(Text111)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused105,173,104,212,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin113Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin113)
SHOW_MAP_BODY(Skin113Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin113,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text115,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable112)
SHOW_MAP_BODY(Skin113)
SHOW_MAP_BODY(Text115)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable112,173,104,212,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin117Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin117)
SHOW_MAP_BODY(Skin117Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin117,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text119,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable116)
SHOW_MAP_BODY(Skin117)
SHOW_MAP_BODY(Text119)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable116,173,104,212,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin121Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin121)
SHOW_MAP_BODY(Skin121Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin121,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text123,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed120)
SHOW_MAP_BODY(Skin121)
SHOW_MAP_BODY(Text123)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed120,173,104,212,160)

CREATE_BUTTON_ITEM_DATA(STRID_5MWXH124,STRID_5MWXH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
SHOW_MAP_BODY(Normal101)
SHOW_MAP_BODY(Focused105)
SHOW_MAP_BODY(Normal_Disable112)
SHOW_MAP_BODY(Focused_Disable116)
SHOW_MAP_BODY(Pressed120)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_MIN)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
BUTTON_LIST_ITEM(STRID_5MWXH124)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_MIN,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_MIN,UIMenuWndSetupDateTime_YMD_MIN,0,116,51,155,107)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin126)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin126,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text128,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal125)
SHOW_MAP_BODY(Skin126)
SHOW_MAP_BODY(Text128)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal125,229,104,268,160)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar131, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up132, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down133, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin130Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin130)
SHOW_MAP_BODY(Skin130Rect)
SHOW_MAP_BODY(Image_Sel_Bar131)
SHOW_MAP_BODY(Image_Up132)
SHOW_MAP_BODY(Image_Down133)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin130,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text135,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused129)
SHOW_MAP_BODY(Skin130)
SHOW_MAP_BODY(Text135)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused129,229,104,268,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin137Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin137)
SHOW_MAP_BODY(Skin137Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin137,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text139,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable136)
SHOW_MAP_BODY(Skin137)
SHOW_MAP_BODY(Text139)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable136,229,104,268,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin141Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin141)
SHOW_MAP_BODY(Skin141Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin141,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text143,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable140)
SHOW_MAP_BODY(Skin141)
SHOW_MAP_BODY(Text143)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable140,229,104,268,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin145Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin145)
SHOW_MAP_BODY(Skin145Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin145,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text147,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed144)
SHOW_MAP_BODY(Skin145)
SHOW_MAP_BODY(Text147)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed144,229,104,268,160)

CREATE_BUTTON_ITEM_DATA(STRID_5MWXH148,STRID_5MWXH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_SEC)
SHOW_MAP_BODY(Normal125)
SHOW_MAP_BODY(Focused129)
SHOW_MAP_BODY(Normal_Disable136)
SHOW_MAP_BODY(Focused_Disable140)
SHOW_MAP_BODY(Pressed144)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_SEC)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_SEC)
BUTTON_LIST_ITEM(STRID_5MWXH148)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_SEC,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_SEC,UIMenuWndSetupDateTime_YMD_SEC,0,172,51,211,107)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin150)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin150,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text152,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal149)
SHOW_MAP_BODY(Skin150)
SHOW_MAP_BODY(Text152)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal149,115,148,154,204)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar155, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up156, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down157, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin154Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin154)
SHOW_MAP_BODY(Skin154Rect)
SHOW_MAP_BODY(Image_Sel_Bar155)
SHOW_MAP_BODY(Image_Up156)
SHOW_MAP_BODY(Image_Down157)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin154,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text159,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused153)
SHOW_MAP_BODY(Skin154)
SHOW_MAP_BODY(Text159)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused153,115,148,154,204)

SHOW_ITEM_RECT(CMD_Rectangle,Skin161Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin161)
SHOW_MAP_BODY(Skin161Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin161,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text163,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable160)
SHOW_MAP_BODY(Skin161)
SHOW_MAP_BODY(Text163)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable160,115,148,154,204)

SHOW_ITEM_RECT(CMD_Rectangle,Skin165Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin165)
SHOW_MAP_BODY(Skin165Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin165,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text167,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable164)
SHOW_MAP_BODY(Skin165)
SHOW_MAP_BODY(Text167)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable164,115,148,154,204)

SHOW_ITEM_RECT(CMD_Rectangle,Skin169Rect,0,0,39,56,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin169)
SHOW_MAP_BODY(Skin169Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin169,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text171,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed168)
SHOW_MAP_BODY(Skin169)
SHOW_MAP_BODY(Text171)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed168,115,148,154,204)

CREATE_BUTTON_ITEM_DATA(STRID_5MWXH172,STRID_5MWXH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Switch)
SHOW_MAP_BODY(Normal149)
SHOW_MAP_BODY(Focused153)
SHOW_MAP_BODY(Normal_Disable160)
SHOW_MAP_BODY(Focused_Disable164)
SHOW_MAP_BODY(Pressed168)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Switch)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Switch)
BUTTON_LIST_ITEM(STRID_5MWXH172)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Switch,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Switch,UIMenuWndSetupDateTime_YMD_Switch,0,58,95,97,151)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin173)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin173,0,0,239,146)

SHOW_MAP_BEGIN(Skin175)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin175,0,0,20,29)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text177,1,0,20,29,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal174)
SHOW_MAP_BODY(Skin175)
SHOW_MAP_BODY(Text177)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal174,152,74,172,103)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
SHOW_MAP_BODY(Normal174)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other0,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other0,0,94,21,114,50)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin180)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin180,0,0,20,29)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text182,1,0,20,29,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal179)
SHOW_MAP_BODY(Skin180)
SHOW_MAP_BODY(Text182)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal179,208,74,228,103)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
SHOW_MAP_BODY(Normal179)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other1,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other1,0,150,21,170,50)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin185)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin185,0,0,20,29)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text187,1,0,20,29,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal184)
SHOW_MAP_BODY(Skin185)
SHOW_MAP_BODY(Text187)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal184,152,117,172,146)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
SHOW_MAP_BODY(Normal184)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other2,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other2,0,94,64,114,93)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin190)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin190,0,0,20,29)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text192,1,0,20,29,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal189)
SHOW_MAP_BODY(Skin190)
SHOW_MAP_BODY(Text192)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal189,208,117,228,146)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other3)
SHOW_MAP_BODY(Normal189)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other3)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other3,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other3,0,150,64,170,93)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin195)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin195,0,0,104,29)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text197,0,0,102,29,STRID_NULL,0,0,0,0,2,1,1,256,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal194)
SHOW_MAP_BODY(Skin195)
SHOW_MAP_BODY(Text197)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal194,151,161,255,190)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other4)
SHOW_MAP_BODY(Normal194)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other4)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other4,STRID_MODE)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other4,0,93,108,197,137)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
SHOW_MAP_BODY(Skin173)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other3)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other4)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndSetupDateTime_Tab_YMD_VALUE,0)

CREATE_TAB_CTRL(UIMenuWndSetupDateTime_Tab_YMD_VALUE,UIMenuWndSetupDateTime_Tab_YMD_VALUE,0,1,0,240,146)
SHOW_MAP_BEGIN(Skin200)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin200,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text202,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal199)
SHOW_MAP_BODY(Skin200)
SHOW_MAP_BODY(Text202)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal199,268,104,307,160)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar205, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up206, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down207, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin204Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin204)
SHOW_MAP_BODY(Skin204Rect)
SHOW_MAP_BODY(Image_Sel_Bar205)
SHOW_MAP_BODY(Image_Up206)
SHOW_MAP_BODY(Image_Down207)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin204,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text209,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused203)
SHOW_MAP_BODY(Skin204)
SHOW_MAP_BODY(Text209)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused203,268,104,307,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin211Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin211)
SHOW_MAP_BODY(Skin211Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin211,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text213,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable210)
SHOW_MAP_BODY(Skin211)
SHOW_MAP_BODY(Text213)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable210,268,104,307,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin215Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin215)
SHOW_MAP_BODY(Skin215Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin215,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text217,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable214)
SHOW_MAP_BODY(Skin215)
SHOW_MAP_BODY(Text217)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable214,268,104,307,160)

SHOW_ITEM_RECT(CMD_Rectangle,Skin219Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin219)
SHOW_MAP_BODY(Skin219Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin219,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text221,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed218)
SHOW_MAP_BODY(Skin219)
SHOW_MAP_BODY(Text221)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed218,268,104,307,160)

CREATE_BUTTON_ITEM_DATA(STRID_5MWXH222,STRID_5MWXH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_AMPM)
SHOW_MAP_BODY(Normal199)
SHOW_MAP_BODY(Focused203)
SHOW_MAP_BODY(Normal_Disable210)
SHOW_MAP_BODY(Focused_Disable214)
SHOW_MAP_BODY(Pressed218)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_AMPM)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_AMPM)
BUTTON_LIST_ITEM(STRID_5MWXH222)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_AMPM,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_AMPM,UIMenuWndSetupDateTime_YMD_AMPM,0,211,51,250,107)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_Tab)
SHOW_MAP_BODY(Skin4)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Y)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_M)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_D)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_HR)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_MIN)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_SEC)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Switch)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_AMPM)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndSetupDateTime_Tab,0)

CREATE_TAB_CTRL(UIMenuWndSetupDateTime_Tab,UIMenuWndSetupDateTime_Tab,0,57,53,300,203)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_BODY(Rect3)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime)
DECLARE_CTRL_LIST(UIMenuWndSetupDateTime)
CREATE_CTRL(UIMenuWndSetupDateTime,UIMenuWndSetupDateTime,CTRL_WND,NULL,0 ,0,0,319,239)
#endif
