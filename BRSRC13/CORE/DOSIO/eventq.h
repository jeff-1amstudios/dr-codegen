#ifndef _EVENTQ_H_
#define _EVENTQ_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 14
// Size: 0xc8
//IDA: br_error __cdecl DOSEventBegin()
br_error DOSEventBegin();

// Offset: 226
// Size: 0x3f
//IDA: void __cdecl DOSEventEnd()
void DOSEventEnd();

// Offset: 302
// Size: 0x197
//IDA: br_boolean __cdecl DOSEventWait(dosio_event *event, br_boolean block)
br_boolean DOSEventWait(dosio_event *event, br_boolean block);

#endif
