//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndSetupVersionRes.c"
#include "UIMenuWndSetupVersion.h"
#include "PrjCfg.h"

//---------------------UIMenuWndSetupVersionCtrl Debug Definition -----------------------------
#define _UIMENUWNDSETUPVERSION_ERROR_MSG        1
#define _UIMENUWNDSETUPVERSION_TRACE_MSG        0

#if (_UIMENUWNDSETUPVERSION_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndSetupVersionErrMsg(...)            debug_msg ("^R UIMenuWndSetupVersion: "__VA_ARGS__)
#else
#define UIMenuWndSetupVersionErrMsg(...)
#endif

#if (_UIMENUWNDSETUPVERSION_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndSetupVersionTraceMsg(...)          debug_msg ("^B UIMenuWndSetupVersion: "__VA_ARGS__)
#else
#define UIMenuWndSetupVersionTraceMsg(...)
#endif

//---------------------UIMenuWndSetupVersionCtrl Global Variables -----------------------------

//---------------------UIMenuWndSetupVersionCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndSetupVersionCtrl Public API  ----------------------------------

//---------------------UIMenuWndSetupVersionCtrl Private API  ---------------------------------
//---------------------UIMenuWndSetupVersionCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndSetupVersion)
CTRL_LIST_ITEM(UIMenuSetupVersionText)
CTRL_LIST_ITEM(UIMenuSetupVersionText2)
CTRL_LIST_END

//----------------------UIMenuWndSetupVersionCtrl Event---------------------------
INT32 UIMenuWndSetupVersion_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupVersion_OnClose(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupVersion)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndSetupVersion_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndSetupVersion_OnClose)
EVENT_END

INT32 UIMenuWndSetupVersion_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupVersion_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
//----------------------UIMenuSetupVersionTextCtrl Event---------------------------
EVENT_BEGIN(UIMenuSetupVersionText)
EVENT_END

//----------------------UIMenuSetupVersionText2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuSetupVersionText2)
EVENT_END

