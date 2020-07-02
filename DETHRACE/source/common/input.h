#ifndef _INPUT_H_
#define _INPUT_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0x3e4
//IDA: void __usercall SetJoystickArrays(int *pKeys@<EAX>, int pMark@<EDX>)
void SetJoystickArrays(int *pKeys, int pMark);

// Offset: 996
// Size: 0x52
//IDA: void __cdecl PollKeys()
void PollKeys();

// Offset: 1080
// Size: 0x7f
//IDA: void __cdecl CyclePollKeys()
void CyclePollKeys();

// Offset: 1208
// Size: 0x74
//IDA: void __cdecl ResetPollKeys()
void ResetPollKeys();

// Offset: 1324
// Size: 0x4c
//IDA: void __cdecl CheckKeysForMouldiness()
void CheckKeysForMouldiness();

// Offset: 1400
// Size: 0x52
//IDA: int __cdecl EitherMouseButtonDown()
int EitherMouseButtonDown();

// Offset: 1484
// Size: 0xd6
//IDA: tKey_down_result __usercall PDKeyDown2@<EAX>(int pKey_index@<EAX>)
tKey_down_result PDKeyDown2(int pKey_index);

// Offset: 1700
// Size: 0x82
//IDA: int __usercall PDKeyDown@<EAX>(int pKey_index@<EAX>)
int PDKeyDown(int pKey_index);

// Offset: 1832
// Size: 0x75
//IDA: int __usercall PDKeyDown3@<EAX>(int pKey_index@<EAX>)
int PDKeyDown3(int pKey_index);

// Offset: 1952
// Size: 0xd0
//IDA: int __cdecl PDAnyKeyDown()
int PDAnyKeyDown();

// Offset: 2160
// Size: 0x58
//IDA: int __cdecl AnyKeyDown()
int AnyKeyDown();

// Offset: 2248
// Size: 0x1c3
//IDA: tU32* __cdecl KevKeyService()
tU32* KevKeyService();

// Offset: 2700
// Size: 0x91
//IDA: int __usercall OldKeyIsDown@<EAX>(int pKey_index@<EAX>)
int OldKeyIsDown(int pKey_index);

// Offset: 2848
// Size: 0x9d
//IDA: int __usercall KeyIsDown@<EAX>(int pKey_index@<EAX>)
int KeyIsDown(int pKey_index);

// Offset: 3008
// Size: 0x40
//IDA: void __cdecl WaitForNoKeys()
void WaitForNoKeys();

// Offset: 3072
// Size: 0x43
//IDA: void __cdecl WaitForAKey()
void WaitForAKey();

// Offset: 3140
// Size: 0x67
//IDA: int __usercall CmdKeyDown@<EAX>(int pFKey_ID@<EAX>, int pCmd_key_ID@<EDX>)
int CmdKeyDown(int pFKey_ID, int pCmd_key_ID);

// Offset: 3244
// Size: 0xce
//IDA: void __usercall GetMousePosition(int *pX_coord@<EAX>, int *pY_coord@<EDX>)
void GetMousePosition(int *pX_coord, int *pY_coord);

// Offset: 3452
// Size: 0x7d
//IDA: void __cdecl InitRollingLetters()
void InitRollingLetters();

// Offset: 3580
// Size: 0x30
//IDA: void __cdecl EndRollingLetters()
void EndRollingLetters();

// Offset: 3628
// Size: 0x180
//IDA: int __usercall AddRollingLetter@<EAX>(char pChar@<EAX>, int pX@<EDX>, int pY@<EBX>, tRolling_type rolling_type@<ECX>)
int AddRollingLetter(char pChar, int pX, int pY, tRolling_type rolling_type);

// Offset: 4012
// Size: 0x6f
//IDA: void __usercall AddRollingString(char *pStr@<EAX>, int pX@<EDX>, int pY@<EBX>, tRolling_type rolling_type@<ECX>)
void AddRollingString(char *pStr, int pX, int pY, tRolling_type rolling_type);

// Offset: 4124
// Size: 0x55
//IDA: void __usercall AddRollingNumber(tU32 pNumber@<EAX>, int pWidth@<EDX>, int pX@<EBX>, int pY@<ECX>)
void AddRollingNumber(tU32 pNumber, int pWidth, int pX, int pY);

// Offset: 4212
// Size: 0x28b
//IDA: void __cdecl RollLettersIn()
void RollLettersIn();

// Offset: 4864
// Size: 0x159
//IDA: int __usercall ChangeCharTo@<EAX>(int pSlot_index@<EAX>, int pChar_index@<EDX>, char pNew_char@<EBX>)
int ChangeCharTo(int pSlot_index, int pChar_index, char pNew_char);

// Offset: 5212
// Size: 0x19d
//IDA: void __usercall ChangeTextTo(int pXcoord@<EAX>, int pYcoord@<EDX>, char *pNew_str@<EBX>, char *pOld_str@<ECX>)
void ChangeTextTo(int pXcoord, int pYcoord, char *pNew_str, char *pOld_str);

// Offset: 5628
// Size: 0x3d
//IDA: void __usercall SetRollingCursor(int pSlot_index@<EAX>)
void SetRollingCursor(int pSlot_index);

// Offset: 5692
// Size: 0x5a
//IDA: void __usercall BlankSlot(int pIndex@<EAX>, int pName_length@<EDX>, int pVisible_length@<EBX>)
void BlankSlot(int pIndex, int pName_length, int pVisible_length);

// Offset: 5784
// Size: 0xe8
//IDA: void __usercall DoRLBackspace(int pSlot_index@<EAX>)
void DoRLBackspace(int pSlot_index);

// Offset: 6016
// Size: 0xbe
//IDA: void __usercall DoRLDelete(int pSlot_index@<EAX>)
void DoRLDelete(int pSlot_index);

// Offset: 6208
// Size: 0x46
//IDA: void __usercall DoRLInsert(int pSlot_index@<EAX>)
void DoRLInsert(int pSlot_index);

// Offset: 6280
// Size: 0x89
//IDA: void __usercall DoRLCursorLeft(int pSlot_index@<EAX>)
void DoRLCursorLeft(int pSlot_index);

// Offset: 6420
// Size: 0x65
//IDA: void __usercall DoRLCursorRight(int pSlot_index@<EAX>)
void DoRLCursorRight(int pSlot_index);

// Offset: 6524
// Size: 0x143
//IDA: void __usercall DoRLTypeLetter(int pChar@<EAX>, int pSlot_index@<EDX>)
void DoRLTypeLetter(int pChar, int pSlot_index);

// Offset: 6848
// Size: 0x7b
//IDA: void __usercall StopTyping(int pSlot_index@<EAX>)
void StopTyping(int pSlot_index);

// Offset: 6972
// Size: 0x79
//IDA: void __usercall RevertTyping(int pSlot_index@<EAX>, char *pRevert_str@<EDX>)
void RevertTyping(int pSlot_index, char *pRevert_str);

// Offset: 7096
// Size: 0x5b
//IDA: void __usercall StartTyping(int pSlot_index@<EAX>, char *pText@<EDX>, int pVisible_length@<EBX>)
void StartTyping(int pSlot_index, char *pText, int pVisible_length);

// Offset: 7188
// Size: 0xb0
//IDA: void __usercall TypeKey(int pSlot_index@<EAX>, char pKey@<EDX>)
void TypeKey(int pSlot_index, char pKey);

// Offset: 7364
// Size: 0x45
//IDA: void __usercall SetSlotXY(int pSlot_index@<EAX>, int pX_coord@<EDX>, int pY_coord@<EBX>)
void SetSlotXY(int pSlot_index, int pX_coord, int pY_coord);

// Offset: 7436
// Size: 0x5d
//IDA: void __usercall GetTypedName(char *pDestn@<EAX>, int pMax_length@<EDX>)
void GetTypedName(char *pDestn, int pMax_length);

// Offset: 7532
// Size: 0xd4
//IDA: void __usercall KillCursor(int pSlot_index@<EAX>)
void KillCursor(int pSlot_index);

// Offset: 7744
// Size: 0x2c
//IDA: void __cdecl EdgeTriggerModeOn()
void EdgeTriggerModeOn();

// Offset: 7788
// Size: 0x2c
//IDA: void __cdecl EdgeTriggerModeOff()
void EdgeTriggerModeOff();

#endif
