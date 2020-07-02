#ifndef _REPLAY_H_
#define _REPLAY_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0x47
//IDA: int __cdecl ReplayIsPaused()
int ReplayIsPaused();

// Offset: 72
// Size: 0x2f
//IDA: float __cdecl GetReplayRate()
float GetReplayRate();

// Offset: 120
// Size: 0x2d
//IDA: int __cdecl GetReplayDirection()
int GetReplayDirection();

// Offset: 168
// Size: 0x36
//IDA: void __cdecl StopSaving()
void StopSaving();

// Offset: 224
// Size: 0x63d
//IDA: void __usercall ActualActionReplayHeadups(int pSpecial_zappy_bastard@<EAX>)
void ActualActionReplayHeadups(int pSpecial_zappy_bastard);

// Offset: 1824
// Size: 0x2c
//IDA: void __cdecl DoActionReplayPostSwap()
void DoActionReplayPostSwap();

// Offset: 1868
// Size: 0x6d
//IDA: void __usercall DoZappyActionReplayHeadups(int pSpecial_zappy_bastard@<EAX>)
void DoZappyActionReplayHeadups(int pSpecial_zappy_bastard);

// Offset: 1980
// Size: 0x29
//IDA: void __cdecl DoActionReplayHeadups()
void DoActionReplayHeadups();

// Offset: 2024
// Size: 0x13e
//IDA: void __usercall MoveReplayBuffer(tS32 pMove_amount@<EAX>)
void MoveReplayBuffer(tS32 pMove_amount);

// Offset: 2344
// Size: 0x76
//IDA: void __cdecl MoveToEndOfReplay()
void MoveToEndOfReplay();

// Offset: 2464
// Size: 0x76
//IDA: void __cdecl MoveToStartOfReplay()
void MoveToStartOfReplay();

// Offset: 2584
// Size: 0x18b
//IDA: void __cdecl ToggleReplay()
void ToggleReplay();

// Offset: 2980
// Size: 0x31
//IDA: void __usercall ReverseSound(tS3_effect_tag pEffect_index@<EAX>, tS3_sound_tag pSound_tag@<EDX>)
void ReverseSound(tS3_effect_tag pEffect_index, tS3_sound_tag pSound_tag);

// Offset: 3032
// Size: 0xdf
//IDA: int __cdecl FindUniqueFile()
int FindUniqueFile();

// Offset: 3256
// Size: 0x628
//IDA: void __usercall PollActionReplayControls(tU32 pFrame_period@<EAX>)
void PollActionReplayControls(tU32 pFrame_period);

// Offset: 4832
// Size: 0x5e
//IDA: void __cdecl CheckReplayTurnOn()
void CheckReplayTurnOn();

// Offset: 4928
// Size: 0x62
//IDA: void __cdecl InitializeActionReplay()
void InitializeActionReplay();

// Offset: 5028
// Size: 0x47
//IDA: void __usercall DoActionReplay(tU32 pFrame_period@<EAX>)
void DoActionReplay(tU32 pFrame_period);

// Offset: 5100
// Size: 0x14a
//IDA: void __cdecl SynchronizeActionReplay()
void SynchronizeActionReplay();

#endif
