#ifndef _MODREND_H_
#define _MODREND_H_

#include "dr_types.h"
#include "br_types.h"

// Offset: 12
// Size: 0xe2
//IDA: void __usercall renderFaces(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void renderFaces(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 250
// Size: 0x8f
//IDA: void __usercall renderEdges(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void renderEdges(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 406
// Size: 0x8f
//IDA: void __usercall renderPoints(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void renderPoints(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 560
// Size: 0x2a
//IDA: void __usercall nullRender(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void nullRender(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 621
// Size: 0x1d3
//IDA: br_model* __usercall makeMeshFromBounds@<EAX>(br_bounds *b@<EAX>)
br_model* makeMeshFromBounds(br_bounds *b);

// Offset: 1112
// Size: 0x4f
//IDA: void __usercall boundingBoxRenderPoints(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void boundingBoxRenderPoints(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 1214
// Size: 0x4f
//IDA: void __usercall boundingBoxRenderEdges(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void boundingBoxRenderEdges(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 1316
// Size: 0x4f
//IDA: void __usercall boundingBoxRenderFaces(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void boundingBoxRenderFaces(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

#endif
