#include "errors.h"

char *gError_messages[126];
int gError_code;
char *gPalette_copy;
int gPixel_buffer_size;
int gMouse_was_started;
char *gPixels_copy;

// Offset: 0
// Size: 0xcf
//IDA: void __cdecl FatalError(int pStr_index, ...)
void FatalError(int pStr_index, ...) {
    char the_str[1024];
    char *sub_str;
    char temp_str[1024];
    char *sub_pt;
    va_list ap;
    LOG_TRACE("(%d)", pStr_index);
}

// Offset: 208
// Size: 0xac
//IDA: void __cdecl NonFatalError(int pStr_index, ...)
void NonFatalError(int pStr_index, ...) {
    char the_str[256];
    char *sub_str;
    char temp_str[256];
    char *sub_pt;
    va_list ap;
    LOG_TRACE("(%d)", pStr_index);
}

// Offset: 380
// Size: 0x22
//IDA: void __cdecl CloseDiagnostics()
void CloseDiagnostics() {
    LOG_TRACE("()");
}

// Offset: 416
// Size: 0x22
//IDA: void __cdecl OpenDiagnostics()
void OpenDiagnostics() {
    LOG_TRACE("()");
}

// Offset: 452
// Size: 0x22
//IDA: void __cdecl dprintf(char *fmt_string)
void dprintf(char *fmt_string) {
    LOG_TRACE("(\"%s\")", fmt_string);
}

// Offset: 488
// Size: 0x39
//IDA: int __usercall DoErrorInterface@<EAX>(int pMisc_text_index@<EAX>)
int DoErrorInterface(int pMisc_text_index) {
    LOG_TRACE("(%d)", pMisc_text_index);
}

