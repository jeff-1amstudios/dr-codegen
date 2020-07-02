#ifndef _READMSE_H_
#define _READMSE_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 14
// Size: 0x166
//IDA: br_error __cdecl DOSMouseBegin()
br_error DOSMouseBegin();

// Offset: 384
// Size: 0x5c
//IDA: void __cdecl DOSMouseEnd()
void DOSMouseEnd();

// Offset: 489
// Size: 0xd9
//IDA: br_error __cdecl DOSMouseRead(br_int_32 *mouse_x, br_int_32 *mouse_y, br_uint_32 *mouse_buttons)
br_error DOSMouseRead(br_int_32 *mouse_x, br_int_32 *mouse_y, br_uint_32 *mouse_buttons);

#endif
