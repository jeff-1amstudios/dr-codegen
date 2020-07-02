#ifndef _GENFILE_H_
#define _GENFILE_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 12
// Size: 0x32
//IDA: int __usercall FopRead_END@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_END(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 75
// Size: 0x3f
//IDA: int __usercall FopWrite_END@<EAX>(br_datafile *df@<EAX>)
int FopWrite_END(br_datafile *df);

// Offset: 157
// Size: 0x78
//IDA: int __usercall FopWrite_FILE_INFO@<EAX>(br_datafile *df@<EAX>, br_uint_32 type@<EDX>)
int FopWrite_FILE_INFO(br_datafile *df, br_uint_32 type);

#endif
