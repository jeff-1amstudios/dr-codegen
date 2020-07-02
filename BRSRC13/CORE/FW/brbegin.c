#include "brbegin.h"

br_boolean active;
char rscid[54];

// Offset: 8
// Size: 0x58
//IDA: br_error __cdecl BrBegin()
br_error BrBegin() {
    LOG_TRACE("()");
}

// Offset: 102
// Size: 0x7e
//IDA: br_error __cdecl BrEnd()
br_error BrEnd() {
    br_device *dev;
    LOG_TRACE("()");
}

