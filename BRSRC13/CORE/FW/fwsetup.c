#include "fwsetup.h"

br_image Image_BRCORE1;
br_framework_state fw;
void *functionPointers_BRCORE1[185];
char *namePointers_BRCORE1[185];
br_resource_class resourceClasses[25];
br_uint_16 nameOrdinals_BRCORE1[185];
char rscid[53];

// Offset: 10
// Size: 0x144
//IDA: br_error __cdecl BrFwBegin()
br_error BrFwBegin() {
    int i;
    LOG_TRACE("()");
}

// Offset: 342
// Size: 0x6b
//IDA: br_error __cdecl BrFwEnd()
br_error BrFwEnd() {
    LOG_TRACE("()");
}

// Offset: 466
// Size: 0x49
//IDA: br_diaghandler* __cdecl BrDiagHandlerSet(br_diaghandler *newdh)
br_diaghandler* BrDiagHandlerSet(br_diaghandler *newdh) {
    br_diaghandler *old;
    LOG_TRACE("(%p)", newdh);
}

// Offset: 555
// Size: 0x49
//IDA: br_filesystem* __cdecl BrFilesystemSet(br_filesystem *newfs)
br_filesystem* BrFilesystemSet(br_filesystem *newfs) {
    br_filesystem *old;
    LOG_TRACE("(%p)", newfs);
}

// Offset: 643
// Size: 0x49
//IDA: br_allocator* __cdecl BrAllocatorSet(br_allocator *newal)
br_allocator* BrAllocatorSet(br_allocator *newal) {
    br_allocator *old;
    LOG_TRACE("(%p)", newal);
}

