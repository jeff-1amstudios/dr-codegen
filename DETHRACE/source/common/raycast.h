#ifndef _RAYCAST_H_
#define _RAYCAST_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 0
// Size: 0xbe
//IDA: int __usercall DRActorToRoot@<EAX>(br_actor *a@<EAX>, br_actor *world@<EDX>, br_matrix34 *m@<EBX>)
int DRActorToRoot(br_actor *a, br_actor *world, br_matrix34 *m);

// Offset: 192
// Size: 0xdc
//IDA: void __cdecl InitRayCasting()
void InitRayCasting();

// Offset: 412
// Size: 0x68
//IDA: int __cdecl BadDiv(br_scalar a, br_scalar b)
int BadDiv(br_scalar a, br_scalar b);

// Offset: 516
// Size: 0x49
//IDA: void __usercall DRVector2AccumulateScale(br_vector2 *a@<EAX>, br_vector2 *b@<EDX>, br_scalar s)
void DRVector2AccumulateScale(br_vector2 *a, br_vector2 *b, br_scalar s);

// Offset: 592
// Size: 0x220
//IDA: int __usercall PickBoundsTestRay@<EAX>(br_bounds *b@<EAX>, br_vector3 *rp@<EDX>, br_vector3 *rd@<EBX>, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far)
int PickBoundsTestRay(br_bounds *b, br_vector3 *rp, br_vector3 *rd, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far);

// Offset: 1136
// Size: 0x26b
//IDA: int __usercall ActorPick2D@<EAX>(br_actor *ap@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, dr_pick2d_cbfn *callback@<ECX>, void *arg)
int ActorPick2D(br_actor *ap, br_model *model, br_material *material, dr_pick2d_cbfn *callback, void *arg);

// Offset: 1756
// Size: 0x156
//IDA: int __usercall DRScenePick2DXY@<EAX>(br_actor *world@<EAX>, br_actor *camera@<EDX>, br_pixelmap *viewport@<EBX>, int pick_x@<ECX>, int pick_y, dr_pick2d_cbfn *callback, void *arg)
int DRScenePick2DXY(br_actor *world, br_actor *camera, br_pixelmap *viewport, int pick_x, int pick_y, dr_pick2d_cbfn *callback, void *arg);

// Offset: 2100
// Size: 0x10a
//IDA: int __usercall DRScenePick2D@<EAX>(br_actor *world@<EAX>, br_actor *camera@<EDX>, dr_pick2d_cbfn *callback@<EBX>, void *arg@<ECX>)
int DRScenePick2D(br_actor *world, br_actor *camera, dr_pick2d_cbfn *callback, void *arg);

// Offset: 2368
// Size: 0x6f1
//IDA: int __usercall DRModelPick2D@<EAX>(br_model *model@<EAX>, br_material *material@<EDX>, br_vector3 *ray_pos@<EBX>, br_vector3 *ray_dir@<ECX>, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg)
int DRModelPick2D(br_model *model, br_material *material, br_vector3 *ray_pos, br_vector3 *ray_dir, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg);

// Offset: 4148
// Size: 0x8d
//IDA: int __cdecl FindHighestPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg)
int FindHighestPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg);

// Offset: 4292
// Size: 0x70
//IDA: int __cdecl FindHighestCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg)
int FindHighestCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg);

// Offset: 4404
// Size: 0xc2
//IDA: void __usercall FindBestY(br_vector3 *pPosition@<EAX>, br_actor *gWorld@<EDX>, br_scalar pStarting_height, br_scalar *pNearest_y_above, br_scalar *pNearest_y_below, br_model **pNearest_above_model, br_model **pNearest_below_model, int *pNearest_above_face_index, int *pNearest_below_face_index)
void FindBestY(br_vector3 *pPosition, br_actor *gWorld, br_scalar pStarting_height, br_scalar *pNearest_y_above, br_scalar *pNearest_y_below, br_model **pNearest_above_model, br_model **pNearest_below_model, int *pNearest_above_face_index, int *pNearest_below_face_index);

// Offset: 4600
// Size: 0x66
//IDA: int __cdecl FindYVerticallyBelowPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg)
int FindYVerticallyBelowPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg);

// Offset: 4704
// Size: 0x70
//IDA: int __cdecl FindYVerticallyBelowCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg)
int FindYVerticallyBelowCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg);

// Offset: 4816
// Size: 0x22e
//IDA: br_scalar __usercall FindYVerticallyBelow@<ST0>(br_vector3 *pPosition@<EAX>)
br_scalar FindYVerticallyBelow(br_vector3 *pPosition);

// Offset: 5376
// Size: 0x6e
//IDA: br_scalar __usercall FindYVerticallyBelow2@<ST0>(br_vector3 *pCast_point@<EAX>)
br_scalar FindYVerticallyBelow2(br_vector3 *pCast_point);

#endif
