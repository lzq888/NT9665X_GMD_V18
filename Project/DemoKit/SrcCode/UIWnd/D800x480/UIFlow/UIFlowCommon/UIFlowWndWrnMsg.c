//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "NVTToolCommand.h"
#include "UIFlowWndWrnMsgRes.c"
#include "UIFlowWndWrnMsgAPI.h"
//#include "UIFlow.h"
#include "../../../D800x480/UIFlow.h"

//-----------------------------------------------------------------------------
// UIFlowWndWrnMsg User Variable & Function Declarations
//-----------------------------------------------------------------------------
static UINT32 g_uiWrnMsgIssue       = 0;
static UINT32 g_uiWrnMsgExpTime     = 0;
static UINT32 g_uiExpTimerID        = NULL_TIMER;
static UINT32 g_uiWrnMsgPseudoTimerID = NULL_TIMER;

//---------------------UIFlowWndWrnMsgCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowWndWrnMsg)
CTRL_LIST_ITEM(UIFlowWndWrnMsg_StatusTXT_Msg)
CTRL_LIST_END

//----------------------UIFlowWndWrnMsgCtrl Event---------------------------
INT32 UIFlowWndWrnMsg_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_OnKeyMode(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_OnKeyPlayback(VControl *, UINT32, UINT32 *);
//#NT#2012/09/04#Ben Wang -begin
//#NT#Add PictureError warning message
INT32 UIFlowWndWrnMsg_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_OnKeyRight(VControl *, UINT32, UINT32 *);
//#NT#2012/09/04#Ben Wang -end
INT32 UIFlowWndWrnMsg_OnTimer(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWrnMsg_ReverseGear(VControl *, UINT32, UINT32 *);

EVENT_BEGIN(UIFlowWndWrnMsg)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIFlowWndWrnMsg_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIFlowWndWrnMsg_OnClose)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIFlowWndWrnMsg_OnKeyEnter)
EVENT_ITEM(NVTEVT_KEY_MODE,UIFlowWndWrnMsg_OnKeyMode)
EVENT_ITEM(NVTEVT_KEY_MENU,UIFlowWndWrnMsg_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_PLAYBACK,UIFlowWndWrnMsg_OnKeyPlayback)
//#NT#2012/09/04#Ben Wang -begin
//#NT#Add PictureError warning message
EVENT_ITEM(NVTEVT_KEY_UP,UIFlowWndWrnMsg_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIFlowWndWrnMsg_OnKeyRight)
//#NT#2012/09/04#Ben Wang -end
EVENT_ITEM(NVTEVT_TIMER,UIFlowWndWrnMsg_OnTimer)
EVENT_ITEM(NVTEVT_REVERSEGEAR,UIFlowWndWrnMsg_ReverseGear)

EVENT_END

INT32 UIFlowWndWrnMsg_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    debug_ind(("UIFlowWndWrnMsg: OnOpen\r\n"));

    if(paramNum > 0)
    {
        g_uiWrnMsgIssue = paramArray[0];
        debug_ind(("UIFlowWndWrnMsg: Issue case = %d\r\n", g_uiWrnMsgIssue));
        if(paramNum > 1)
        {
            g_uiWrnMsgExpTime = paramArray[1];
            debug_ind(("UIFlowWndWrnMsg: Exp time = %d\r\n", g_uiWrnMsgExpTime));
        }
    }

    debug_ind(("UIFlowWndWrnMsg_OnOpen g_uiWrnMsgIssue = %d\n\r",g_uiWrnMsgIssue));
    //#NT#2012/09/04#Ben Wang -begin
    //#NT#Add PictureError warning message 
    //UxState_SetItemData(&UIFlowWndWrnMsg_StatusTXT_MsgCtrl,UIFlowWndWrnMsg_StatusTXT_Msg_STRID_NO_FILE,STATE_ITEM_STRID,STRID_PICTUREERROR);
    //#NT#2012/09/04#Ben Wang -end
    UxState_SetData(&UIFlowWndWrnMsg_StatusTXT_MsgCtrl,STATE_CURITEM,g_uiWrnMsgIssue);
    UxCtrl_SetShow(&UIFlowWndWrnMsg_StatusTXT_MsgCtrl,TRUE);

    /* Start window expiration timer */
    if(g_uiWrnMsgExpTime)
    {
        if(g_uiExpTimerID != NULL_TIMER)
        {
            GxTimer_StopTimer(&g_uiExpTimerID);
        }
        if(g_uiWrnMsgPseudoTimerID != NULL_TIMER)
        {
            GxTimer_StopTimer(&g_uiWrnMsgPseudoTimerID);
        }
        g_uiExpTimerID = GxTimer_StartTimer((1000 * g_uiWrnMsgExpTime), NVTEVT_WARNING_TIMER, ONE_SHOT);
        g_uiWrnMsgPseudoTimerID = GxTimer_StartTimer(1000, NVTEVT_1SEC_TIMER, CONTINUE);
    }

    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWrnMsg_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    /* Stop window expiration timer if exists */
    if(g_uiExpTimerID != NULL_TIMER)
    {
        GxTimer_StopTimer(&g_uiExpTimerID);
    }
    if(g_uiWrnMsgPseudoTimerID != NULL_TIMER)
    {
        GxTimer_StopTimer(&g_uiWrnMsgPseudoTimerID);
    }

    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWrnMsg_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWrnMsg_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_EXE_CHANGEDSCMODE,1,DSCMODE_CHGTO_NEXT);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWrnMsg_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(pCtrl,1,NVTRET_ENTER_MENU);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWrnMsg_OnKeyPlayback(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_FORCETO_PLAYBACK_MODE,0);
    return NVTEVT_CONSUME;
}
//#NT#2012/09/04#Ben Wang -begin
//#NT#Add PictureError warning message 
INT32 UIFlowWndWrnMsg_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    if(g_uiWrnMsgIssue == FLOWWRNMSG_ISSUE_PICTURE_ERR)
        Ux_CloseWindow(pCtrl,2,NVTRET_WARNING,NVTEVT_KEY_LEFT);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWrnMsg_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    if(g_uiWrnMsgIssue == FLOWWRNMSG_ISSUE_PICTURE_ERR)
        Ux_CloseWindow(pCtrl,2,NVTRET_WARNING,NVTEVT_KEY_RIGHT);
    return NVTEVT_CONSUME;
}
//#NT#2012/09/04#Ben Wang -end
INT32 UIFlowWndWrnMsg_OnTimer(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    NVTEVT event;

    event = paramArray[0];
    debug_ind(("UIFlowWndWrnMsg OnTimer event = 0x%x\r\n", event));

    switch(event)
    {
        case NVTEVT_WARNING_TIMER:
            /**************************************************************************************
            **
            ** Warning Timeout Action
            **
            **************************************************************************************/
            if(g_uiExpTimerID != NULL_TIMER)
            {
                GxTimer_StopTimer(&g_uiExpTimerID);
            }
            if(g_uiWrnMsgPseudoTimerID != NULL_TIMER)
            {
                GxTimer_StopTimer(&g_uiWrnMsgPseudoTimerID);
            }
            if (g_uiWrnMsgIssue == FLOWWRNMSG_ISSUE_PICTURE_ERR)
                Ux_CloseWindow(pCtrl,2,NVTRET_WARNING,FLOWWRNMSG_ISSUE_PICTURE_ERR);
            else
                Ux_CloseWindow(pCtrl,0);
            if (g_uiWrnMsgIssue == UIFlowWndWrnMsg_StatusTXT_Msg_STRID_BATTERY_LOW)
            {
                System_PowerOff(SYS_POWEROFF_NORMAL);
            }
            break;
        case NVTEVT_1SEC_TIMER:
            switch (g_uiWrnMsgIssue)
            {
            case UIFlowWndWrnMsg_StatusTXT_Msg_STRID_BATTERY_LOW:
                 if (UxCtrl_IsShow(&UIFlowWndWrnMsg_StatusTXT_MsgCtrl) == TRUE)
                 {
                     UxCtrl_SetShow(&UIFlowWndWrnMsg_StatusTXT_MsgCtrl, FALSE);
                 }
                 else
                 {
                     UxCtrl_SetShow(&UIFlowWndWrnMsg_StatusTXT_MsgCtrl, TRUE);
                 }
                break;
            }
            break;

        default:
            debug_err(("UIFlowWndWrnMsg OnTimer: Unknown event 0x%x\r\n", event));
            break;
    }
    return NVTEVT_CONSUME;
}

INT32 UIFlowWndWrnMsg_ReverseGear(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(&UIFlowWndWrnMsgCtrl,0); // close whole tab menu
    return NVTEVT_CONSUME;
}


//----------------------UIFlowWndWrnMsg_StatusTXT_MsgCtrl Event---------------------------
EVENT_BEGIN(UIFlowWndWrnMsg_StatusTXT_Msg)
EVENT_END
