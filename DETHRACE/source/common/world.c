#include "world.h"

br_actor *gActor_array[500];
float *gGroove_funk_bindings[960];
br_actor *gDelete_list[500];
br_actor *gLight_array[50];
br_model *gAdditional_models[1000];
br_actor *gSpec_vol_actors[100];
char *gDepth_effect_names[2];
char *gFunk_nature_names[4];
char *gGroove_object_names[4];
char *gGroove_path_names[2];
char *gGroove_nature_names[2];
char *gFunk_anim_names[2];
char *gFunk_move_names[6];
tPath_name gAdditional_actor_path;
char *gTime_mode_names[2];
tPath_name gAdditional_model_path;
tU32 gPrevious_groove_times[2];
int gRace_file_version;
br_vector3 gActor_centre;
tWall_texturing_level gWall_texturing_level;
int gNumber_of_additional_models;
int gNumber_of_actors;
float gTemp;
br_actor *gLast_actor;
br_actor *gKnown_actor;
br_actor *gAdditional_actors;
br_actor *gGroove_by_proxy_actor;
int gRendering_accessories;
tScale_mode gCurrent_scale_mode;
int gNumber_of_lights;
tRoad_texturing_level gRoad_texturing_level;
int gDelete_count;
br_scalar gNearest_distance;
br_actor *gNearest_actor;
br_actor *gStandard_lamp;
tRotate_mode gCurrent_rotate_mode;
tCar_texturing_level gCar_texturing_level;
br_scalar gSight_distance_squared;
char *gLollipop_names[3];
char *gAxis_names[3];
int gGroovidelics_array_size;
tGroovidelic_spec *gGroovidelics_array;
int gSpec_vol_mode;
char *gFunk_type_names[5];
tFunkotronic_spec *gFunkotronics_array;
int gFunkotronics_array_size;

// Offset: 0
// Size: 0x58
//IDA: float __cdecl MapSawToTriangle(float pNumber)
float MapSawToTriangle(float pNumber) {
    LOG_TRACE("(%f)", pNumber);
}

// Offset: 88
// Size: 0x3e
//IDA: void __cdecl SetSightDistance(br_scalar pYon)
void SetSightDistance(br_scalar pYon) {
    LOG_TRACE("(%f)", pYon);
}

// Offset: 152
// Size: 0x79
//IDA: br_actor* __usercall FindActorInArray@<EAX>(char *pThe_name@<EAX>)
br_actor* FindActorInArray(char *pThe_name) {
    int i;
    LOG_TRACE("(\"%s\")", pThe_name);
}

// Offset: 276
// Size: 0x79
//IDA: br_actor* __usercall FindLightInArray@<EAX>(char *pThe_name@<EAX>)
br_actor* FindLightInArray(char *pThe_name) {
    int i;
    LOG_TRACE("(\"%s\")", pThe_name);
}

// Offset: 400
// Size: 0xdf
//IDA: br_actor* __usercall CloneActor@<EAX>(br_actor *pSource_actor@<EAX>)
br_actor* CloneActor(br_actor *pSource_actor) {
    br_actor *new_actor;
    br_actor *child_actor;
    br_actor *new_child_actor;
    LOG_TRACE("(%p)", pSource_actor);
}

// Offset: 624
// Size: 0xf7
//IDA: void __usercall InitialiseStorageSpace(tBrender_storage *pStorage_space@<EAX>, int pMax_pixelmaps@<EDX>, int pMax_shade_tables@<EBX>, int pMax_materials@<ECX>, int pMax_models)
void InitialiseStorageSpace(tBrender_storage *pStorage_space, int pMax_pixelmaps, int pMax_shade_tables, int pMax_materials, int pMax_models) {
    LOG_TRACE("(%p, %d, %d, %d, %d)", pStorage_space, pMax_pixelmaps, pMax_shade_tables, pMax_materials, pMax_models);
}

// Offset: 872
// Size: 0x6b
//IDA: void __usercall DisposeStorageSpace(tBrender_storage *pStorage_space@<EAX>)
void DisposeStorageSpace(tBrender_storage *pStorage_space) {
    LOG_TRACE("(%p)", pStorage_space);
}

// Offset: 980
// Size: 0x1cf
//IDA: void __usercall ClearOutStorageSpace(tBrender_storage *pStorage_space@<EAX>)
void ClearOutStorageSpace(tBrender_storage *pStorage_space) {
    int i;
    LOG_TRACE("(%p)", pStorage_space);
}

// Offset: 1444
// Size: 0xe8
//IDA: tAdd_to_storage_result __usercall AddPixelmapToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_pixelmap **pThe_pm@<EDX>)
tAdd_to_storage_result AddPixelmapToStorage(tBrender_storage *pStorage_space, br_pixelmap **pThe_pm) {
    int i;
    LOG_TRACE("(%p, %p)", pStorage_space, pThe_pm);
}

// Offset: 1676
// Size: 0xd3
//IDA: tAdd_to_storage_result __usercall AddShadeTableToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_pixelmap *pThe_st@<EDX>)
tAdd_to_storage_result AddShadeTableToStorage(tBrender_storage *pStorage_space, br_pixelmap *pThe_st) {
    int i;
    LOG_TRACE("(%p, %p)", pStorage_space, pThe_st);
}

// Offset: 1888
// Size: 0xea
//IDA: tAdd_to_storage_result __usercall AddMaterialToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_material *pThe_mat@<EDX>)
tAdd_to_storage_result AddMaterialToStorage(tBrender_storage *pStorage_space, br_material *pThe_mat) {
    int i;
    LOG_TRACE("(%p, %p)", pStorage_space, pThe_mat);
}

// Offset: 2124
// Size: 0xe7
//IDA: tAdd_to_storage_result __usercall AddModelToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_model *pThe_mod@<EDX>)
tAdd_to_storage_result AddModelToStorage(tBrender_storage *pStorage_space, br_model *pThe_mod) {
    int i;
    LOG_TRACE("(%p, %p)", pStorage_space, pThe_mod);
}

// Offset: 2356
// Size: 0x1fb
//IDA: int __usercall LoadNPixelmaps@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNPixelmaps(tBrender_storage *pStorage_space, FILE *pF, int pCount) {
    tPath_name the_path;
    int i;
    int j;
    int new_ones;
    int total;
    char s[256];
    char *str;
    br_pixelmap *temp_array[200];
    LOG_TRACE("(%p, %p, %d)", pStorage_space, pF, pCount);
}

// Offset: 2864
// Size: 0xc3
//IDA: br_pixelmap* __usercall LoadSinglePixelmap@<EAX>(tBrender_storage *pStorage_space@<EAX>, char *pName@<EDX>)
br_pixelmap* LoadSinglePixelmap(tBrender_storage *pStorage_space, char *pName) {
    br_pixelmap *temp;
    LOG_TRACE("(%p, \"%s\")", pStorage_space, pName);
}

// Offset: 3060
// Size: 0xc3
//IDA: br_material* __usercall LoadSingleMaterial@<EAX>(tBrender_storage *pStorage_space@<EAX>, char *pName@<EDX>)
br_material* LoadSingleMaterial(tBrender_storage *pStorage_space, char *pName) {
    br_material *temp;
    LOG_TRACE("(%p, \"%s\")", pStorage_space, pName);
}

// Offset: 3256
// Size: 0x18a
//IDA: int __usercall LoadNShadeTables@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNShadeTables(tBrender_storage *pStorage_space, FILE *pF, int pCount) {
    tPath_name the_path;
    int i;
    int j;
    int new_ones;
    int total;
    char s[256];
    char *str;
    br_pixelmap *temp_array[50];
    LOG_TRACE("(%p, %p, %d)", pStorage_space, pF, pCount);
}

// Offset: 3652
// Size: 0xc3
//IDA: br_pixelmap* __usercall LoadSingleShadeTable@<EAX>(tBrender_storage *pStorage_space@<EAX>, char *pName@<EDX>)
br_pixelmap* LoadSingleShadeTable(tBrender_storage *pStorage_space, char *pName) {
    br_pixelmap *temp;
    LOG_TRACE("(%p, \"%s\")", pStorage_space, pName);
}

// Offset: 3848
// Size: 0x19e
//IDA: int __usercall LoadNMaterials@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNMaterials(tBrender_storage *pStorage_space, FILE *pF, int pCount) {
    tPath_name the_path;
    int i;
    int j;
    int new_ones;
    int total;
    char s[256];
    char *str;
    br_material *temp_array[200];
    LOG_TRACE("(%p, %p, %d)", pStorage_space, pF, pCount);
}

// Offset: 4264
// Size: 0x1c1
//IDA: int __usercall LoadNModels@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNModels(tBrender_storage *pStorage_space, FILE *pF, int pCount) {
    tPath_name the_path;
    int i;
    int j;
    int new_ones;
    int total;
    char s[256];
    char *str;
    br_model *temp_array[2000];
    v11model *prepared;
    int group;
    LOG_TRACE("(%p, %p, %d)", pStorage_space, pF, pCount);
}

// Offset: 4716
// Size: 0x67
//IDA: void __usercall DodgyModelUpdate(br_model *pM@<EAX>)
void DodgyModelUpdate(br_model *pM) {
    LOG_TRACE("(%p)", pM);
}

// Offset: 4820
// Size: 0xc5
//IDA: br_material* __usercall SuffixedMaterial@<EAX>(br_material *pOld@<EAX>, char *pSuffix@<EDX>)
br_material* SuffixedMaterial(br_material *pOld, char *pSuffix) {
    br_material *new_mat;
    char *new_id;
    LOG_TRACE("(%p, \"%s\")", pOld, pSuffix);
}

// Offset: 5020
// Size: 0x290
//IDA: int __usercall FaceIsRoad@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
int FaceIsRoad(br_model *pModel, tU16 pFace) {
    br_vector3 v0;
    br_vector3 v1;
    br_vector3 cross;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 5676
// Size: 0xa1
//IDA: br_material* __usercall RoadPerspToUntex@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* RoadPerspToUntex(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 5840
// Size: 0xa9
//IDA: br_material* __usercall WallPerspToLinear@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallPerspToLinear(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 6012
// Size: 0xbc
//IDA: br_material* __usercall WallPerspToUntex@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallPerspToUntex(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 6200
// Size: 0x104
//IDA: void __usercall ProcessModelFaceMaterials2(br_model *pModel@<EAX>, tPMFM2CB pCallback@<EDX>)
void ProcessModelFaceMaterials2(br_model *pModel, tPMFM2CB pCallback) {
    tU16 f;
    tU16 group;
    br_material *old_mat;
    LOG_TRACE("(%p, %d)", pModel, pCallback);
}

// Offset: 6460
// Size: 0xad
//IDA: void __usercall ProcessModelFaceMaterials(br_model *pModel@<EAX>, tPMFMCB pCallback@<EDX>)
void ProcessModelFaceMaterials(br_model *pModel, tPMFMCB pCallback) {
    tU16 f;
    br_material *possible_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pCallback);
}

// Offset: 6636
// Size: 0x22a
//IDA: int __usercall LoadNTrackModels@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNTrackModels(tBrender_storage *pStorage_space, FILE *pF, int pCount) {
    tPath_name the_path;
    int i;
    int j;
    int new_ones;
    int total;
    int group;
    char s[256];
    char *str;
    br_model *temp_array[2000];
    v11model *prepared;
    LOG_TRACE("(%p, %p, %d)", pStorage_space, pF, pCount);
}

// Offset: 7192
// Size: 0x6b
//IDA: void __usercall LoadSomePixelmaps(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomePixelmaps(tBrender_storage *pStorage_space, FILE *pF) {
    tPath_name the_path;
    int i;
    int j;
    int count;
    int new_ones;
    char s[256];
    char *str;
    br_pixelmap *temp_array[200];
    LOG_TRACE("(%p, %p)", pStorage_space, pF);
}

// Offset: 7300
// Size: 0x6b
//IDA: void __usercall LoadSomeShadeTables(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeShadeTables(tBrender_storage *pStorage_space, FILE *pF) {
    tPath_name the_path;
    int i;
    int j;
    int count;
    int new_ones;
    char s[256];
    char *str;
    br_pixelmap *temp_array[50];
    LOG_TRACE("(%p, %p)", pStorage_space, pF);
}

// Offset: 7408
// Size: 0x6b
//IDA: void __usercall LoadSomeMaterials(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeMaterials(tBrender_storage *pStorage_space, FILE *pF) {
    tPath_name the_path;
    int i;
    int j;
    int count;
    int new_ones;
    char s[256];
    char *str;
    br_material *temp_array[200];
    LOG_TRACE("(%p, %p)", pStorage_space, pF);
}

// Offset: 7516
// Size: 0x6b
//IDA: void __usercall LoadSomeModels(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeModels(tBrender_storage *pStorage_space, FILE *pF) {
    tPath_name the_path;
    int i;
    int j;
    int count;
    int new_ones;
    char s[256];
    char *str;
    br_model *temp_array[2000];
    LOG_TRACE("(%p, %p)", pStorage_space, pF);
}

// Offset: 7624
// Size: 0x6b
//IDA: void __usercall LoadSomeTrackModels(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeTrackModels(tBrender_storage *pStorage_space, FILE *pF) {
    tPath_name the_path;
    int i;
    int j;
    int count;
    int new_ones;
    char s[256];
    char *str;
    br_model *temp_array[2000];
    LOG_TRACE("(%p, %p)", pStorage_space, pF);
}

// Offset: 7732
// Size: 0x57
//IDA: void __usercall AddFunkGrooveBinding(int pSlot_number@<EAX>, float *pPeriod_address@<EDX>)
void AddFunkGrooveBinding(int pSlot_number, float *pPeriod_address) {
    LOG_TRACE("(%d, %p)", pSlot_number, pPeriod_address);
}

// Offset: 7820
// Size: 0x51
//IDA: void __usercall ControlBoundFunkGroove(int pSlot_number@<EAX>, float pValue)
void ControlBoundFunkGroove(int pSlot_number, float pValue) {
    LOG_TRACE("(%d, %f)", pSlot_number, pValue);
}

// Offset: 7904
// Size: 0x82
//IDA: float __usercall ControlBoundFunkGroovePlus@<ST0>(int pSlot_number@<EAX>, float pValue)
float ControlBoundFunkGroovePlus(int pSlot_number, float pValue) {
    LOG_TRACE("(%d, %f)", pSlot_number, pValue);
}

// Offset: 8036
// Size: 0x7c
//IDA: void __usercall ShiftBoundGrooveFunks(char *pStart@<EAX>, char *pEnd@<EDX>, int pDelta@<EBX>)
void ShiftBoundGrooveFunks(char *pStart, char *pEnd, int pDelta) {
    int i;
    LOG_TRACE("(\"%s\", \"%s\", %d)", pStart, pEnd, pDelta);
}

// Offset: 8160
// Size: 0x169
//IDA: tFunkotronic_spec* __cdecl AddNewFunkotronic()
tFunkotronic_spec* AddNewFunkotronic() {
    void *new_array;
    int i;
    LOG_TRACE("()");
}

// Offset: 8524
// Size: 0x105
//IDA: void __usercall DisposeFunkotronics(int pOwner@<EAX>)
void DisposeFunkotronics(int pOwner) {
    int i;
    tFunkotronic_spec *the_funk;
    LOG_TRACE("(%d)", pOwner);
}

// Offset: 8788
// Size: 0x4c
//IDA: void __usercall AddProximityVertex(br_vector3 *pV@<EAX>, tFunkotronic_spec *pThe_funk@<EDX>)
void AddProximityVertex(br_vector3 *pV, tFunkotronic_spec *pThe_funk) {
    LOG_TRACE("(%p, %p)", pV, pThe_funk);
}

// Offset: 8864
// Size: 0x41
//IDA: void __cdecl AddProximityVertexXYZ(br_scalar pX, br_scalar pY, br_scalar pZ, tFunkotronic_spec *pThe_funk)
void AddProximityVertexXYZ(br_scalar pX, br_scalar pY, br_scalar pZ, tFunkotronic_spec *pThe_funk) {
    br_vector3 v;
    LOG_TRACE("(%f, %f, %f, %p)", pX, pY, pZ, pThe_funk);
}

// Offset: 8932
// Size: 0xa7
//IDA: br_uint_32 __usercall CalcProximities@<EAX>(br_actor *pActor@<EAX>, br_material *pMat@<EDX>, tFunkotronic_spec *pThe_funk@<EBX>)
br_uint_32 CalcProximities(br_actor *pActor, br_material *pMat, tFunkotronic_spec *pThe_funk) {
    br_face *the_face;
    int i;
    LOG_TRACE("(%p, %p, %p)", pActor, pMat, pThe_funk);
}

// Offset: 9100
// Size: 0x226
//IDA: br_uint_32 __usercall AddProximities@<EAX>(br_actor *pActor@<EAX>, br_material *pMat@<EDX>, tFunkotronic_spec *pThe_funk@<EBX>)
br_uint_32 AddProximities(br_actor *pActor, br_material *pMat, tFunkotronic_spec *pThe_funk) {
    br_face *the_face;
    int i;
    LOG_TRACE("(%p, %p, %p)", pActor, pMat, pThe_funk);
}

// Offset: 9652
// Size: 0x98
//IDA: void __usercall Adjust2FloatsForExceptions(float *pVictim1@<EAX>, float *pVictim2@<EDX>, br_pixelmap *pCulprit@<EBX>)
void Adjust2FloatsForExceptions(float *pVictim1, float *pVictim2, br_pixelmap *pCulprit) {
    tException_list e;
    LOG_TRACE("(%p, %p, %p)", pVictim1, pVictim2, pCulprit);
}

// Offset: 9804
// Size: 0xcb8
//IDA: void __usercall AddFunkotronics(FILE *pF@<EAX>, int pOwner@<EDX>, int pRef_offset@<EBX>)
void AddFunkotronics(FILE *pF, int pOwner, int pRef_offset) {
    char s[256];
    char *str;
    int first_time;
    int i;
    int j;
    tFunkotronic_spec *the_funk;
    float speed1;
    float speed2;
    float a_min;
    float d_min;
    float s_min;
    float a_max;
    float d_max;
    float s_max;
    void *the_pixels;
    br_pixelmap *the_pixelmap;
    LOG_TRACE("(%p, %d, %d)", pF, pOwner, pRef_offset);
}

// Offset: 13060
// Size: 0x76
//IDA: void __usercall DisposeGroovidelics(int pOwner@<EAX>)
void DisposeGroovidelics(int pOwner) {
    int i;
    tGroovidelic_spec *the_groove;
    LOG_TRACE("(%d)", pOwner);
}

// Offset: 13180
// Size: 0x15d
//IDA: tGroovidelic_spec* __cdecl AddNewGroovidelic()
tGroovidelic_spec* AddNewGroovidelic() {
    void *new_array;
    int i;
    LOG_TRACE("()");
}

// Offset: 13532
// Size: 0xa36
//IDA: void __usercall AddGroovidelics(FILE *pF@<EAX>, int pOwner@<EDX>, br_actor *pParent_actor@<EBX>, int pRef_offset@<ECX>, int pAllowed_to_be_absent)
void AddGroovidelics(FILE *pF, int pOwner, br_actor *pParent_actor, int pRef_offset, int pAllowed_to_be_absent) {
    char s[256];
    char *str;
    int first_time;
    int i;
    int j;
    tGroovidelic_spec *the_groove;
    LOG_TRACE("(%p, %d, %p, %d, %d)", pF, pOwner, pParent_actor, pRef_offset, pAllowed_to_be_absent);
}

// Offset: 16148
// Size: 0xa1
//IDA: void __usercall KillGroovadelic(int pOwner@<EAX>)
void KillGroovadelic(int pOwner) {
    int i;
    tGroovidelic_spec *the_groove;
    LOG_TRACE("(%d)", pOwner);
}

// Offset: 16312
// Size: 0xba
//IDA: void __usercall KillFunkotronic(int pOwner@<EAX>)
void KillFunkotronic(int pOwner) {
    int i;
    tFunkotronic_spec *the_funk;
    LOG_TRACE("(%d)", pOwner);
}

// Offset: 16500
// Size: 0xec
//IDA: br_uint_32 __usercall DeleteBastards@<EAX>(br_actor *pActor@<EAX>, br_matrix34 *pMatrix@<EDX>, void *pArg@<EBX>)
br_uint_32 DeleteBastards(br_actor *pActor, br_matrix34 *pMatrix, void *pArg) {
    int i;
    int parent_already_doomed;
    LOG_TRACE("(%p, %p, %p)", pActor, pMatrix, pArg);
}

// Offset: 16736
// Size: 0x6e
//IDA: void __cdecl DeleteAnyZeroBastards()
void DeleteAnyZeroBastards() {
    int i;
    LOG_TRACE("()");
}

// Offset: 16848
// Size: 0xdb
//IDA: br_uint_32 __usercall ApplyTransToModels@<EAX>(br_actor *pActor@<EAX>, br_matrix34 *pMatrix@<EDX>, void *pArg@<EBX>)
br_uint_32 ApplyTransToModels(br_actor *pActor, br_matrix34 *pMatrix, void *pArg) {
    int i;
    br_vector3 temp_point;
    LOG_TRACE("(%p, %p, %p)", pActor, pMatrix, pArg);
}

// Offset: 17068
// Size: 0x78
//IDA: int __usercall FindSpecVolIndex@<EAX>(br_actor *pActor@<EAX>)
int FindSpecVolIndex(br_actor *pActor) {
    int i;
    tSpecial_volume *v;
    LOG_TRACE("(%p)", pActor);
}

// Offset: 17188
// Size: 0xf4
//IDA: void __usercall MungeMaterial(br_matrix34 *pMat@<EAX>, br_material *pMat_1@<EDX>, br_material *pMat_2@<EBX>, int pAxis_0@<ECX>, int pAxis_1)
void MungeMaterial(br_matrix34 *pMat, br_material *pMat_1, br_material *pMat_2, int pAxis_0, int pAxis_1) {
    LOG_TRACE("(%p, %p, %p, %d, %d)", pMat, pMat_1, pMat_2, pAxis_0, pAxis_1);
}

// Offset: 17432
// Size: 0xa6
//IDA: void __usercall SetSpecVolMatSize(br_actor *pActor@<EAX>)
void SetSpecVolMatSize(br_actor *pActor) {
    br_model *model;
    LOG_TRACE("(%p)", pActor);
}

// Offset: 17600
// Size: 0x73
//IDA: void __usercall FindInverseAndWorldBox(tSpecial_volume *pSpec@<EAX>)
void FindInverseAndWorldBox(tSpecial_volume *pSpec) {
    br_bounds bnds;
    LOG_TRACE("(%p)", pSpec);
}

// Offset: 17716
// Size: 0x6d
//IDA: void __cdecl UpdateSpecVol()
void UpdateSpecVol() {
    int index;
    tSpecial_volume *v;
    LOG_TRACE("()");
}

// Offset: 17828
// Size: 0x342
//IDA: void __cdecl SaveSpecialVolumes()
void SaveSpecialVolumes() {
    tPath_name the_path;
    FILE *f;
    int i;
    tSpecial_volume *v;
    LOG_TRACE("()");
}

// Offset: 18664
// Size: 0x89
//IDA: void __cdecl SaveAdditionalStuff()
void SaveAdditionalStuff() {
    LOG_TRACE("()");
}

// Offset: 18804
// Size: 0x6e
//IDA: br_uint_32 __cdecl ProcessMaterials(br_actor *pActor, tPMFM2CB pCallback)
br_uint_32 ProcessMaterials(br_actor *pActor, tPMFM2CB pCallback) {
    LOG_TRACE("(%p, %d)", pActor, pCallback);
}

// Offset: 18916
// Size: 0x7b
//IDA: br_uint_32 __cdecl ProcessFaceMaterials2(br_actor *pActor, tPMFM2CB pCallback)
br_uint_32 ProcessFaceMaterials2(br_actor *pActor, tPMFM2CB pCallback) {
    LOG_TRACE("(%p, %d)", pActor, pCallback);
}

// Offset: 19040
// Size: 0x5b
//IDA: void __usercall ChangePerspToSubdivCB(br_material *pMaterial@<EAX>)
void ChangePerspToSubdivCB(br_material *pMaterial) {
    LOG_TRACE("(%p)", pMaterial);
}

// Offset: 19132
// Size: 0x36
//IDA: void __cdecl ChangePerspToSubdiv()
void ChangePerspToSubdiv() {
    LOG_TRACE("()");
}

// Offset: 19188
// Size: 0x4e
//IDA: void __usercall ChangeSubdivToPerspCB(br_material *pMaterial@<EAX>)
void ChangeSubdivToPerspCB(br_material *pMaterial) {
    LOG_TRACE("(%p)", pMaterial);
}

// Offset: 19268
// Size: 0x36
//IDA: void __cdecl ChangeSubdivToPersp()
void ChangeSubdivToPersp() {
    LOG_TRACE("()");
}

// Offset: 19324
// Size: 0x7b
//IDA: br_uint_32 __cdecl ProcessFaceMaterials(br_actor *pActor, tPMFMCB pCallback)
br_uint_32 ProcessFaceMaterials(br_actor *pActor, tPMFMCB pCallback) {
    LOG_TRACE("(%p, %d)", pActor, pCallback);
}

// Offset: 19448
// Size: 0xec
//IDA: int __usercall DRPixelmapHasZeros@<EAX>(br_pixelmap *pm@<EAX>)
int DRPixelmapHasZeros(br_pixelmap *pm) {
    int x;
    int y;
    char *row_ptr;
    char *pp;
    LOG_TRACE("(%p)", pm);
}

// Offset: 19684
// Size: 0x7d
//IDA: int __usercall StorageContainsPixelmap@<EAX>(tBrender_storage *pStorage@<EAX>, br_pixelmap *pMap@<EDX>)
int StorageContainsPixelmap(tBrender_storage *pStorage, br_pixelmap *pMap) {
    int i;
    LOG_TRACE("(%p, %p)", pStorage, pMap);
}

// Offset: 19812
// Size: 0x10a
//IDA: void __usercall HideStoredOpaqueTextures(tBrender_storage *pStorage@<EAX>)
void HideStoredOpaqueTextures(tBrender_storage *pStorage) {
    int i;
    LOG_TRACE("(%p)", pStorage);
}

// Offset: 20080
// Size: 0xe0
//IDA: void __usercall RevealStoredTransparentTextures(tBrender_storage *pStorage@<EAX>)
void RevealStoredTransparentTextures(tBrender_storage *pStorage) {
    int i;
    LOG_TRACE("(%p)", pStorage);
}

// Offset: 20304
// Size: 0xec
//IDA: void __usercall HideStoredTextures(tBrender_storage *pStorage@<EAX>)
void HideStoredTextures(tBrender_storage *pStorage) {
    int i;
    LOG_TRACE("(%p)", pStorage);
}

// Offset: 20540
// Size: 0xc5
//IDA: void __usercall RevealStoredTextures(tBrender_storage *pStorage@<EAX>)
void RevealStoredTextures(tBrender_storage *pStorage) {
    int i;
    LOG_TRACE("(%p)", pStorage);
}

// Offset: 20740
// Size: 0x79
//IDA: void __usercall SetCarStorageTexturingLevel(tBrender_storage *pStorage@<EAX>, tCar_texturing_level pNew@<EDX>, tCar_texturing_level pOld@<EBX>)
void SetCarStorageTexturingLevel(tBrender_storage *pStorage, tCar_texturing_level pNew, tCar_texturing_level pOld) {
    LOG_TRACE("(%p, %d, %d)", pStorage, pNew, pOld);
}

// Offset: 20864
// Size: 0x2d
//IDA: tCar_texturing_level __cdecl GetCarTexturingLevel()
tCar_texturing_level GetCarTexturingLevel() {
    LOG_TRACE("()");
}

// Offset: 20912
// Size: 0x8b
//IDA: void __usercall SetCarTexturingLevel(tCar_texturing_level pLevel@<EAX>)
void SetCarTexturingLevel(tCar_texturing_level pLevel) {
    LOG_TRACE("(%d)", pLevel);
}

// Offset: 21052
// Size: 0x8a
//IDA: int __usercall HasThisSuffix@<EAX>(char *pIdent@<EAX>, char *pSuffix@<EDX>)
int HasThisSuffix(char *pIdent, char *pSuffix) {
    size_t len_ident;
    size_t len_suffix;
    LOG_TRACE("(\"%s\", \"%s\")", pIdent, pSuffix);
}

// Offset: 21192
// Size: 0x91
//IDA: br_material* __usercall UnsuffixedMaterial@<EAX>(char *pOld_ident@<EAX>, char *pSuffix@<EDX>)
br_material* UnsuffixedMaterial(char *pOld_ident, char *pSuffix) {
    br_material *result;
    int unsuffixed_len;
    char *new_id;
    LOG_TRACE("(\"%s\", \"%s\")", pOld_ident, pSuffix);
}

// Offset: 21340
// Size: 0x76
//IDA: br_material* __usercall RoadUntexToPersp@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* RoadUntexToPersp(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 21460
// Size: 0xf0
//IDA: br_material* __usercall WallLinearToUntex@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallLinearToUntex(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 21700
// Size: 0xcb
//IDA: br_material* __usercall WallUntexToLinear@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallUntexToLinear(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 21904
// Size: 0x99
//IDA: br_material* __usercall WallUntexToPersp@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallUntexToPersp(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 22060
// Size: 0x70
//IDA: br_material* __usercall WallLinearToPersp@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallLinearToPersp(br_model *pModel, tU16 pFace) {
    br_material *old_mat;
    br_material *new_mat;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 22172
// Size: 0x2d
//IDA: tRoad_texturing_level __cdecl GetRoadTexturingLevel()
tRoad_texturing_level GetRoadTexturingLevel() {
    LOG_TRACE("()");
}

// Offset: 22220
// Size: 0x2d
//IDA: void __usercall SetRoadTexturingLevel(tRoad_texturing_level pLevel@<EAX>)
void SetRoadTexturingLevel(tRoad_texturing_level pLevel) {
    LOG_TRACE("(%d)", pLevel);
}

// Offset: 22268
// Size: 0x56
//IDA: void __usercall ReallySetRoadTexturingLevel(tRoad_texturing_level pLevel@<EAX>)
void ReallySetRoadTexturingLevel(tRoad_texturing_level pLevel) {
    LOG_TRACE("(%d)", pLevel);
}

// Offset: 22356
// Size: 0x2d
//IDA: tWall_texturing_level __cdecl GetWallTexturingLevel()
tWall_texturing_level GetWallTexturingLevel() {
    LOG_TRACE("()");
}

// Offset: 22404
// Size: 0x2d
//IDA: void __usercall SetWallTexturingLevel(tWall_texturing_level pLevel@<EAX>)
void SetWallTexturingLevel(tWall_texturing_level pLevel) {
    LOG_TRACE("(%d)", pLevel);
}

// Offset: 22452
// Size: 0x52
//IDA: void __usercall ReallySetWallTexturingLevel(tWall_texturing_level pLevel@<EAX>)
void ReallySetWallTexturingLevel(tWall_texturing_level pLevel) {
    static tPMFMCB tweaker[3][3];
    LOG_TRACE("(%d)", pLevel);
}

// Offset: 22536
// Size: 0x129
//IDA: br_material* __usercall DisposeSuffixedMaterials@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* DisposeSuffixedMaterials(br_model *pModel, tU16 pFace) {
    size_t max_suffix_len;
    br_material *mat;
    br_material *victim;
    static char *suffixes[3];
    int s;
    char *id;
    LOG_TRACE("(%p, %d)", pModel, pFace);
}

// Offset: 22836
// Size: 0xa1
//IDA: void __cdecl DisposeTexturingMaterials()
void DisposeTexturingMaterials() {
    LOG_TRACE("()");
}

// Offset: 23000
// Size: 0x49
//IDA: br_uint_32 __cdecl SetAccessoryRenderingCB(br_actor *pActor, void *pFlag)
br_uint_32 SetAccessoryRenderingCB(br_actor *pActor, void *pFlag) {
    LOG_TRACE("(%p, %p)", pActor, pFlag);
}

// Offset: 23076
// Size: 0x64
//IDA: void __usercall SetAccessoryRendering(int pOn@<EAX>)
void SetAccessoryRendering(int pOn) {
    int style;
    LOG_TRACE("(%d)", pOn);
}

// Offset: 23176
// Size: 0x2d
//IDA: int __cdecl GetAccessoryRendering()
int GetAccessoryRendering() {
    LOG_TRACE("()");
}

// Offset: 23224
// Size: 0x2d
//IDA: void __usercall SetCarSimplificationLevel(int pLevel@<EAX>)
void SetCarSimplificationLevel(int pLevel) {
    LOG_TRACE("(%d)", pLevel);
}

// Offset: 23272
// Size: 0x2d
//IDA: int __cdecl GetCarSimplificationLevel()
int GetCarSimplificationLevel() {
    LOG_TRACE("()");
}

// Offset: 23320
// Size: 0x107
//IDA: void __usercall ParseSpecialVolume(FILE *pF@<EAX>, tSpecial_volume *pSpec@<EDX>, char *pScreen_name_str@<EBX>)
void ParseSpecialVolume(FILE *pF, tSpecial_volume *pSpec, char *pScreen_name_str) {
    char s[256];
    LOG_TRACE("(%p, %p, \"%s\")", pF, pSpec, pScreen_name_str);
}

// Offset: 23584
// Size: 0x38
//IDA: void __usercall AddExceptionToList(tException_list *pDst@<EAX>, tException_list pNew@<EDX>)
void AddExceptionToList(tException_list *pDst, tException_list pNew) {
    LOG_TRACE("(%p, %d)", pDst, pNew);
}

// Offset: 23640
// Size: 0x20f
//IDA: void __usercall LoadExceptionsFile(char *pName@<EAX>)
void LoadExceptionsFile(char *pName) {
    FILE *f;
    char line[256];
    char *tok;
    int file_version;
    tException_list e;
    char delimiters[4];
    LOG_TRACE("(\"%s\")", pName);
}

// Offset: 24168
// Size: 0x5b
//IDA: void __usercall LoadExceptionsFileForTrack(char *pTrack_file_name@<EAX>)
void LoadExceptionsFileForTrack(char *pTrack_file_name) {
    tPath_name exceptions_file_name;
    LOG_TRACE("(\"%s\")", pTrack_file_name);
}

// Offset: 24260
// Size: 0x68
//IDA: void __cdecl FreeExceptions()
void FreeExceptions() {
    tException_list list;
    tException_list next;
    LOG_TRACE("()");
}

// Offset: 24364
// Size: 0x1c8e
//IDA: void __usercall LoadTrack(char *pFile_name@<EAX>, tTrack_spec *pTrack_spec@<EDX>, tRace_info *pRace_info@<EBX>)
void LoadTrack(char *pFile_name, tTrack_spec *pTrack_spec, tRace_info *pRace_info) {
    char temp_name[14];
    FILE *f;
    FILE *non_car_f;
    FILE *g;
    int i;
    int j;
    int k;
    int group;
    int needs_updating;
    int killed_sky;
    int line_count;
    int ped_subs_index;
    int sl;
    int num_materials;
    int count;
    int num_non_cars;
    int style;
    int cp_rect_w[2];
    int cp_rect_h[2];
    tPath_name the_path;
    tPath_name general_file_path;
    char s[256];
    char *str;
    float temp_float;
    br_actor *new_root;
    br_vector3 a;
    br_vector3 b;
    tU16 sky_pixels_high;
    tNon_car_spec *non_car;
    tSpecial_volume *spec;
    br_vector3 p[3];
    br_vector3 v1;
    br_vector3 v2;
    br_vector3 temp_v;
    br_bounds temp_bounds;
    tPed_subs *ped_subs;
    br_pixelmap *sky;
    br_material *material;
    LOG_TRACE("(\"%s\", %p, %p)", pFile_name, pTrack_spec, pRace_info);
}

// Offset: 31676
// Size: 0x52
//IDA: br_uint_32 __cdecl RemoveBounds(br_actor *pActor, void *pArg)
br_uint_32 RemoveBounds(br_actor *pActor, void *pArg) {
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 31760
// Size: 0x34
//IDA: void __usercall RemoveBoundsStructures(br_actor *pActor@<EAX>)
void RemoveBoundsStructures(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
}

// Offset: 31812
// Size: 0x1b7
//IDA: void __usercall FreeTrack(tTrack_spec *pTrack_spec@<EAX>)
void FreeTrack(tTrack_spec *pTrack_spec) {
    int i;
    tNon_car_spec *non_car;
    LOG_TRACE("(%p)", pTrack_spec);
}

// Offset: 32252
// Size: 0x5e
//IDA: void __usercall ProcessTrack(br_actor *pWorld@<EAX>, tTrack_spec *pTrack_spec@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world_transform@<ECX>, int pRender_blends)
void ProcessTrack(br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world_transform, int pRender_blends) {
    LOG_TRACE("(%p, %p, %p, %p, %d)", pWorld, pTrack_spec, pCamera, pCamera_to_world_transform, pRender_blends);
}

// Offset: 32348
// Size: 0x47
//IDA: br_scalar __cdecl NormaliseDegreeAngle(br_scalar pAngle)
br_scalar NormaliseDegreeAngle(br_scalar pAngle) {
    LOG_TRACE("(%f)", pAngle);
}

// Offset: 32420
// Size: 0x249d
//IDA: void __cdecl FunkThoseTronics()
void FunkThoseTronics() {
    int i;
    int j;
    int iteration_count;
    int finished;
    tFunkotronic_spec *the_funk;
    br_vector3 *the_proximity;
    tS32 the_time;
    tS32 old_last_time;
    tS32 time_diff;
    br_matrix23 *mat_matrix;
    br_material *the_material;
    float f_the_time;
    float rot_amount;
    float f_time_diff;
    br_pixelmap *old_colour_map;
    LOG_TRACE("()");
}

// Offset: 41796
// Size: 0x323
//IDA: void __usercall LollipopizeActor(br_actor *pSubject_actor@<EAX>, br_matrix34 *ref_to_world@<EDX>, tLollipop_mode pWhich_axis@<EBX>)
void LollipopizeActor(br_actor *pSubject_actor, br_matrix34 *ref_to_world, tLollipop_mode pWhich_axis) {
    br_vector3 ref_to_subject;
    br_vector3 fixed_axis;
    br_vector3 vector_a;
    br_vector3 vector_b;
    br_matrix34 subject_to_world;
    br_matrix34 mat;
    LOG_TRACE("(%p, %p, %d)", pSubject_actor, ref_to_world, pWhich_axis);
}

// Offset: 42600
// Size: 0x8c
//IDA: void __usercall CalcActorGlobalPos(br_vector3 *pResult@<EAX>, br_actor *pActor@<EDX>)
void CalcActorGlobalPos(br_vector3 *pResult, br_actor *pActor) {
    LOG_TRACE("(%p, %p)", pResult, pActor);
}

// Offset: 42740
// Size: 0x140
//IDA: int __usercall PointOutOfSight@<EAX>(br_vector3 *pPoint@<EAX>, br_scalar pMax_distance)
int PointOutOfSight(br_vector3 *pPoint, br_scalar pMax_distance) {
    br_vector3 distance_vector;
    LOG_TRACE("(%p, %f)", pPoint, pMax_distance);
}

// Offset: 43060
// Size: 0xe70
//IDA: void __usercall PathGrooveBastard(tGroovidelic_spec *pGroove@<EAX>, tU32 pTime@<EDX>, br_matrix34 *pMat@<EBX>, int pInterrupt_it@<ECX>)
void PathGrooveBastard(tGroovidelic_spec *pGroove, tU32 pTime, br_matrix34 *pMat, int pInterrupt_it) {
    br_scalar pos;
    LOG_TRACE("(%p, %d, %p, %d)", pGroove, pTime, pMat, pInterrupt_it);
}

// Offset: 46756
// Size: 0x24ca
//IDA: void __usercall ObjectGrooveBastard(tGroovidelic_spec *pGroove@<EAX>, tU32 pTime@<EDX>, br_matrix34 *pMat@<EBX>, int pInterrupt_it@<ECX>)
void ObjectGrooveBastard(tGroovidelic_spec *pGroove, tU32 pTime, br_matrix34 *pMat, int pInterrupt_it) {
    int rock_it;
    br_scalar x_size;
    br_scalar y_size;
    br_scalar z_size;
    br_scalar pos;
    br_bounds *bounds;
    LOG_TRACE("(%p, %d, %p, %d)", pGroove, pTime, pMat, pInterrupt_it);
}

// Offset: 56176
// Size: 0x263
//IDA: void __usercall GrooveThisDelic(tGroovidelic_spec *pGroove@<EAX>, tU32 pTime@<EDX>, int pInterrupt_it@<EBX>)
void GrooveThisDelic(tGroovidelic_spec *pGroove, tU32 pTime, int pInterrupt_it) {
    br_actor *the_actor;
    br_vector3 actor_pos;
    br_matrix34 *the_mat;
    tInterrupt_status old_path_interrupt;
    tInterrupt_status old_object_interrupt;
    LOG_TRACE("(%p, %d, %d)", pGroove, pTime, pInterrupt_it);
}

// Offset: 56788
// Size: 0xbf
//IDA: void __cdecl GrooveThoseDelics()
void GrooveThoseDelics() {
    int i;
    tGroovidelic_spec *the_groove;
    float f_the_time;
    LOG_TRACE("()");
}

// Offset: 56980
// Size: 0x89
//IDA: void __usercall StopGroovidelic(br_actor *pActor@<EAX>)
void StopGroovidelic(br_actor *pActor) {
    int i;
    tGroovidelic_spec *the_groove;
    LOG_TRACE("(%p)", pActor);
}

// Offset: 57120
// Size: 0x75
//IDA: void __usercall SetGrooveInterrupt(int pGroove_index@<EAX>, br_matrix34 *pMatrix@<EDX>, int pPath_interrupt@<EBX>, int pObject_interrupt@<ECX>, float pPath_resumption, float pObject_resumption)
void SetGrooveInterrupt(int pGroove_index, br_matrix34 *pMatrix, int pPath_interrupt, int pObject_interrupt, float pPath_resumption, float pObject_resumption) {
    tGroovidelic_spec *the_groove;
    LOG_TRACE("(%d, %p, %d, %d, %f, %f)", pGroove_index, pMatrix, pPath_interrupt, pObject_interrupt, pPath_resumption, pObject_resumption);
}

// Offset: 57240
// Size: 0x5c
//IDA: void __cdecl ResetGrooveFlags()
void ResetGrooveFlags() {
    int i;
    tGroovidelic_spec *the_groove;
    LOG_TRACE("()");
}

// Offset: 57332
// Size: 0x2d
//IDA: tSpecial_volume* __cdecl GetDefaultSpecialVolumeForWater()
tSpecial_volume* GetDefaultSpecialVolumeForWater() {
    LOG_TRACE("()");
}

// Offset: 57380
// Size: 0x156
//IDA: tSpecial_volume* __usercall FindSpecialVolume@<EAX>(br_vector3 *pP@<EAX>, tSpecial_volume *pLast_vol@<EDX>)
tSpecial_volume* FindSpecialVolume(br_vector3 *pP, tSpecial_volume *pLast_vol) {
    int i;
    tSpecial_volume *v;
    br_vector3 p;
    LOG_TRACE("(%p, %p)", pP, pLast_vol);
}

// Offset: 57724
// Size: 0x30
//IDA: void __cdecl SaveAdditionalActors()
void SaveAdditionalActors() {
    LOG_TRACE("()");
}

// Offset: 57772
// Size: 0x59
//IDA: br_scalar __usercall DistanceFromFace@<ST0>(br_vector3 *pPos@<EAX>, tFace_ref *pFace@<EDX>)
br_scalar DistanceFromFace(br_vector3 *pPos, tFace_ref *pFace) {
    br_vector3 normal;
    LOG_TRACE("(%p, %p)", pPos, pFace);
}

// Offset: 57864
// Size: 0xa6
//IDA: br_uint_32 __cdecl CalcHighestID(br_actor *pActor, int *pHighest)
br_uint_32 CalcHighestID(br_actor *pActor, int *pHighest) {
    char s[256];
    int number;
    LOG_TRACE("(%p, %p)", pActor, pHighest);
}

// Offset: 58032
// Size: 0xb6
//IDA: br_uint_32 __cdecl SetID(br_actor *pActor, void *pArg)
br_uint_32 SetID(br_actor *pActor, void *pArg) {
    char s[256];
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 58216
// Size: 0x64
//IDA: void __usercall UniquificateActorsName(br_actor *pUniverse_actor@<EAX>, br_actor *pActor@<EDX>)
void UniquificateActorsName(br_actor *pUniverse_actor, br_actor *pActor) {
    int highest;
    LOG_TRACE("(%p, %p)", pUniverse_actor, pActor);
}

// Offset: 58316
// Size: 0x6b
//IDA: void __usercall AccessoryHeadup(br_actor *pActor@<EAX>, char *pPrefix@<EDX>)
void AccessoryHeadup(br_actor *pActor, char *pPrefix) {
    char s[256];
    int i;
    br_actor *original_actor;
    LOG_TRACE("(%p, \"%s\")", pActor, pPrefix);
}

// Offset: 58424
// Size: 0x84
//IDA: br_uint_32 __cdecl CalcHighestNonAmID(br_actor *pActor, int *pHighest)
br_uint_32 CalcHighestNonAmID(br_actor *pActor, int *pHighest) {
    char s[256];
    int number;
    LOG_TRACE("(%p, %p)", pActor, pHighest);
}

// Offset: 58556
// Size: 0x1bb
//IDA: br_uint_32 __cdecl SetIDAndDupModel(br_actor *pActor, void *pArg)
br_uint_32 SetIDAndDupModel(br_actor *pActor, void *pArg) {
    char s[256];
    char s2[256];
    br_model *new_model;
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 59000
// Size: 0x64
//IDA: void __usercall DuplicateIfNotAmpersand(br_actor *pActor@<EAX>)
void DuplicateIfNotAmpersand(br_actor *pActor) {
    int highest;
    LOG_TRACE("(%p)", pActor);
}

// Offset: 59100
// Size: 0x4de
//IDA: void __usercall DropActor(int pIndex@<EAX>)
void DropActor(int pIndex) {
    FILE *f;
    tPath_name the_path;
    char s[256];
    int i;
    int face_bastard;
    int face_count;
    tBounds kev_bounds;
    tFace_ref the_list[50];
    br_scalar nearest_bastard;
    br_scalar distance_bastard;
    br_scalar ts;
    br_vector3 side_vector;
    br_angle phi;
    br_matrix34 mat;
    br_transform new_transform;
    br_actor *a;
    br_actor *last_non_ampersand;
    LOG_TRACE("(%d)", pIndex);
}

// Offset: 60348
// Size: 0x29
//IDA: void __cdecl DropActor0()
void DropActor0() {
    LOG_TRACE("()");
}

// Offset: 60392
// Size: 0x2c
//IDA: void __cdecl DropActor1()
void DropActor1() {
    LOG_TRACE("()");
}

// Offset: 60436
// Size: 0x2c
//IDA: void __cdecl DropActor2()
void DropActor2() {
    LOG_TRACE("()");
}

// Offset: 60480
// Size: 0x2c
//IDA: void __cdecl DropActor3()
void DropActor3() {
    LOG_TRACE("()");
}

// Offset: 60524
// Size: 0x2c
//IDA: void __cdecl DropActor4()
void DropActor4() {
    LOG_TRACE("()");
}

// Offset: 60568
// Size: 0x2c
//IDA: void __cdecl DropActor5()
void DropActor5() {
    LOG_TRACE("()");
}

// Offset: 60612
// Size: 0x2c
//IDA: void __cdecl DropActor6()
void DropActor6() {
    LOG_TRACE("()");
}

// Offset: 60656
// Size: 0x2c
//IDA: void __cdecl DropActor7()
void DropActor7() {
    LOG_TRACE("()");
}

// Offset: 60700
// Size: 0x2c
//IDA: void __cdecl DropActor8()
void DropActor8() {
    LOG_TRACE("()");
}

// Offset: 60744
// Size: 0x2c
//IDA: void __cdecl DropActor9()
void DropActor9() {
    LOG_TRACE("()");
}

// Offset: 60788
// Size: 0x111
//IDA: br_uint_32 __cdecl IdentifyAccCB(br_actor *pActor, void *pArg)
br_uint_32 IdentifyAccCB(br_actor *pActor, void *pArg) {
    br_scalar distance;
    char s[256];
    br_vector3 v;
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 61064
// Size: 0x69
//IDA: void __cdecl IdentifyAcc()
void IdentifyAcc() {
    LOG_TRACE("()");
}

// Offset: 61172
// Size: 0x6c
//IDA: br_uint_32 __cdecl DelGrooveRef(br_actor *pActor, void *pArg)
br_uint_32 DelGrooveRef(br_actor *pActor, void *pArg) {
    tGroovidelic_spec *the_groove;
    int i;
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 61280
// Size: 0xb1
//IDA: br_uint_32 __cdecl DelReferencedModels(br_actor *pActor, void *pArg)
br_uint_32 DelReferencedModels(br_actor *pActor, void *pArg) {
    tGroovidelic_spec *the_groove;
    int i;
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 61460
// Size: 0x87
//IDA: void __cdecl DeleteAcc()
void DeleteAcc() {
    LOG_TRACE("()");
}

// Offset: 61596
// Size: 0xaa
//IDA: br_uint_32 __cdecl OffsetModel(br_actor *pActor, void *pArg)
br_uint_32 OffsetModel(br_actor *pActor, void *pArg) {
    int i;
    LOG_TRACE("(%p, %p)", pActor, pArg);
}

// Offset: 61768
// Size: 0x36
//IDA: void __usercall OffsetActor(br_actor *pActor@<EAX>, br_vector3 *pOffset@<EDX>)
void OffsetActor(br_actor *pActor, br_vector3 *pOffset) {
    LOG_TRACE("(%p, %p)", pActor, pOffset);
}

// Offset: 61824
// Size: 0x11e
//IDA: void __usercall CentreActor(br_actor *pActor@<EAX>, br_vector3 *pOffset@<EDX>)
void CentreActor(br_actor *pActor, br_vector3 *pOffset) {
    LOG_TRACE("(%p, %p)", pActor, pOffset);
}

// Offset: 62112
// Size: 0x9c
//IDA: void __cdecl SnapAccToVertical()
void SnapAccToVertical() {
    LOG_TRACE("()");
}

// Offset: 62268
// Size: 0x118
//IDA: void __usercall RotateAccessory(br_angle pAngle@<EAX>)
void RotateAccessory(br_angle pAngle) {
    br_vector3 mr_offset;
    LOG_TRACE("(%d)", pAngle);
}

// Offset: 62548
// Size: 0x179
//IDA: void __cdecl ScaleAccessory(float pScaling_factor)
void ScaleAccessory(float pScaling_factor) {
    br_vector3 mr_offset;
    LOG_TRACE("(%f)", pScaling_factor);
}

// Offset: 62928
// Size: 0x6e
//IDA: void __cdecl MoveAccessory(br_scalar pX_shift, br_scalar pY_shift, br_scalar pZ_shift)
void MoveAccessory(br_scalar pX_shift, br_scalar pY_shift, br_scalar pZ_shift) {
    br_vector3 v;
    LOG_TRACE("(%f, %f, %f)", pX_shift, pY_shift, pZ_shift);
}

// Offset: 63040
// Size: 0x2c
//IDA: void __cdecl RotateAccL()
void RotateAccL() {
    LOG_TRACE("()");
}

// Offset: 63084
// Size: 0x2c
//IDA: void __cdecl RotateAccL2()
void RotateAccL2() {
    LOG_TRACE("()");
}

// Offset: 63128
// Size: 0x2c
//IDA: void __cdecl RotateAccL3()
void RotateAccL3() {
    LOG_TRACE("()");
}

// Offset: 63172
// Size: 0x2c
//IDA: void __cdecl RotateAccL4()
void RotateAccL4() {
    LOG_TRACE("()");
}

// Offset: 63216
// Size: 0x2c
//IDA: void __cdecl RotateAccR()
void RotateAccR() {
    LOG_TRACE("()");
}

// Offset: 63260
// Size: 0x2c
//IDA: void __cdecl RotateAccR2()
void RotateAccR2() {
    LOG_TRACE("()");
}

// Offset: 63304
// Size: 0x2c
//IDA: void __cdecl RotateAccR3()
void RotateAccR3() {
    LOG_TRACE("()");
}

// Offset: 63348
// Size: 0x2c
//IDA: void __cdecl RotateAccR4()
void RotateAccR4() {
    LOG_TRACE("()");
}

// Offset: 63392
// Size: 0xb5
//IDA: void __cdecl CycleAccRotate()
void CycleAccRotate() {
    LOG_TRACE("()");
}

// Offset: 63576
// Size: 0xe3
//IDA: void __cdecl CycleAccScale()
void CycleAccScale() {
    LOG_TRACE("()");
}

// Offset: 63804
// Size: 0x2c
//IDA: void __cdecl ScaleAccUp2()
void ScaleAccUp2() {
    LOG_TRACE("()");
}

// Offset: 63848
// Size: 0x2c
//IDA: void __cdecl ScaleAccUp3()
void ScaleAccUp3() {
    LOG_TRACE("()");
}

// Offset: 63892
// Size: 0x2c
//IDA: void __cdecl ScaleAccUp4()
void ScaleAccUp4() {
    LOG_TRACE("()");
}

// Offset: 63936
// Size: 0x2c
//IDA: void __cdecl ScaleAccDown2()
void ScaleAccDown2() {
    LOG_TRACE("()");
}

// Offset: 63980
// Size: 0x2c
//IDA: void __cdecl ScaleAccDown3()
void ScaleAccDown3() {
    LOG_TRACE("()");
}

// Offset: 64024
// Size: 0x2c
//IDA: void __cdecl ScaleAccDown4()
void ScaleAccDown4() {
    LOG_TRACE("()");
}

// Offset: 64068
// Size: 0x30
//IDA: void __cdecl MoveXAccL()
void MoveXAccL() {
    LOG_TRACE("()");
}

// Offset: 64116
// Size: 0x30
//IDA: void __cdecl MoveXAccL2()
void MoveXAccL2() {
    LOG_TRACE("()");
}

// Offset: 64164
// Size: 0x30
//IDA: void __cdecl MoveXAccL3()
void MoveXAccL3() {
    LOG_TRACE("()");
}

// Offset: 64212
// Size: 0x30
//IDA: void __cdecl MoveXAccL4()
void MoveXAccL4() {
    LOG_TRACE("()");
}

// Offset: 64260
// Size: 0x30
//IDA: void __cdecl MoveXAccR()
void MoveXAccR() {
    LOG_TRACE("()");
}

// Offset: 64308
// Size: 0x30
//IDA: void __cdecl MoveXAccR2()
void MoveXAccR2() {
    LOG_TRACE("()");
}

// Offset: 64356
// Size: 0x30
//IDA: void __cdecl MoveXAccR3()
void MoveXAccR3() {
    LOG_TRACE("()");
}

// Offset: 64404
// Size: 0x30
//IDA: void __cdecl MoveXAccR4()
void MoveXAccR4() {
    LOG_TRACE("()");
}

// Offset: 64452
// Size: 0x30
//IDA: void __cdecl MoveYAccL()
void MoveYAccL() {
    LOG_TRACE("()");
}

// Offset: 64500
// Size: 0x30
//IDA: void __cdecl MoveYAccL2()
void MoveYAccL2() {
    LOG_TRACE("()");
}

// Offset: 64548
// Size: 0x30
//IDA: void __cdecl MoveYAccL3()
void MoveYAccL3() {
    LOG_TRACE("()");
}

// Offset: 64596
// Size: 0x30
//IDA: void __cdecl MoveYAccL4()
void MoveYAccL4() {
    LOG_TRACE("()");
}

// Offset: 64644
// Size: 0x30
//IDA: void __cdecl MoveYAccR()
void MoveYAccR() {
    LOG_TRACE("()");
}

// Offset: 64692
// Size: 0x30
//IDA: void __cdecl MoveYAccR2()
void MoveYAccR2() {
    LOG_TRACE("()");
}

// Offset: 64740
// Size: 0x30
//IDA: void __cdecl MoveYAccR3()
void MoveYAccR3() {
    LOG_TRACE("()");
}

// Offset: 64788
// Size: 0x30
//IDA: void __cdecl MoveYAccR4()
void MoveYAccR4() {
    LOG_TRACE("()");
}

// Offset: 64836
// Size: 0x30
//IDA: void __cdecl MoveZAccL()
void MoveZAccL() {
    LOG_TRACE("()");
}

// Offset: 64884
// Size: 0x30
//IDA: void __cdecl MoveZAccL2()
void MoveZAccL2() {
    LOG_TRACE("()");
}

// Offset: 64932
// Size: 0x30
//IDA: void __cdecl MoveZAccL3()
void MoveZAccL3() {
    LOG_TRACE("()");
}

// Offset: 64980
// Size: 0x30
//IDA: void __cdecl MoveZAccL4()
void MoveZAccL4() {
    LOG_TRACE("()");
}

// Offset: 65028
// Size: 0x30
//IDA: void __cdecl MoveZAccR()
void MoveZAccR() {
    LOG_TRACE("()");
}

// Offset: 65076
// Size: 0x30
//IDA: void __cdecl MoveZAccR2()
void MoveZAccR2() {
    LOG_TRACE("()");
}

// Offset: 65124
// Size: 0x30
//IDA: void __cdecl MoveZAccR3()
void MoveZAccR3() {
    LOG_TRACE("()");
}

// Offset: 65172
// Size: 0x30
//IDA: void __cdecl MoveZAccR4()
void MoveZAccR4() {
    LOG_TRACE("()");
}

// Offset: 65220
// Size: 0x36
//IDA: br_material* __cdecl GetInternalMat()
br_material* GetInternalMat() {
    LOG_TRACE("()");
}

// Offset: 65276
// Size: 0x36
//IDA: br_material* __cdecl GetExternalMat()
br_material* GetExternalMat() {
    LOG_TRACE("()");
}

// Offset: 65332
// Size: 0x865
//IDA: void __usercall BuildSpecVolModel(tSpecial_volume *pSpec@<EAX>, int pIndex@<EDX>, br_material *pInt_mat@<EBX>, br_material *pExt_mat@<ECX>)
void BuildSpecVolModel(tSpecial_volume *pSpec, int pIndex, br_material *pInt_mat, br_material *pExt_mat) {
    int i;
    int j;
    int temp;
    tSpecial_volume *v;
    br_actor *actor;
    br_model *model;
    LOG_TRACE("(%p, %d, %p, %p)", pSpec, pIndex, pInt_mat, pExt_mat);
}

// Offset: 67484
// Size: 0x1ab
//IDA: void __usercall DropSpecVol(int pIndex@<EAX>)
void DropSpecVol(int pIndex) {
    FILE *f;
    tPath_name the_path;
    int i;
    int spec_count;
    tSpecial_volume spec;
    tSpecial_volume *new_specs;
    char s[256];
    LOG_TRACE("(%d)", pIndex);
}

// Offset: 67912
// Size: 0x22
//IDA: void __cdecl DropSpecVol0()
void DropSpecVol0() {
    LOG_TRACE("()");
}

// Offset: 67948
// Size: 0x2c
//IDA: void __cdecl DropSpecVol1()
void DropSpecVol1() {
    LOG_TRACE("()");
}

// Offset: 67992
// Size: 0x2c
//IDA: void __cdecl DropSpecVol2()
void DropSpecVol2() {
    LOG_TRACE("()");
}

// Offset: 68036
// Size: 0x2c
//IDA: void __cdecl DropSpecVol3()
void DropSpecVol3() {
    LOG_TRACE("()");
}

// Offset: 68080
// Size: 0x2c
//IDA: void __cdecl DropSpecVol4()
void DropSpecVol4() {
    LOG_TRACE("()");
}

// Offset: 68124
// Size: 0x2c
//IDA: void __cdecl DropSpecVol5()
void DropSpecVol5() {
    LOG_TRACE("()");
}

// Offset: 68168
// Size: 0x2c
//IDA: void __cdecl DropSpecVol6()
void DropSpecVol6() {
    LOG_TRACE("()");
}

// Offset: 68212
// Size: 0x2c
//IDA: void __cdecl DropSpecVol7()
void DropSpecVol7() {
    LOG_TRACE("()");
}

// Offset: 68256
// Size: 0x2c
//IDA: void __cdecl DropSpecVol8()
void DropSpecVol8() {
    LOG_TRACE("()");
}

// Offset: 68300
// Size: 0x2c
//IDA: void __cdecl DropSpecVol9()
void DropSpecVol9() {
    LOG_TRACE("()");
}

// Offset: 68344
// Size: 0x158
//IDA: void __cdecl IdentifySpecVol()
void IdentifySpecVol() {
    int i;
    int min_index;
    tSpecial_volume *v;
    br_scalar min_d;
    br_scalar d;
    br_vector3 *p;
    char s[256];
    LOG_TRACE("()");
}

// Offset: 68688
// Size: 0x15d
//IDA: void __usercall DelSpecVolumeGraph(int pIndex@<EAX>)
void DelSpecVolumeGraph(int pIndex) {
    br_actor *actor;
    br_model *model;
    LOG_TRACE("(%d)", pIndex);
}

// Offset: 69040
// Size: 0xfa
//IDA: void __cdecl DeleteSpecVol()
void DeleteSpecVol() {
    int index;
    LOG_TRACE("()");
}

// Offset: 69292
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL()
void RotateSpecVolL() {
    LOG_TRACE("()");
}

// Offset: 69332
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL2()
void RotateSpecVolL2() {
    LOG_TRACE("()");
}

// Offset: 69372
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL3()
void RotateSpecVolL3() {
    LOG_TRACE("()");
}

// Offset: 69412
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL4()
void RotateSpecVolL4() {
    LOG_TRACE("()");
}

// Offset: 69452
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR()
void RotateSpecVolR() {
    LOG_TRACE("()");
}

// Offset: 69492
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR2()
void RotateSpecVolR2() {
    LOG_TRACE("()");
}

// Offset: 69532
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR3()
void RotateSpecVolR3() {
    LOG_TRACE("()");
}

// Offset: 69572
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR4()
void RotateSpecVolR4() {
    LOG_TRACE("()");
}

// Offset: 69612
// Size: 0x27
//IDA: void __cdecl CycleSpecVolRotate()
void CycleSpecVolRotate() {
    LOG_TRACE("()");
}

// Offset: 69652
// Size: 0x27
//IDA: void __cdecl CycleSpecVolScale()
void CycleSpecVolScale() {
    LOG_TRACE("()");
}

// Offset: 69692
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolUp2()
void ScaleSpecVolUp2() {
    LOG_TRACE("()");
}

// Offset: 69732
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolUp3()
void ScaleSpecVolUp3() {
    LOG_TRACE("()");
}

// Offset: 69772
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolUp4()
void ScaleSpecVolUp4() {
    LOG_TRACE("()");
}

// Offset: 69812
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolDown2()
void ScaleSpecVolDown2() {
    LOG_TRACE("()");
}

// Offset: 69852
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolDown3()
void ScaleSpecVolDown3() {
    LOG_TRACE("()");
}

// Offset: 69892
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolDown4()
void ScaleSpecVolDown4() {
    LOG_TRACE("()");
}

// Offset: 69932
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL()
void MoveXSpecVolL() {
    LOG_TRACE("()");
}

// Offset: 69972
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL2()
void MoveXSpecVolL2() {
    LOG_TRACE("()");
}

// Offset: 70012
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL3()
void MoveXSpecVolL3() {
    LOG_TRACE("()");
}

// Offset: 70052
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL4()
void MoveXSpecVolL4() {
    LOG_TRACE("()");
}

// Offset: 70092
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR()
void MoveXSpecVolR() {
    LOG_TRACE("()");
}

// Offset: 70132
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR2()
void MoveXSpecVolR2() {
    LOG_TRACE("()");
}

// Offset: 70172
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR3()
void MoveXSpecVolR3() {
    LOG_TRACE("()");
}

// Offset: 70212
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR4()
void MoveXSpecVolR4() {
    LOG_TRACE("()");
}

// Offset: 70252
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL()
void MoveYSpecVolL() {
    LOG_TRACE("()");
}

// Offset: 70292
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL2()
void MoveYSpecVolL2() {
    LOG_TRACE("()");
}

// Offset: 70332
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL3()
void MoveYSpecVolL3() {
    LOG_TRACE("()");
}

// Offset: 70372
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL4()
void MoveYSpecVolL4() {
    LOG_TRACE("()");
}

// Offset: 70412
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR()
void MoveYSpecVolR() {
    LOG_TRACE("()");
}

// Offset: 70452
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR2()
void MoveYSpecVolR2() {
    LOG_TRACE("()");
}

// Offset: 70492
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR3()
void MoveYSpecVolR3() {
    LOG_TRACE("()");
}

// Offset: 70532
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR4()
void MoveYSpecVolR4() {
    LOG_TRACE("()");
}

// Offset: 70572
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL()
void MoveZSpecVolL() {
    LOG_TRACE("()");
}

// Offset: 70612
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL2()
void MoveZSpecVolL2() {
    LOG_TRACE("()");
}

// Offset: 70652
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL3()
void MoveZSpecVolL3() {
    LOG_TRACE("()");
}

// Offset: 70692
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL4()
void MoveZSpecVolL4() {
    LOG_TRACE("()");
}

// Offset: 70732
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR()
void MoveZSpecVolR() {
    LOG_TRACE("()");
}

// Offset: 70772
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR2()
void MoveZSpecVolR2() {
    LOG_TRACE("()");
}

// Offset: 70812
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR3()
void MoveZSpecVolR3() {
    LOG_TRACE("()");
}

// Offset: 70852
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR4()
void MoveZSpecVolR4() {
    LOG_TRACE("()");
}

// Offset: 70892
// Size: 0x27
//IDA: void __cdecl SnapSpecVolToVertical()
void SnapSpecVolToVertical() {
    LOG_TRACE("()");
}

// Offset: 70932
// Size: 0xa5
//IDA: void __cdecl ShowSpecialVolumes()
void ShowSpecialVolumes() {
    int i;
    int j;
    int temp;
    tSpecial_volume *v;
    br_actor *actor;
    br_model *model;
    br_material *internal_mat;
    br_material *external_mat;
    LOG_TRACE("()");
}

// Offset: 71100
// Size: 0x70
//IDA: void __cdecl HideSpecialVolumes()
void HideSpecialVolumes() {
    int i;
    tSpecial_volume *v;
    LOG_TRACE("()");
}

