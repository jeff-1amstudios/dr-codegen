#ifndef _HSTSETUP_H_
#define _HSTSETUP_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 10
// Size: 0x31
//IDA: void __cdecl HostBegin()
void HostBegin();

// Offset: 67
// Size: 0x31
//IDA: void __cdecl HostEnd()
void HostEnd();

// Offset: 125
// Size: 0x7d
//IDA: br_error __cdecl HostInfo(host_info *buffer, br_size_t buffersize)
br_error HostInfo(host_info *buffer, br_size_t buffersize);

#endif
