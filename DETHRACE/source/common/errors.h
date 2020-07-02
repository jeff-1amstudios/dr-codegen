#ifndef _ERRORS_H_
#define _ERRORS_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0xcf
//IDA: void __cdecl FatalError(int pStr_index, ...)
void FatalError(int pStr_index, ...);

// Offset: 208
// Size: 0xac
//IDA: void __cdecl NonFatalError(int pStr_index, ...)
void NonFatalError(int pStr_index, ...);

// Offset: 380
// Size: 0x22
//IDA: void __cdecl CloseDiagnostics()
void CloseDiagnostics();

// Offset: 416
// Size: 0x22
//IDA: void __cdecl OpenDiagnostics()
void OpenDiagnostics();

// Offset: 452
// Size: 0x22
//IDA: void __cdecl dprintf(char *fmt_string)
void dprintf(char *fmt_string);

// Offset: 488
// Size: 0x39
//IDA: int __usercall DoErrorInterface@<EAX>(int pMisc_text_index@<EAX>)
int DoErrorInterface(int pMisc_text_index);

#endif
