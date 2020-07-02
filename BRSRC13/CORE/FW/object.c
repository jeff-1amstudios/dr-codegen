#include "object.h"

char rscid[48];

// Offset: 19
// Size: 0x4c
//IDA: br_error __cdecl _M_br_object_query(br_object *self, br_uint_32 *pvalue, br_token t)
br_error _M_br_object_query(br_object *self, br_uint_32 *pvalue, br_token t) {
    LOG_TRACE("(%p, %p, %d)", self, pvalue, t);
}

// Offset: 120
// Size: 0x50
//IDA: br_error __cdecl _M_br_object_queryBuffer(br_object *self, br_uint_32 *pvalue, br_uint_32 *buffer, br_size_t buffer_size, br_token t)
br_error _M_br_object_queryBuffer(br_object *self, br_uint_32 *pvalue, br_uint_32 *buffer, br_size_t buffer_size, br_token t) {
    LOG_TRACE("(%p, %p, %p, %d, %d)", self, pvalue, buffer, buffer_size, t);
}

// Offset: 223
// Size: 0x50
//IDA: br_error __cdecl _M_br_object_queryMany(br_object *self, br_token_value *tv, void *extra, br_size_t extra_size, br_int_32 *pcount)
br_error _M_br_object_queryMany(br_object *self, br_token_value *tv, void *extra, br_size_t extra_size, br_int_32 *pcount) {
    LOG_TRACE("(%p, %p, %p, %d, %p)", self, tv, extra, extra_size, pcount);
}

// Offset: 330
// Size: 0x48
//IDA: br_error __cdecl _M_br_object_queryManySize(br_object *self, br_size_t *pextra_size, br_token_value *tv)
br_error _M_br_object_queryManySize(br_object *self, br_size_t *pextra_size, br_token_value *tv) {
    LOG_TRACE("(%p, %p, %p)", self, pextra_size, tv);
}

// Offset: 424
// Size: 0x48
//IDA: br_error __cdecl _M_br_object_queryAll(br_object *self, br_token_value *buffer, br_size_t buffer_size)
br_error _M_br_object_queryAll(br_object *self, br_token_value *buffer, br_size_t buffer_size) {
    LOG_TRACE("(%p, %p, %d)", self, buffer, buffer_size);
}

// Offset: 522
// Size: 0x44
//IDA: br_error __cdecl _M_br_object_queryAllSize(br_object *self, br_size_t *psize)
br_error _M_br_object_queryAllSize(br_object *self, br_size_t *psize) {
    LOG_TRACE("(%p, %p)", self, psize);
}

// Offset: 604
// Size: 0x43
//IDA: void __cdecl _BrObjectFree(void *res, br_uint_8 res_class, br_size_t size)
void _BrObjectFree(void *res, br_uint_8 res_class, br_size_t size) {
    br_object *o;
    LOG_TRACE("(%p, %d, %d)", res, res_class, size);
}

