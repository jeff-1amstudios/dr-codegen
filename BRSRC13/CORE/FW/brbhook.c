#include "brbhook.h"

char rscid[49];

// Offset: 13
// Size: 0x1e
//IDA: void __cdecl _BrBeginHook()
void _BrBeginHook() {
    LOG_TRACE("()");
}

// Offset: 54
// Size: 0x1e
//IDA: void __cdecl _BrEndHook()
void _BrEndHook() {
    LOG_TRACE("()");
}

