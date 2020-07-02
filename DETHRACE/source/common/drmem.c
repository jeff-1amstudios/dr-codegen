#include "drmem.h"

br_resource_class gStainless_classes[118];
char *gMem_names[247];
int gNon_fatal_allocation_errors;
br_allocator gAllocator;

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl SetNonFatalAllocationErrors()
void SetNonFatalAllocationErrors() {
    LOG_TRACE("()");
}

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl ResetNonFatalAllocationErrors()
void ResetNonFatalAllocationErrors() {
    LOG_TRACE("()");
}

// Offset: 88
// Size: 0x44
//IDA: int __cdecl AllocationErrorsAreFatal()
int AllocationErrorsAreFatal() {
    LOG_TRACE("()");
}

// Offset: 156
// Size: 0x22
//IDA: void __cdecl MAMSInitMem()
void MAMSInitMem() {
    int i;
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("()");
}

// Offset: 192
// Size: 0x26
//IDA: void __usercall PrintMemoryDump(int pFlags@<EAX>, char *pTitle@<EDX>)
void PrintMemoryDump(int pFlags, char *pTitle) {
    LOG_TRACE("(%d, \"%s\")", pFlags, pTitle);
}

// Offset: 232
// Size: 0xa9
//IDA: void* __cdecl DRStdlibAllocate(br_size_t size, br_uint_8 type)
void* DRStdlibAllocate(br_size_t size, br_uint_8 type) {
    void *p;
    int i;
    char s[256];
    LOG_TRACE("(%d, %d)", size, type);
}

// Offset: 404
// Size: 0x26
//IDA: void __cdecl DRStdlibFree(void *mem)
void DRStdlibFree(void *mem) {
    int i;
    LOG_TRACE("(%p)", mem);
}

// Offset: 444
// Size: 0x28
//IDA: br_size_t __cdecl DRStdlibInquire(br_uint_8 type)
br_size_t DRStdlibInquire(br_uint_8 type) {
    LOG_TRACE("(%d)", type);
}

// Offset: 484
// Size: 0x28
//IDA: br_uint_32 __cdecl Claim4ByteAlignment(br_uint_8 type)
br_uint_32 Claim4ByteAlignment(br_uint_8 type) {
    LOG_TRACE("(%d)", type);
}

// Offset: 524
// Size: 0x30
//IDA: void __cdecl InstallDRMemCalls()
void InstallDRMemCalls() {
    LOG_TRACE("()");
}

// Offset: 572
// Size: 0x3b
//IDA: void __usercall MAMSUnlock(void **pPtr@<EAX>)
void MAMSUnlock(void **pPtr) {
    LOG_TRACE("(%p)", pPtr);
}

// Offset: 632
// Size: 0x25
//IDA: void __usercall MAMSLock(void **pPtr@<EAX>)
void MAMSLock(void **pPtr) {
    LOG_TRACE("(%p)", pPtr);
}

// Offset: 672
// Size: 0x7c
//IDA: void __cdecl CreateStainlessClasses()
void CreateStainlessClasses() {
    int i;
    LOG_TRACE("()");
}

// Offset: 796
// Size: 0x22
//IDA: void __cdecl CheckMemory()
void CheckMemory() {
    LOG_TRACE("()");
}

