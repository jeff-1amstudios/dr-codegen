#ifndef _GRAPHICS_H_
#define _GRAPHICS_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl TurnOnPaletteConversion()
void TurnOnPaletteConversion();

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl TurnOffPaletteConversion()
void TurnOffPaletteConversion();

// Offset: 88
// Size: 0x2c
//IDA: void __cdecl ResetLollipopQueue()
void ResetLollipopQueue();

// Offset: 132
// Size: 0x7c
//IDA: int __usercall AddToLollipopQueue@<EAX>(br_actor *pActor@<EAX>, int pIndex@<EDX>)
int AddToLollipopQueue(br_actor *pActor, int pIndex);

// Offset: 256
// Size: 0xed
//IDA: void __cdecl RenderLollipops()
void RenderLollipops();

// Offset: 496
// Size: 0x6a
//IDA: void __usercall DRDrawLine(br_pixelmap *pDestn@<EAX>, int pX1@<EDX>, int pY1@<EBX>, int pX2@<ECX>, int pY2, int pColour)
void DRDrawLine(br_pixelmap *pDestn, int pX1, int pY1, int pX2, int pY2, int pColour);

// Offset: 604
// Size: 0x5a
//IDA: void __usercall DrawDigitAt(br_pixelmap *gImage@<EAX>, int pX@<EDX>, int pY@<EBX>, int pY_pitch@<ECX>, int pValue)
void DrawDigitAt(br_pixelmap *gImage, int pX, int pY, int pY_pitch, int pValue);

// Offset: 696
// Size: 0x9c
//IDA: void __usercall DrawNumberAt(br_pixelmap *gImage@<EAX>, int pX@<EDX>, int pY@<EBX>, int pX_pitch@<ECX>, int pY_pitch, int pValue, int pDigit_count, int pLeading_zeroes)
void DrawNumberAt(br_pixelmap *gImage, int pX, int pY, int pX_pitch, int pY_pitch, int pValue, int pDigit_count, int pLeading_zeroes);

// Offset: 852
// Size: 0x15e
//IDA: void __usercall BuildColourTable(br_pixelmap *pPalette@<EAX>)
void BuildColourTable(br_pixelmap *pPalette);

// Offset: 1204
// Size: 0x2c
//IDA: void __cdecl ClearConcussion()
void ClearConcussion();

// Offset: 1248
// Size: 0x89
//IDA: tS8* __usercall SkipLines@<EAX>(tS8 *pSource@<EAX>, int pCount@<EDX>)
tS8* SkipLines(tS8 *pSource, int pCount);

// Offset: 1388
// Size: 0x7e
//IDA: void __usercall CopyWords(char *pDst@<EAX>, char *pSrc@<EDX>, int pN@<EBX>)
void CopyWords(char *pDst, char *pSrc, int pN);

// Offset: 1516
// Size: 0x25e
//IDA: void __usercall Copy8BitStripImageTo16Bit(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pOffset_x@<EBX>, br_int_16 pDest_y@<ECX>, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight)
void Copy8BitStripImageTo16Bit(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pOffset_x, br_int_16 pDest_y, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight);

// Offset: 2124
// Size: 0x28b
//IDA: void __usercall CopyStripImage(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pOffset_x@<EBX>, br_int_16 pDest_y@<ECX>, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight)
void CopyStripImage(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pOffset_x, br_int_16 pDest_y, br_int_16 pOffset_y, tS8 *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_uint_16 pWidth, br_uint_16 pHeight);

// Offset: 2776
// Size: 0x1fb
//IDA: void __usercall SetBRenderScreenAndBuffers(int pX_offset@<EAX>, int pY_offset@<EDX>, int pWidth@<EBX>, int pHeight@<ECX>)
void SetBRenderScreenAndBuffers(int pX_offset, int pY_offset, int pWidth, int pHeight);

// Offset: 3284
// Size: 0xac
//IDA: void __cdecl SetIntegerMapRenders()
void SetIntegerMapRenders();

// Offset: 3456
// Size: 0x172
//IDA: void __cdecl AdjustRenderScreenSize()
void AdjustRenderScreenSize();

// Offset: 3828
// Size: 0x57
//IDA: void __cdecl ScreenSmaller()
void ScreenSmaller();

// Offset: 3916
// Size: 0x57
//IDA: void __cdecl ScreenLarger()
void ScreenLarger();

// Offset: 4004
// Size: 0x8a
//IDA: void __usercall DRSetPaletteEntries(br_pixelmap *pPalette@<EAX>, int pFirst_colour@<EDX>, int pCount@<EBX>)
void DRSetPaletteEntries(br_pixelmap *pPalette, int pFirst_colour, int pCount);

// Offset: 4144
// Size: 0x80
//IDA: void __usercall DRSetPalette3(br_pixelmap *pThe_palette@<EAX>, int pSet_current_palette@<EDX>)
void DRSetPalette3(br_pixelmap *pThe_palette, int pSet_current_palette);

// Offset: 4272
// Size: 0x8c
//IDA: void __usercall DRSetPalette2(br_pixelmap *pThe_palette@<EAX>, int pSet_current_palette@<EDX>)
void DRSetPalette2(br_pixelmap *pThe_palette, int pSet_current_palette);

// Offset: 4412
// Size: 0x32
//IDA: void __usercall DRSetPalette(br_pixelmap *pThe_palette@<EAX>)
void DRSetPalette(br_pixelmap *pThe_palette);

// Offset: 4464
// Size: 0x19f
//IDA: void __cdecl InitializePalettes()
void InitializePalettes();

// Offset: 4880
// Size: 0x42
//IDA: void __usercall SwitchToPalette(char *pPal_name@<EAX>)
void SwitchToPalette(char *pPal_name);

// Offset: 4948
// Size: 0x68
//IDA: void __cdecl ClearEntireScreen()
void ClearEntireScreen();

// Offset: 5052
// Size: 0x4b
//IDA: void __cdecl ClearWobbles()
void ClearWobbles();

// Offset: 5128
// Size: 0x6c
//IDA: void __cdecl InitWobbleStuff()
void InitWobbleStuff();

// Offset: 5236
// Size: 0xc6
//IDA: void __cdecl NewScreenWobble(double pAmplitude_x, double pAmplitude_y, double pPeriod)
void NewScreenWobble(double pAmplitude_x, double pAmplitude_y, double pPeriod);

// Offset: 5436
// Size: 0x36
//IDA: void __usercall SetScreenWobble(int pWobble_x@<EAX>, int pWobble_y@<EDX>)
void SetScreenWobble(int pWobble_x, int pWobble_y);

// Offset: 5492
// Size: 0x2b
//IDA: void __cdecl ResetScreenWobble()
void ResetScreenWobble();

// Offset: 5536
// Size: 0x32d
//IDA: void __usercall CalculateWobblitude(tU32 pThe_time@<EAX>)
void CalculateWobblitude(tU32 pThe_time);

// Offset: 6352
// Size: 0x25d
//IDA: void __usercall CalculateConcussion(tU32 pThe_time@<EAX>)
void CalculateConcussion(tU32 pThe_time);

// Offset: 6960
// Size: 0xab
//IDA: void __cdecl SufferFromConcussion(float pSeriousness)
void SufferFromConcussion(float pSeriousness);

// Offset: 7132
// Size: 0x38
//IDA: void __usercall ProcessNonTrackActors(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, br_matrix34 *pOld_camera_matrix)
void ProcessNonTrackActors(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world, br_matrix34 *pOld_camera_matrix);

// Offset: 7188
// Size: 0x77
//IDA: int __usercall OppositeColour@<EAX>(int pColour@<EAX>)
int OppositeColour(int pColour);

// Offset: 7308
// Size: 0x70c
//IDA: void __usercall DrawMapBlip(tCar_spec *pCar@<EAX>, tU32 pTime@<EDX>, br_matrix34 *pTrans@<EBX>, br_vector3 *pPos@<ECX>, int pColour)
void DrawMapBlip(tCar_spec *pCar, tU32 pTime, br_matrix34 *pTrans, br_vector3 *pPos, int pColour);

// Offset: 9112
// Size: 0x101
//IDA: void __usercall DrawMapSmallBlip(tU32 pTime@<EAX>, br_vector3 *pPos@<EDX>, int pColour@<EBX>)
void DrawMapSmallBlip(tU32 pTime, br_vector3 *pPos, int pColour);

// Offset: 9372
// Size: 0x28b
//IDA: void __usercall MungeClipPlane(br_vector3 *pLight@<EAX>, tCar_spec *pCar@<EDX>, br_vector3 *p1@<EBX>, br_vector3 *p2@<ECX>, br_scalar pY_offset)
void MungeClipPlane(br_vector3 *pLight, tCar_spec *pCar, br_vector3 *p1, br_vector3 *p2, br_scalar pY_offset);

// Offset: 10024
// Size: 0xb4
//IDA: void __usercall TryThisEdge(tCar_spec *pCar@<EAX>, br_vector3 *pLight@<EDX>, int pIndex_1@<EBX>, br_scalar pSign_1, int pIndex_2, br_scalar pSign_2, int pPoint_index_1, int pPoint_index_2, br_scalar pY_offset)
void TryThisEdge(tCar_spec *pCar, br_vector3 *pLight, int pIndex_1, br_scalar pSign_1, int pIndex_2, br_scalar pSign_2, int pPoint_index_1, int pPoint_index_2, br_scalar pY_offset);

// Offset: 10204
// Size: 0x68
//IDA: br_scalar __usercall DistanceFromPlane@<ST0>(br_vector3 *pPos@<EAX>, br_scalar pA, br_scalar pB, br_scalar pC, br_scalar pD)
br_scalar DistanceFromPlane(br_vector3 *pPos, br_scalar pA, br_scalar pB, br_scalar pC, br_scalar pD);

// Offset: 10308
// Size: 0x54
//IDA: void __cdecl DisableLights()
void DisableLights();

// Offset: 10392
// Size: 0x54
//IDA: void __cdecl EnableLights()
void EnableLights();

// Offset: 10476
// Size: 0x1235
//IDA: void __usercall ProcessShadow(tCar_spec *pCar@<EAX>, br_actor *pWorld@<EDX>, tTrack_spec *pTrack_spec@<EBX>, br_actor *pCamera@<ECX>, br_matrix34 *pCamera_to_world_transform, br_scalar pDistance_factor)
void ProcessShadow(tCar_spec *pCar, br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world_transform, br_scalar pDistance_factor);

// Offset: 15140
// Size: 0x207
//IDA: void __usercall RenderShadows(br_actor *pWorld@<EAX>, tTrack_spec *pTrack_spec@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world_transform@<ECX>)
void RenderShadows(br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world_transform);

// Offset: 15660
// Size: 0xf7
//IDA: void __usercall FlashyMapCheckpoint(int pIndex@<EAX>, tU32 pTime@<EDX>)
void FlashyMapCheckpoint(int pIndex, tU32 pTime);

// Offset: 15908
// Size: 0xfc
//IDA: int __usercall ConditionallyFillWithSky@<EAX>(br_pixelmap *pPixelmap@<EAX>)
int ConditionallyFillWithSky(br_pixelmap *pPixelmap);

// Offset: 16160
// Size: 0xea7
//IDA: void __usercall RenderAFrame(int pDepth_mask_on@<EAX>)
void RenderAFrame(int pDepth_mask_on);

// Offset: 19912
// Size: 0x36
//IDA: void __cdecl InitPaletteAnimate()
void InitPaletteAnimate();

// Offset: 19968
// Size: 0x4c
//IDA: void __cdecl RevertPalette()
void RevertPalette();

// Offset: 20044
// Size: 0x22
//IDA: void __cdecl MungePalette()
void MungePalette();

// Offset: 20080
// Size: 0x31
//IDA: void __cdecl ResetPalette()
void ResetPalette();

// Offset: 20132
// Size: 0x41
//IDA: void __usercall Darken(tU8 *pPtr@<EAX>, unsigned int pDarken_amount@<EDX>)
void Darken(tU8 *pPtr, unsigned int pDarken_amount);

// Offset: 20200
// Size: 0xc2
//IDA: void __usercall SetFadedPalette(int pDegree@<EAX>)
void SetFadedPalette(int pDegree);

// Offset: 20396
// Size: 0x93
//IDA: void __cdecl FadePaletteDown()
void FadePaletteDown();

// Offset: 20544
// Size: 0x74
//IDA: void __cdecl FadePaletteUp()
void FadePaletteUp();

// Offset: 20660
// Size: 0x5b
//IDA: void __cdecl KillSplashScreen()
void KillSplashScreen();

// Offset: 20752
// Size: 0x3a
//IDA: void __cdecl EnsureRenderPalette()
void EnsureRenderPalette();

// Offset: 20812
// Size: 0xf8
//IDA: void __usercall SplashScreenWith(char *pPixmap_name@<EAX>)
void SplashScreenWith(char *pPixmap_name);

// Offset: 21060
// Size: 0x30
//IDA: void __cdecl EnsurePaletteUp()
void EnsurePaletteUp();

// Offset: 21108
// Size: 0x67
//IDA: br_uint_32 __cdecl AmbientificateMaterial(br_material *pMat, void *pArg)
br_uint_32 AmbientificateMaterial(br_material *pMat, void *pArg);

// Offset: 21212
// Size: 0x3c
//IDA: void __cdecl ChangeAmbience(br_scalar pDelta)
void ChangeAmbience(br_scalar pDelta);

// Offset: 21272
// Size: 0x39
//IDA: void __cdecl InitAmbience()
void InitAmbience();

// Offset: 21332
// Size: 0x311
//IDA: void __usercall DRPixelmapRectangleMaskedCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight)
void DRPixelmapRectangleMaskedCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight);

// Offset: 22120
// Size: 0x56
//IDA: void __usercall DRMaskedStamp(br_int_16 pDest_x@<EAX>, br_int_16 pDest_y@<EDX>, br_pixelmap *pSource@<EBX>)
void DRMaskedStamp(br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource);

// Offset: 22208
// Size: 0x14c
//IDA: void __usercall DRPixelmapRectangleOnscreenCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight)
void DRPixelmapRectangleOnscreenCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight);

// Offset: 22540
// Size: 0x337
//IDA: void __usercall DRPixelmapRectangleShearedCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight, tX1616 pShear)
void DRPixelmapRectangleShearedCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight, tX1616 pShear);

// Offset: 23364
// Size: 0x155
//IDA: void __usercall DRPixelmapRectangleVScaledCopy(br_pixelmap *pDest@<EAX>, br_int_16 pDest_x@<EDX>, br_int_16 pDest_y@<EBX>, br_pixelmap *pSource@<ECX>, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight)
void DRPixelmapRectangleVScaledCopy(br_pixelmap *pDest, br_int_16 pDest_x, br_int_16 pDest_y, br_pixelmap *pSource, br_int_16 pSource_x, br_int_16 pSource_y, br_int_16 pWidth, br_int_16 pHeight);

// Offset: 23708
// Size: 0x57
//IDA: void __cdecl InitTransientBitmaps()
void InitTransientBitmaps();

// Offset: 23796
// Size: 0xb7
//IDA: int __usercall AllocateTransientBitmap@<EAX>(int pWidth@<EAX>, int pHeight@<EDX>, int pUser_data@<EBX>)
int AllocateTransientBitmap(int pWidth, int pHeight, int pUser_data);

// Offset: 23980
// Size: 0x60
//IDA: void __usercall DeallocateTransientBitmap(int pIndex@<EAX>)
void DeallocateTransientBitmap(int pIndex);

// Offset: 24076
// Size: 0x43
//IDA: void __cdecl DeallocateAllTransientBitmaps()
void DeallocateAllTransientBitmaps();

// Offset: 24144
// Size: 0xfe
//IDA: void __usercall RemoveTransientBitmaps(int pGraphically_remove_them@<EAX>)
void RemoveTransientBitmaps(int pGraphically_remove_them);

// Offset: 24400
// Size: 0xbe
//IDA: void __usercall SaveTransient(int pIndex@<EAX>, int pX_coord@<EDX>, int pY_coord@<EBX>)
void SaveTransient(int pIndex, int pX_coord, int pY_coord);

// Offset: 24592
// Size: 0xd6
//IDA: void __usercall DrawCursorGiblet(tCursor_giblet *pGib@<EAX>)
void DrawCursorGiblet(tCursor_giblet *pGib);

// Offset: 24808
// Size: 0x2e7
//IDA: void __usercall ProcessCursorGiblets(int pPeriod@<EAX>)
void ProcessCursorGiblets(int pPeriod);

// Offset: 25552
// Size: 0x242
//IDA: int __usercall NewCursorGiblet@<EAX>(int pX_coord@<EAX>, int pY_coord@<EDX>, float pX_speed, float pY_speed, tU32 pDrop_time)
int NewCursorGiblet(int pX_coord, int pY_coord, float pX_speed, float pY_speed, tU32 pDrop_time);

// Offset: 26132
// Size: 0x55d
//IDA: int __cdecl DoMouseCursor()
int DoMouseCursor();

// Offset: 27508
// Size: 0xba
//IDA: int __cdecl AllocateCursorTransient()
int AllocateCursorTransient();

// Offset: 27696
// Size: 0x8a
//IDA: void __cdecl StartMouseCursor()
void StartMouseCursor();

// Offset: 27836
// Size: 0x3b
//IDA: void __cdecl EndMouseCursor()
void EndMouseCursor();

// Offset: 27896
// Size: 0x238
//IDA: void __usercall LoadFont(int pFont_ID@<EAX>)
void LoadFont(int pFont_ID);

// Offset: 28464
// Size: 0x8d
//IDA: void __usercall DisposeFont(int pFont_ID@<EAX>)
void DisposeFont(int pFont_ID);

// Offset: 28608
// Size: 0x5d
//IDA: void __cdecl InitDRFonts()
void InitDRFonts();

// Offset: 28704
// Size: 0xfb
//IDA: void __usercall DrawDropImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip, int pOffset)
void DrawDropImage(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip, int pOffset);

// Offset: 28956
// Size: 0xa1
//IDA: void __usercall DropInImageFromTop(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropInImageFromTop(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip);

// Offset: 29120
// Size: 0x96
//IDA: void __usercall DropOutImageThruBottom(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropOutImageThruBottom(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip);

// Offset: 29272
// Size: 0x98
//IDA: void __usercall DropInImageFromBottom(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropInImageFromBottom(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip);

// Offset: 29424
// Size: 0xa1
//IDA: void __usercall DropOutImageThruTop(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pTop_clip@<ECX>, int pBottom_clip)
void DropOutImageThruTop(br_pixelmap *pImage, int pLeft, int pTop, int pTop_clip, int pBottom_clip);

// Offset: 29588
// Size: 0x106
//IDA: void __usercall DrawTellyLine(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pPercentage@<ECX>)
void DrawTellyLine(br_pixelmap *pImage, int pLeft, int pTop, int pPercentage);

// Offset: 29852
// Size: 0xcb
//IDA: void __usercall DrawTellyImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pPercentage@<ECX>)
void DrawTellyImage(br_pixelmap *pImage, int pLeft, int pTop, int pPercentage);

// Offset: 30056
// Size: 0xc2
//IDA: void __usercall TellyInImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>)
void TellyInImage(br_pixelmap *pImage, int pLeft, int pTop);

// Offset: 30252
// Size: 0xdc
//IDA: void __usercall TellyOutImage(br_pixelmap *pImage@<EAX>, int pLeft@<EDX>, int pTop@<EBX>)
void TellyOutImage(br_pixelmap *pImage, int pLeft, int pTop);

// Offset: 30472
// Size: 0x2d
//IDA: void __usercall SetShadowLevel(tShadow_level pLevel@<EAX>)
void SetShadowLevel(tShadow_level pLevel);

// Offset: 30520
// Size: 0x2d
//IDA: tShadow_level __cdecl GetShadowLevel()
tShadow_level GetShadowLevel();

// Offset: 30568
// Size: 0xf7
//IDA: void __cdecl ToggleShadow()
void ToggleShadow();

// Offset: 30816
// Size: 0x1f7
//IDA: void __cdecl InitShadow()
void InitShadow();

// Offset: 31320
// Size: 0x8c
//IDA: br_uint_32 __cdecl SaveShadeTable(br_pixelmap *pTable, void *pArg)
br_uint_32 SaveShadeTable(br_pixelmap *pTable, void *pArg);

// Offset: 31460
// Size: 0x47
//IDA: void __cdecl SaveShadeTables()
void SaveShadeTables();

// Offset: 31532
// Size: 0x54
//IDA: void __cdecl DisposeSavedShadeTables()
void DisposeSavedShadeTables();

// Offset: 31616
// Size: 0x86
//IDA: void __cdecl ShadowMode()
void ShadowMode();

// Offset: 31752
// Size: 0x72
//IDA: int __cdecl SwitchToRealResolution()
int SwitchToRealResolution();

// Offset: 31868
// Size: 0x7d
//IDA: int __cdecl SwitchToLoresMode()
int SwitchToLoresMode();

// Offset: 31996
// Size: 0x1fb
//IDA: void __usercall DRPixelmapDoubledCopy(br_pixelmap *pDestn@<EAX>, br_pixelmap *pSource@<EDX>, int pSource_width@<EBX>, int pSource_height@<ECX>, int pX_offset, int pY_offset)
void DRPixelmapDoubledCopy(br_pixelmap *pDestn, br_pixelmap *pSource, int pSource_width, int pSource_height, int pX_offset, int pY_offset);

#endif
