#include "math.h"

char rscid[46];

// Offset: 13
// Size: 0x3d
//IDA: float __cdecl BrFloatFloor(float f)
float BrFloatFloor(float f) {
    LOG_TRACE("(%f)", f);
}

// Offset: 86
// Size: 0x3d
//IDA: float __cdecl BrFloatCeil(float f)
float BrFloatCeil(float f) {
    LOG_TRACE("(%f)", f);
}

// Offset: 159
// Size: 0x3d
//IDA: float __cdecl BrFloatSqrt(float f)
float BrFloatSqrt(float f) {
    LOG_TRACE("(%f)", f);
}

// Offset: 231
// Size: 0x46
//IDA: float __cdecl BrFloatPow(float a, float b)
float BrFloatPow(float a, float b) {
    LOG_TRACE("(%f, %f)", a, b);
}

// Offset: 314
// Size: 0x46
//IDA: float __cdecl BrFloatAtan2(float x, float y)
float BrFloatAtan2(float x, float y) {
    LOG_TRACE("(%f, %f)", x, y);
}

