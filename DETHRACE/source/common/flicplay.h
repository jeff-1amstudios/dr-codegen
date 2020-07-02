#ifndef _FLICPLAY_H_
#define _FLICPLAY_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl EnableTranslationText()
void EnableTranslationText();

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl DisableTranslationText()
void DisableTranslationText();

// Offset: 88
// Size: 0x36
//IDA: void __usercall SetFlicSound(int pSound_ID@<EAX>, tU32 pSound_time@<EDX>)
void SetFlicSound(int pSound_ID, tU32 pSound_time);

// Offset: 144
// Size: 0x2d
//IDA: int __cdecl TranslationMode()
int TranslationMode();

// Offset: 192
// Size: 0x2c
//IDA: void __cdecl DontLetFlicFuckWithPalettes()
void DontLetFlicFuckWithPalettes();

// Offset: 236
// Size: 0x2c
//IDA: void __cdecl LetFlicFuckWithPalettes()
void LetFlicFuckWithPalettes();

// Offset: 280
// Size: 0x2c
//IDA: void __cdecl PlayFlicsInDarkness()
void PlayFlicsInDarkness();

// Offset: 324
// Size: 0x31
//IDA: void __cdecl ReilluminateFlics()
void ReilluminateFlics();

// Offset: 376
// Size: 0x2c
//IDA: void __cdecl TurnFlicTransparencyOn()
void TurnFlicTransparencyOn();

// Offset: 420
// Size: 0x2c
//IDA: void __cdecl TurnFlicTransparencyOff()
void TurnFlicTransparencyOff();

// Offset: 464
// Size: 0x2c
//IDA: void __cdecl PlayFlicsFromDisk()
void PlayFlicsFromDisk();

// Offset: 508
// Size: 0x2c
//IDA: void __cdecl PlayFlicsFromMemory()
void PlayFlicsFromMemory();

// Offset: 552
// Size: 0x2d
//IDA: int __cdecl FlicsPlayedFromDisk()
int FlicsPlayedFromDisk();

// Offset: 600
// Size: 0x2c
//IDA: void __cdecl TurnOffPanelFlics()
void TurnOffPanelFlics();

// Offset: 644
// Size: 0x2c
//IDA: void __cdecl TurnOnPanelFlics()
void TurnOnPanelFlics();

// Offset: 688
// Size: 0x35
//IDA: int __usercall GetPanelFlicFrameIndex@<EAX>(int pIndex@<EAX>)
int GetPanelFlicFrameIndex(int pIndex);

// Offset: 744
// Size: 0x5b
//IDA: void __cdecl FlicPaletteAllocate()
void FlicPaletteAllocate();

// Offset: 836
// Size: 0x5c
//IDA: void __usercall AssertFlicPixelmap(tFlic_descriptor_ptr pFlic_info@<EAX>, br_pixelmap *pDest_pixelmap@<EDX>)
void AssertFlicPixelmap(tFlic_descriptor_ptr pFlic_info, br_pixelmap *pDest_pixelmap);

// Offset: 928
// Size: 0x317
//IDA: int __usercall StartFlic@<EAX>(char *pFile_name@<EAX>, int pIndex@<EDX>, tFlic_descriptor_ptr pFlic_info@<EBX>, tU32 pSize@<ECX>, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, int pFrame_rate)
int StartFlic(char *pFile_name, int pIndex, tFlic_descriptor_ptr pFlic_info, tU32 pSize, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, int pFrame_rate);

// Offset: 1720
// Size: 0x60
//IDA: void __cdecl FreeFlicPaletteAllocate()
void FreeFlicPaletteAllocate();

// Offset: 1816
// Size: 0x76
//IDA: int __usercall EndFlic@<EAX>(tFlic_descriptor_ptr pFlic_info@<EAX>)
int EndFlic(tFlic_descriptor_ptr pFlic_info);

// Offset: 1936
// Size: 0x138
//IDA: void __usercall DoColourMap(tFlic_descriptor_ptr pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoColourMap(tFlic_descriptor_ptr pFlic_info, tU32 chunk_length);

// Offset: 2248
// Size: 0x157
//IDA: void __usercall DoDifferenceX(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDifferenceX(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 2592
// Size: 0x179
//IDA: void __usercall DoDifferenceTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDifferenceTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 2972
// Size: 0x12f
//IDA: void __usercall DoColour256(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoColour256(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 3276
// Size: 0x219
//IDA: void __usercall DoDeltaTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDeltaTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 3816
// Size: 0x162
//IDA: void __usercall DoDeltaX(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoDeltaX(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 4172
// Size: 0x9c
//IDA: void __usercall DoBlack(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoBlack(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 4328
// Size: 0x110
//IDA: void __usercall DoRunLengthX(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoRunLengthX(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 4600
// Size: 0x135
//IDA: void __usercall DoRunLengthTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoRunLengthTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 4912
// Size: 0xa0
//IDA: void __usercall DoUncompressed(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoUncompressed(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 5072
// Size: 0xb0
//IDA: void __usercall DoUncompressedTrans(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoUncompressedTrans(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 5248
// Size: 0x34
//IDA: void __usercall DoMini(tFlic_descriptor *pFlic_info@<EAX>, tU32 chunk_length@<EDX>)
void DoMini(tFlic_descriptor *pFlic_info, tU32 chunk_length);

// Offset: 5300
// Size: 0x179
//IDA: void __usercall DrawTranslations(tFlic_descriptor *pFlic_info@<EAX>, int pLast_frame@<EDX>)
void DrawTranslations(tFlic_descriptor *pFlic_info, int pLast_frame);

// Offset: 5680
// Size: 0x30f
//IDA: int __usercall PlayNextFlicFrame2@<EAX>(tFlic_descriptor *pFlic_info@<EAX>, int pPanel_flic@<EDX>)
int PlayNextFlicFrame2(tFlic_descriptor *pFlic_info, int pPanel_flic);

// Offset: 6464
// Size: 0x35
//IDA: int __usercall PlayNextFlicFrame@<EAX>(tFlic_descriptor *pFlic_info@<EAX>)
int PlayNextFlicFrame(tFlic_descriptor *pFlic_info);

// Offset: 6520
// Size: 0x127
//IDA: int __usercall PlayFlic@<EAX>(int pIndex@<EAX>, tU32 pSize@<EDX>, tS8 *pData_ptr@<EBX>, br_pixelmap *pDest_pixelmap@<ECX>, int pX_offset, int pY_offset, void (*DoPerFrame)(), int pInterruptable, int pFrame_rate)
int PlayFlic(int pIndex, tU32 pSize, tS8 *pData_ptr, br_pixelmap *pDest_pixelmap, int pX_offset, int pY_offset, void (*DoPerFrame)(), int pInterruptable, int pFrame_rate);

// Offset: 6816
// Size: 0x29
//IDA: void __cdecl SwapScreen()
void SwapScreen();

// Offset: 6860
// Size: 0x9a
//IDA: void __usercall ShowFlic(int pIndex@<EAX>)
void ShowFlic(int pIndex);

// Offset: 7016
// Size: 0x4c
//IDA: void __cdecl InitFlics()
void InitFlics();

// Offset: 7092
// Size: 0x18b
//IDA: int __usercall LoadFlic@<EAX>(int pIndex@<EAX>)
int LoadFlic(int pIndex);

// Offset: 7488
// Size: 0x4b
//IDA: void __usercall UnlockFlic(int pIndex@<EAX>)
void UnlockFlic(int pIndex);

// Offset: 7564
// Size: 0x101
//IDA: int __usercall LoadFlicData@<EAX>(char *pName@<EAX>, tU8 **pData@<EDX>, tU32 *pData_length@<EBX>)
int LoadFlicData(char *pName, tU8 **pData, tU32 *pData_length);

// Offset: 7824
// Size: 0x57
//IDA: void __usercall FreeFlic(int pIndex@<EAX>)
void FreeFlic(int pIndex);

// Offset: 7912
// Size: 0x3d
//IDA: void __usercall ForceRunFlic(int pIndex@<EAX>)
void ForceRunFlic(int pIndex);

// Offset: 7976
// Size: 0x6b
//IDA: void __usercall RunFlicAt(int pIndex@<EAX>, int pX@<EDX>, int pY@<EBX>)
void RunFlicAt(int pIndex, int pX, int pY);

// Offset: 8084
// Size: 0x75
//IDA: void __usercall RunFlic(int pIndex@<EAX>)
void RunFlic(int pIndex);

// Offset: 8204
// Size: 0x69
//IDA: void __usercall PreloadBunchOfFlics(int pBunch_index@<EAX>)
void PreloadBunchOfFlics(int pBunch_index);

// Offset: 8312
// Size: 0x69
//IDA: void __usercall UnlockBunchOfFlics(int pBunch_index@<EAX>)
void UnlockBunchOfFlics(int pBunch_index);

// Offset: 8420
// Size: 0x49
//IDA: void __usercall FlushAllFlics(int pBunch_index@<EAX>)
void FlushAllFlics(int pBunch_index);

// Offset: 8496
// Size: 0x2c
//IDA: void __cdecl InitFlicQueue()
void InitFlicQueue();

// Offset: 8540
// Size: 0x57
//IDA: int __cdecl FlicQueueFinished()
int FlicQueueFinished();

// Offset: 8628
// Size: 0xe6
//IDA: void __usercall ProcessFlicQueue(tU32 pInterval@<EAX>)
void ProcessFlicQueue(tU32 pInterval);

// Offset: 8860
// Size: 0x8a
//IDA: void __cdecl FlushFlicQueue()
void FlushFlicQueue();

// Offset: 9000
// Size: 0x1a8
//IDA: void __usercall AddToFlicQueue(int pIndex@<EAX>, int pX@<EDX>, int pY@<EBX>, int pMust_finish@<ECX>)
void AddToFlicQueue(int pIndex, int pX, int pY, int pMust_finish);

// Offset: 9424
// Size: 0xcd
//IDA: void __usercall InitialiseFlicPanel(int pIndex@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pWidth@<ECX>, int pHeight)
void InitialiseFlicPanel(int pIndex, int pLeft, int pTop, int pWidth, int pHeight);

// Offset: 9632
// Size: 0x70
//IDA: void __usercall DisposeFlicPanel(int pIndex@<EAX>)
void DisposeFlicPanel(int pIndex);

// Offset: 9744
// Size: 0x1f6
//IDA: void __usercall ServicePanelFlics(int pCopy_to_buffer@<EAX>)
void ServicePanelFlics(int pCopy_to_buffer);

// Offset: 10248
// Size: 0xcd
//IDA: void __usercall ChangePanelFlic(int pIndex@<EAX>, tU8 *pData@<EDX>, tU32 pData_length@<EBX>)
void ChangePanelFlic(int pIndex, tU8 *pData, tU32 pData_length);

// Offset: 10456
// Size: 0x37
//IDA: br_pixelmap* __usercall GetPanelPixelmap@<EAX>(int pIndex@<EAX>)
br_pixelmap* GetPanelPixelmap(int pIndex);

// Offset: 10512
// Size: 0x599
//IDA: void __cdecl LoadInterfaceStrings()
void LoadInterfaceStrings();

// Offset: 11948
// Size: 0x72
//IDA: void __cdecl FlushInterfaceFonts()
void FlushInterfaceFonts();

// Offset: 12064
// Size: 0x36
//IDA: void __cdecl SuspendPendingFlic()
void SuspendPendingFlic();

// Offset: 12120
// Size: 0x2c
//IDA: void __cdecl ResumePendingFlic()
void ResumePendingFlic();

#endif
