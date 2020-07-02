#include "devsetup.h"

br_pixelmap *last_begin_screen;
char rscid[51];

// Offset: 20
// Size: 0x2d
//IDA: br_pixelmap* __cdecl BrDevLastBeginQuery()
br_pixelmap* BrDevLastBeginQuery() {
    LOG_TRACE("()");
}

// Offset: 83
// Size: 0x2d
//IDA: void __usercall BrDevLastBeginSet(br_pixelmap *pm@<EAX>)
void BrDevLastBeginSet(br_pixelmap *pm) {
    LOG_TRACE("(%p)", pm);
}

// Offset: 142
// Size: 0xd6
//IDA: br_error __cdecl BrDevBeginVar(br_pixelmap **ppm, char *setup_string, ...)
br_error BrDevBeginVar(br_pixelmap **ppm, char *setup_string, ...) {
    va_list vl;
    br_uint_32 i;
    br_uint_32 n;
    br_token_value tv[64];
    LOG_TRACE("(%p, \"%s\")", ppm, setup_string);
}

// Offset: 367
// Size: 0x36
//IDA: br_error __cdecl BrDevBegin(br_pixelmap **ppm, char *setup_string)
br_error BrDevBegin(br_pixelmap **ppm, char *setup_string) {
    LOG_TRACE("(%p, \"%s\")", ppm, setup_string);
}

// Offset: 434
// Size: 0x549
//IDA: br_error __cdecl BrDevBeginTV(br_pixelmap **ppm, char *setup_string, br_token_value *setup_tv)
br_error BrDevBeginTV(br_pixelmap **ppm, char *setup_string, br_token_value *setup_tv) {
    char str[512];
    char *args;
    char *devname;
    char *devargs;
    char devices_str[512];
    char *device_name;
    char *device_args;
    char *next_device;
    br_token_value args_tv[64];
    br_token_value *tv;
    br_output_facility *output_facility;
    br_device *device;
    br_pixelmap *screen;
    int i;
    int n;
    br_error r;
    LOG_TRACE("(%p, \"%s\", %p)", ppm, setup_string, setup_tv);
}

// Offset: 1801
// Size: 0x60
//IDA: br_pixelmap* __cdecl BrDevBeginOld(char *setup_string)
br_pixelmap* BrDevBeginOld(char *setup_string) {
    br_pixelmap *s;
    LOG_TRACE("(\"%s\")", setup_string);
}

// Offset: 1909
// Size: 0x3c
//IDA: void __cdecl BrDevEndOld()
void BrDevEndOld() {
    LOG_TRACE("()");
}

// Offset: 1988
// Size: 0x39
//IDA: void __cdecl BrDevPaletteSetOld(br_pixelmap *pm)
void BrDevPaletteSetOld(br_pixelmap *pm) {
    LOG_TRACE("(%p)", pm);
}

// Offset: 2069
// Size: 0x3d
//IDA: void __cdecl BrDevPaletteSetEntryOld(int i, br_colour colour)
void BrDevPaletteSetEntryOld(int i, br_colour colour) {
    LOG_TRACE("(%d, %d)", i, colour);
}

// Offset: 2153
// Size: 0x1c7
//IDA: br_error __cdecl BrRendererFacilityFind(br_renderer_facility **prf, br_device_pixelmap *destination, br_token scalar_type)
br_error BrRendererFacilityFind(br_renderer_facility **prf, br_device_pixelmap *destination, br_token scalar_type) {
    br_renderer_facility *renderer_facility;
    br_error r;
    br_output_facility *ot;
    char object_name[23];
    char image_name[9];
    br_boolean scalar_is_valid;
    LOG_TRACE("(%p, %p, %d)", prf, destination, scalar_type);
}

// Offset: 2631
// Size: 0x1c7
//IDA: br_error __cdecl BrPrimitiveLibraryFind(br_primitive_library **ppl, br_device_pixelmap *destination, br_token scalar_type)
br_error BrPrimitiveLibraryFind(br_primitive_library **ppl, br_device_pixelmap *destination, br_token scalar_type) {
    br_primitive_library *primitive_library;
    br_error r;
    br_output_facility *ot;
    char object_name[25];
    char image_name[9];
    br_boolean scalar_is_valid;
    LOG_TRACE("(%p, %p, %d)", ppl, destination, scalar_type);
}

// Offset: 3107
// Size: 0x223
//IDA: br_error __cdecl BrGeometryFormatFind(br_geometry **pgf, br_renderer *renderer, br_renderer_facility *renderer_facility, br_token scalar_type, br_token format_type)
br_error BrGeometryFormatFind(br_geometry **pgf, br_renderer *renderer, br_renderer_facility *renderer_facility, br_token scalar_type, br_token format_type) {
    br_error r;
    br_geometry *gf;
    char object_name[21];
    char image_name[9];
    br_boolean scalar_is_valid;
    LOG_TRACE("(%p, %p, %p, %d, %d)", pgf, renderer, renderer_facility, scalar_type, format_type);
}

