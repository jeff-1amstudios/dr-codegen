#include "pmsetup.h"

br_image Image_BRPMAP1;
br_resource_class resourceClasses[2];
void *functionPointers_BRPMAP1[77];
char *namePointers_BRPMAP1[77];
br_pixelmap_state _pixelmap;
br_uint_16 nameOrdinals_BRPMAP1[77];

// Offset: 16
// Size: 0x82
//IDA: void __cdecl BrPixelmapBegin()
void BrPixelmapBegin() {
    int i;
    LOG_TRACE("()");
}

// Offset: 160
// Size: 0x4c
//IDA: void __cdecl BrPixelmapEnd()
void BrPixelmapEnd() {
    LOG_TRACE("()");
}

