//This source code is generated by UI Designer Studio.

#ifndef UIFLOWWNDWRNMSGAPI_H
#define UIFLOWWNDWRNMSGAPI_H

#include "UIFlowWndWrnMsg.h"

//-----------------------------------------------------------------------------
// UIFlowWndWrnMsg User Definitions
//-----------------------------------------------------------------------------
// Warning message issue
typedef enum
{
    FLOWWRNMSG_ISSUE_BATTERY_LOW    = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_BATTERY_LOW,
    FLOWWRNMSG_ISSUE_NO_CARD = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_NO_CARD,
    FLOWWRNMSG_ISSUE_CARD_FULL = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_CARD_FULL,
    FLOWWRNMSG_ISSUE_MEM_FULL = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_MEMORY_FULL,
    FLOWWRNMSG_ISSUE_CARD_ERR = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_CARDERROR,
    FLOWWRNMSG_ISSUE_MEM_ERR = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_MEMORYERROR,
    FLOWWRNMSG_ISSUE_CARD_LOCKED = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_CARD_LOCKED,
    FLOWWRNMSG_ISSUE_FILE_PROTECTED = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_FILE_PROTECT,
    FLOWWRNMSG_ISSUE_NO_IMAGE = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_NO_IMAGE,
    FLOWWRNMSG_ISSUE_NOT_JPEG = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_NOT_JPEG,
//#NT#2012/09/04#Ben Wang -begin
//#NT#Add PictureError warning message
    FLOWWRNMSG_ISSUE_PICTURE_ERR = UIFlowWndWrnMsg_StatusTXT_Msg_STRID_PICTUREERROR,
//#NT#2012/09/04#Ben Wang -end
    FLOWWRNMSG_ISSUE_CANT_CROP,
    FLOWWRNMSG_ISSUE_MAX
} FLOWWRNMSG_ISSUE;

// Warning message window timeout value
typedef enum
{
    FLOWWRNMSG_TIMER_KEEP    = 0,
    FLOWWRNMSG_TIMER_1SEC,
    FLOWWRNMSG_TIMER_2SEC,
    FLOWWRNMSG_TIMER_3SEC,
    FLOWWRNMSG_TIMER_4SEC,
    FLOWWRNMSG_TIMER_5SEC,
    FLOWWRNMSG_TIMER_MAX
} FLOWWRNMSG_TIMER;

#endif
