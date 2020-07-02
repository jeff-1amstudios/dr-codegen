#ifndef _MAINLOOP_H_
#define _MAINLOOP_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0xa1
//IDA: void __cdecl ToggleInfo()
void ToggleInfo();

// Offset: 164
// Size: 0xdc
//IDA: void __cdecl CalculateFrameRate()
void CalculateFrameRate();

// Offset: 384
// Size: 0x68
//IDA: void __cdecl LoseOldestWastedMassage()
void LoseOldestWastedMassage();

// Offset: 488
// Size: 0x61
//IDA: void __usercall QueueWastedMassage(int pIndex@<EAX>)
void QueueWastedMassage(int pIndex);

// Offset: 588
// Size: 0xaec
//IDA: void __cdecl MungeHeadups()
void MungeHeadups();

// Offset: 3384
// Size: 0x24c
//IDA: void __usercall UpdateFramePeriod(tU32 *pCamera_period@<EAX>)
void UpdateFramePeriod(tU32 *pCamera_period);

// Offset: 3972
// Size: 0x2d
//IDA: tU32 __cdecl GetLastTickCount()
tU32 GetLastTickCount();

// Offset: 4020
// Size: 0xc0
//IDA: void __cdecl CheckTimer()
void CheckTimer();

// Offset: 4212
// Size: 0x13f
//IDA: int __cdecl MungeRaceFinished()
int MungeRaceFinished();

// Offset: 4532
// Size: 0x74c
//IDA: tRace_result __cdecl MainGameLoop()
tRace_result MainGameLoop();

// Offset: 6400
// Size: 0x3d
//IDA: tRace_result __cdecl DoRace()
tRace_result DoRace();

#endif
