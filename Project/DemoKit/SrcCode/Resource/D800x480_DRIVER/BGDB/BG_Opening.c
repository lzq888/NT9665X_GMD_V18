#include "BG_Images.h"
#if (_MODEL_DSC_ == _MODEL_CARDV_B50_)
//#include "BG_renyixing_on.c"    //任E 行
//#include "BG_renyixing_off.c"

//#include "BG_ruidian_on.c"//任意行内部中性
//#include "BG_ruidian_off.c"

#include "BG_renyixing_eng_on.c" //任意行英文LOGO
#include "BG_renyixing_eng_off.c"
#elif(_MODEL_DSC_ == _MODEL_DUAL_G2800_)
#include "BG_zhengfuzhe_on.c" //征服者
#include "BG_zhengfuzhe_off.c"
#elif (_MODEL_DSC_ == _MODEL_DUAL_F5_)	
#include "e_car_open.c" // E 车E拍
#include "e_car_close.c"
#elif(_MODEL_DSC_ ==_MODEL_DUAL_790S_)
#include "BG_xianke_on.c" 
#include "BG_xianke_off.c"
#elif (_MODEL_DSC_ == _MODEL_DUAL_GEMEIDI_)
#include "BG_GMD_open.c"
//#include "BG_weisite_open.c"
#include "Goodbye.c"
#else
#include "welcome.c" 
#include "Goodbye.c"

//#include "xianzhi_open.c"
//#include "xianzhi_close.c"



//#include "F5_open.c" // yellow car "welcome"
//#include "F5_close.c"
#endif

#if (_MODEL_DSC_ == _MODEL_DUAL_GEMEIDI_)
int Logo_getBGOpening_size(void)
{
	return sizeof(g_ucBGOpening);
}
int Logo_getBGOpening_size1(void)
{
	return sizeof(g_ucBGOpening1);
}
int Logo_getBGOpening_size2(void)
{
	return sizeof(g_ucBGOpening2);
}
int Logo_getBGOpening_size3(void)
{
	return sizeof(g_ucBGOpening3);
}
int Logo_getBGOpening_size4(void)
{
	return sizeof(g_ucBGOpening4);
}
int Logo_getBGOpening_size5(void)
{
	return sizeof(g_ucBGOpening5);
}
int Logo_getBGOpening_size6(void)
{
	return sizeof(g_ucBGOpening6);
}
int Logo_getBGOpening_size7(void)
{
	return sizeof(g_ucBGOpening7);
}
int Logo_getBGOpening_size8(void)
{
	return sizeof(g_ucBGOpening8);
}
int Logo_getBGOpening_size9(void)
{
	return sizeof(g_ucBGOpening9);
}

int Logo_getBGOpening_size10(void)
{
	return sizeof(g_ucBGOpening10);
}

int Logo_getBGOpening_size11(void)
{
	return sizeof(g_ucBGOpening11);
}
int Logo_getBGOpening_size12(void)
{
	return sizeof(g_ucBGOpening12);
}
int Logo_getBGOpening_size13(void)
{
	return sizeof(g_ucBGOpening13);
}
int Logo_getBGOpening_size14(void)
{
	return sizeof(g_ucBGOpening14);
}
int Logo_getBGOpening_size15(void)
{
	return sizeof(g_ucBGOpening15);
}
int Logo_getBGOpening_size16(void)
{
	return sizeof(g_ucBGOpening16);
}
int Logo_getBGOpening_size17(void)
{
	return sizeof(g_ucBGOpening17);
}
int Logo_getBGOpening_size18(void)
{
	return sizeof(g_ucBGOpening18);
}
int Logo_getBGOpening_size19(void)
{
	return sizeof(g_ucBGOpening19);
}
int Logo_getBGGoodbye_size(void)
{
    return sizeof(g_ucBGGoodbye);
}
#else
int Logo_getBGOpening_size(void)
{
    return sizeof(g_ucBGOpening);
}

int Logo_getBGGoodbye_size(void)
{
    return sizeof(g_ucBGGoodbye);
}

#endif
