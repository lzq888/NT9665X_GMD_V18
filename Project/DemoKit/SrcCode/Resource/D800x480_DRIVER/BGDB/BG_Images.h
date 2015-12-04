#ifndef _BG_IMAGES_H
#define _BG_IMAGES_H

#include "Type.h"

#define BG_MOVIE        DISABLE
#define BG_THUMBNAIL    DISABLE
//#NT#2007/05/16#Scottie -begin
//#Support showing bad file warning image
#define BG_BADFILE      DISABLE
//#NT#2007/05/16#Scottie -end
//#NT#2009/01/14#Scottie -begin
//#NT#Add for drawing the wav sample image
#define BG_WAVFILE      DISABLE
//#NT#2009/01/14#Scottie -end

#if (BG_MOVIE)
#define BG_MOVIE_BS_SIZE    13591
extern const UINT8 g_ucBGMovie_320x240[];
#endif

#if (BG_THUMBNAIL)
#define BG_THUMB_BS_SIZE    7684
extern const UINT8 g_ucBGThumb_320x240[];
#endif

//#NT#2007/05/16#Scottie -begin
//#Support showing bad file warning image
#if (BG_BADFILE)
#define BG_BADFILE_BS_SIZE  4888
extern const UINT8 g_ucBGBadFile_320x240[];
#endif
//#NT#2007/05/16#Scottie -end

//#NT#2009/01/14#Scottie -begin
//#NT#Add for drawing the wav sample image
#if (BG_WAVFILE)
#define BG_WAVFILE_BS_SIZE  73600//3473//4000//3473//8721
extern const UINT8 g_ucBGWavFile_320x240[];
//#NT#2009/10/20#SA4 Hideo Lin -begin
//#NT#Add for drawing the wav sample image in thumbnail mode
extern UINT32 BGDB_GetWavFileBGAddr(void);
extern UINT32 BGDB_GetWavFileBGSize(void);
extern UINT32 BGDB_GetWavThumbBGAddr(void);
extern UINT32 BGDB_GetWavThumbBGSize(void); 
//#NT#2009/10/20#SA4 Hideo Lin -end
#endif
//#NT#2009/01/14#Scottie -end

extern const UINT8 g_ucBGOpening[];
extern const UINT8 g_ucBGGoodbye[];

#if (_MODEL_DSC_ == _MODEL_DUAL_GEMEIDI_)
extern const UINT8 g_ucBGOpening1[];
extern const UINT8 g_ucBGOpening2[];
extern const UINT8 g_ucBGOpening3[];
extern const UINT8 g_ucBGOpening4[];
extern const UINT8 g_ucBGOpening5[];
extern const UINT8 g_ucBGOpening6[];
extern const UINT8 g_ucBGOpening7[];
extern const UINT8 g_ucBGOpening8[];
extern const UINT8 g_ucBGOpening9[];

extern const UINT8 g_ucBGOpening10[];
extern const UINT8 g_ucBGOpening11[];
extern const UINT8 g_ucBGOpening12[];
extern const UINT8 g_ucBGOpening13[];
extern const UINT8 g_ucBGOpening14[];
extern const UINT8 g_ucBGOpening15[];
extern const UINT8 g_ucBGOpening16[];
extern const UINT8 g_ucBGOpening17[];
extern const UINT8 g_ucBGOpening18[];
extern const UINT8 g_ucBGOpening19[];
extern const UINT8 g_ucBGOpening20[];
extern const UINT8 g_ucBGOpening21[];
#endif
extern const UINT8 g_ucWaterMarkY[];
extern const UINT8 g_ucWaterMarkUVPack[];
#endif
