//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "NVTToolCommand.h"
#include "UIMenuWndPlayConfirmDelRes.c"
//#include "UIFlow.h"
#include "../../../D480x272/UIFlow.h"

//---------------------UIMenuWndPlayConfirmDelCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPlayConfirmDel)
CTRL_LIST_ITEM(UIMenuWndPlayConfirmDel_Panel)
CTRL_LIST_END

//----------------------UIMenuWndPlayConfirmDelCtrl Event---------------------------
INT32 UIMenuWndPlayConfirmDel_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_OnChildClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_OnKeyMode(VControl *, UINT32, UINT32 *);
//INT32 UIMenuWndPlayConfirmDel_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPlayConfirmDel)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndPlayConfirmDel_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndPlayConfirmDel_OnClose)
EVENT_ITEM(NVTEVT_CHILD_CLOSE,UIMenuWndPlayConfirmDel_OnChildClose)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndPlayConfirmDel_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_MENU,UIMenuWndPlayConfirmDel_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,UIMenuWndPlayConfirmDel_OnKeyMode)
//EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndPlayConfirmDel_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndPlayConfirmDel_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    //#NT#2009/08/05#Chris Chung -begin
    UxMenu_SetData(&UIMenuWndPlayConfirmDel_MenuCtrl, MNU_CURITM, 0);

    if(paramNum > 0)
    {
        UxState_SetData(&UIMenuWndPlayConfirmDel_StatusTextCtrl,STATE_CURITEM,paramArray[0]);
    }
    else
    {
        debug_msg("UIMenuWndPlayConfirmDel_OnOpen: param error\r\n");
    }
    //#NT#2009/08/05#Chris Chung -end
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_OnChildClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    if(paramNum > 0)
    {
        if(paramArray[0]==NVTRET_WAITMOMENT && (paramArray[1]==NVTRET_DELETEALL||paramArray[1]==NVTRET_DELETE))
        {
            Ux_SendEvent(&UIPlayObjCtrl,NVTEVT_PLAYSINGLE, 2, PB_SINGLE_CURR, 1);
            Ux_CloseWindow((VControl *)(&UIMenuWndPlayDelCtrl), 0);
        }
    }
    else
    {
        Ux_CloseWindow((VControl *)(&UIMenuWndPlayDelCtrl), 0);
    }
    Ux_DefaultEvent(pCtrl,NVTEVT_CHILD_CLOSE,paramNum,paramArray);

    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow((VControl *)(&UIMenuWndPlayConfirmDelCtrl), 0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(&MenuCommonItemCtrl,0); // close whole tab menu
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_EXE_CHANGEDSCMODE,1,DSCMODE_CHGTO_NEXT);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_FORCETO_LIVEVIEW_MODE,0);
    return NVTEVT_CONSUME;
}
//---------------------UIMenuWndPlayConfirmDel_PanelCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPlayConfirmDel_Panel)
CTRL_LIST_ITEM(UIMenuWndPlayConfirmDel_Menu)
CTRL_LIST_ITEM(UIMenuWndPlayConfirmDel_StatusText)
CTRL_LIST_END

//----------------------UIMenuWndPlayConfirmDel_PanelCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndPlayConfirmDel_Panel)
EVENT_END

//----------------------UIMenuWndPlayConfirmDel_MenuCtrl Event---------------------------
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPlayConfirmDel_Menu)
EVENT_ITEM(NVTEVT_KEY_UP,UIMenuWndPlayConfirmDel_Menu_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIMenuWndPlayConfirmDel_Menu_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndPlayConfirmDel_Menu_OnKeyEnter)
#if((_MODEL_DSC_ == _MODEL_CARDV_B50_)||(_MODEL_DSC_== _MODEL_DUAL_NAZHIDA_))
EVENT_ITEM(NVTEVT_KEY_CUSTOM1,UIMenuWndPlayConfirmDel_Menu_OnKeyShutter2)
#else
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndPlayConfirmDel_Menu_OnKeyShutter2)
#endif
EVENT_END

INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    //#NT#2009/08/05#Chris Chung -begin
    if(UxMenu_GetData(pCtrl,MNU_CURITM)==UIMenuWndPlayConfirmDel_Menu_STRID_OK)
    {
        if(UIStorageCheck(STORAGE_CHECK_LOCKED, NULL) == TRUE)
        {
            Ux_OpenWindow(&UIFlowWndWrnMsgCtrl,2,FLOWWRNMSG_ISSUE_CARD_LOCKED,FLOWWRNMSG_TIMER_1SEC);
            return NVTEVT_CONSUME;
        }

        switch(UxState_GetData(&UIMenuWndPlayConfirmDel_StatusTextCtrl,STATE_CURITEM))
        {
        case UIMenuWndPlayConfirmDel_StatusText_STRID_ERASE_THIS:

            if(AppPlay_GetData(PLAY_LOCKSTATUS))
            {
                Ux_OpenWindow(&UIFlowWndWrnMsgCtrl,2,FLOWWRNMSG_ISSUE_FILE_PROTECTED,FLOWWRNMSG_TIMER_1SEC);
                return NVTEVT_CONSUME;
            }

            Ux_SendEvent(&UIPlayObjCtrl,NVTEVT_DELETE,1,PB_DELETE_ONE);
            Ux_SendEvent(&UIPlayObjCtrl,NVTEVT_PLAYSINGLE, 2, PB_SINGLE_CURR, 1);
            Ux_CloseWindow((VControl *)(&UIMenuWndPlayDelCtrl), 0);
            break;
        case UIMenuWndPlayConfirmDel_StatusText_STRID_ERASE_ALL:
            Ux_OpenWindow(&UIFlowWndWaitMomentCtrl,1,UIFlowWndWaitMoment_StatusTXT_Msg_STRID_PLEASE_WAIT);
            BKG_PostEvent(NVTEVT_BKW_DELALL);
            break;
        default:
            debug_err(("UIMenuWndPlayConfirmDel_Menu_OnKeyEnter: status text error\r\n"));
        }
    }
    else
    {
        Ux_CloseWindow((VControl *)(&UIMenuWndPlayDelCtrl), 0);
    }
    //#NT#2009/08/05#Chris Chung -end
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPlayConfirmDel_Menu_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    // the same behavior as ENTER key!
    return UIMenuWndPlayConfirmDel_Menu_OnKeyEnter(pCtrl, paramNum, paramArray);
}
//----------------------UIMenuWndPlayConfirmDel_StatusTextCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndPlayConfirmDel_StatusText)
EVENT_END

