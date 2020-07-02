#ifndef _PMSETUP_H_
#define _PMSETUP_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 16
// Size: 0x82
//IDA: void __cdecl BrPixelmapBegin()
void BrPixelmapBegin();

// Offset: 160
// Size: 0x4c
//IDA: void __cdecl BrPixelmapEnd()
void BrPixelmapEnd();

#endif
