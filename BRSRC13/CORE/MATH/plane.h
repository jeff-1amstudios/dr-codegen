#ifndef _PLANE_H_
#define _PLANE_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 16
// Size: 0x20d
//IDA: br_int_32 __cdecl BrPlaneEquation(br_vector4 *eqn, br_vector3 *v0, br_vector3 *v1, br_vector3 *v2)
br_int_32 BrPlaneEquation(br_vector4 *eqn, br_vector3 *v0, br_vector3 *v1, br_vector3 *v2);

#endif
