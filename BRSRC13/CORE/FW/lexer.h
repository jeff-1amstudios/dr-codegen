#ifndef _LEXER_H_
#define _LEXER_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 11
// Size: 0x1e
//IDA: void __cdecl lexerError(br_lexer *l, char *string)
void lexerError(br_lexer *l, char *string);

// Offset: 57
// Size: 0xa7
//IDA: br_lexer* __cdecl BrLexerAllocate(br_lexer_keyword *keywords, int nkeywords)
br_lexer* BrLexerAllocate(br_lexer_keyword *keywords, int nkeywords);

// Offset: 242
// Size: 0x39
//IDA: char __cdecl BrLexerCommentSet(br_lexer *l, char eol_comment)
char BrLexerCommentSet(br_lexer *l, char eol_comment);

// Offset: 315
// Size: 0x5e
//IDA: br_lexer_error_cbfn* __cdecl BrLexerErrorSet(br_lexer *l, br_lexer_error_cbfn *error)
br_lexer_error_cbfn* BrLexerErrorSet(br_lexer *l, br_lexer_error_cbfn *error);

// Offset: 421
// Size: 0x2a
//IDA: void __cdecl BrLexerFree(br_lexer *l)
void BrLexerFree(br_lexer *l);

// Offset: 475
// Size: 0x34
//IDA: void __cdecl fileGetchar(br_lexer_source *source)
void fileGetchar(br_lexer_source *source);

// Offset: 543
// Size: 0xd3
//IDA: br_error __cdecl BrLexerPushFile(br_lexer *l, char *file)
br_error BrLexerPushFile(br_lexer *l, char *file);

// Offset: 768
// Size: 0x58
//IDA: void __cdecl stringGetchar(br_lexer_source *source)
void stringGetchar(br_lexer_source *source);

// Offset: 874
// Size: 0x93
//IDA: br_error __cdecl BrLexerPushString(br_lexer *l, char *string, char *name)
br_error BrLexerPushString(br_lexer *l, char *string, char *name);

// Offset: 1032
// Size: 0x53
//IDA: br_lexer_source* __cdecl BrLexerPop(br_lexer *l)
br_lexer_source* BrLexerPop(br_lexer *l);

// Offset: 1128
// Size: 0x4f0
//IDA: void __usercall lexerAdvance(br_lexer *l@<EAX>)
void lexerAdvance(br_lexer *l);

// Offset: 2409
// Size: 0x211
//IDA: void __usercall lexerAdvanceDump(br_lexer *l@<EAX>)
void lexerAdvanceDump(br_lexer *l);

// Offset: 2953
// Size: 0x56
//IDA: br_error __cdecl BrLexerDumpSet(br_lexer *l, br_putline_cbfn *putline, void *putline_arg)
br_error BrLexerDumpSet(br_lexer *l, br_putline_cbfn *putline, void *putline_arg);

// Offset: 3057
// Size: 0x21b
//IDA: void __cdecl BrLexerTokenError(br_lexer *l, br_lexer_token_id t)
void BrLexerTokenError(br_lexer *l, br_lexer_token_id t);

// Offset: 3612
// Size: 0x7e
//IDA: void __cdecl BrLexerPosition(br_lexer *l, char *buf, br_size_t buf_size)
void BrLexerPosition(br_lexer *l, char *buf, br_size_t buf_size);

// Offset: 3751
// Size: 0xd5
//IDA: br_scalar __cdecl BrParseFixed(br_lexer *l)
br_scalar BrParseFixed(br_lexer *l);

// Offset: 3977
// Size: 0xd1
//IDA: br_float __cdecl BrParseFloat(br_lexer *l)
br_float BrParseFloat(br_lexer *l);

// Offset: 4201
// Size: 0xaa
//IDA: br_int_32 __cdecl BrParseInteger(br_lexer *l)
br_int_32 BrParseInteger(br_lexer *l);

// Offset: 4390
// Size: 0xd5
//IDA: br_int_32 __cdecl BrParseVectorFixed(br_lexer *l, br_fixed_ls *v, br_int_32 max)
br_int_32 BrParseVectorFixed(br_lexer *l, br_fixed_ls *v, br_int_32 max);

// Offset: 4622
// Size: 0xd5
//IDA: br_int_32 __cdecl BrParseVectorFloat(br_lexer *l, br_float *v, br_int_32 max)
br_int_32 BrParseVectorFloat(br_lexer *l, br_float *v, br_int_32 max);

// Offset: 4854
// Size: 0xda
//IDA: br_int_32 __cdecl BrParseMatrixFixed(br_lexer *l, br_fixed_ls *m, br_int_32 width, br_int_32 max_h)
br_int_32 BrParseMatrixFixed(br_lexer *l, br_fixed_ls *m, br_int_32 width, br_int_32 max_h);

// Offset: 5091
// Size: 0xda
//IDA: br_int_32 __cdecl BrParseMatrixFloat(br_lexer *l, br_float *m, br_int_32 width, br_int_32 max_h)
br_int_32 BrParseMatrixFloat(br_lexer *l, br_float *m, br_int_32 width, br_int_32 max_h);

#endif
