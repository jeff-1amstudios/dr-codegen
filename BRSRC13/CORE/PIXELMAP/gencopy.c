#include "gencopy.h"

char rscid[49];

// Offset: 21
// Size: 0x32
//IDA: br_error __usercall GeneralRectangleCopy@<EAX>(br_device_pixelmap *dest@<EAX>, br_point *p@<EDX>, br_device_pixelmap *src@<EBX>, br_rectangle *r@<ECX>)
br_error GeneralRectangleCopy(br_device_pixelmap *dest, br_point *p, br_device_pixelmap *src, br_rectangle *r) {
    LOG_TRACE("(%p, %p, %p, %p)", dest, p, src, r);
}

// Offset: 83
// Size: 0x30
//IDA: br_error __usercall GeneralCopy@<EAX>(br_device_pixelmap *dst@<EAX>, br_device_pixelmap *src@<EDX>)
br_error GeneralCopy(br_device_pixelmap *dst, br_device_pixelmap *src) {
    LOG_TRACE("(%p, %p)", dst, src);
}

// Offset: 159
// Size: 0x32
//IDA: br_error __usercall GeneralRectangleStretchCopy@<EAX>(br_device_pixelmap *dst@<EAX>, br_rectangle *d@<EDX>, br_device_pixelmap *src@<EBX>, br_rectangle *s@<ECX>)
br_error GeneralRectangleStretchCopy(br_device_pixelmap *dst, br_rectangle *d, br_device_pixelmap *src, br_rectangle *s) {
    LOG_TRACE("(%p, %p, %p, %p)", dst, d, src, s);
}

