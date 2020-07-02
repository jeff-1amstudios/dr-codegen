#include "hstsetup.h"

host_info hostInfo;
void *functionPointers_BRHOST1[50];
br_image Image_BRHOST1;
char *namePointers_BRHOST1[50];
br_uint_16 nameOrdinals_BRHOST1[50];

// Offset: 10
// Size: 0x31
//IDA: void __cdecl HostBegin()
void HostBegin() {
    LOG_TRACE("()");
}

// Offset: 67
// Size: 0x31
//IDA: void __cdecl HostEnd()
void HostEnd() {
    LOG_TRACE("()");
}

// Offset: 125
// Size: 0x7d
//IDA: br_error __cdecl HostInfo(host_info *buffer, br_size_t buffersize)
br_error HostInfo(host_info *buffer, br_size_t buffersize) {
    br_int_32 features;
    LOG_TRACE("(%p, %d)", buffer, buffersize);
}

