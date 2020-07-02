#ifndef _OPPOCAR_H_
#define _OPPOCAR_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0x59
//IDA: void __usercall MakeCarStationary(tCar_spec *pCar_spec@<EAX>)
void MakeCarStationary(tCar_spec *pCar_spec);

// Offset: 92
// Size: 0x52b
//IDA: void __usercall MoveThisCar(tU32 pTime_difference@<EAX>, tCar_spec *car@<EDX>)
void MoveThisCar(tU32 pTime_difference, tCar_spec *car);

#endif
