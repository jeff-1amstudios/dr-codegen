#include "options.h"

int gKey_defns[18];
tRadio_bastards gRadio_bastards[13];
int gKey_count;
int gLast_graph_sel;
char *gKey_names[125];
int gPending_entry;
tInterface_spec *gThe_interface_spec;
int gOrig_key_mapping[67];
br_pixelmap *gDials_pix;
int gCurrent_key;

// Offset: 0
// Size: 0xa1
//IDA: void __usercall DrawDial(int pWhich_one@<EAX>, int pWhich_stage@<EDX>)
void DrawDial(int pWhich_one, int pWhich_stage) {
    LOG_TRACE("(%d, %d)", pWhich_one, pWhich_stage);
}

// Offset: 164
// Size: 0x182
//IDA: void __usercall MoveDialFromTo(int pWhich_one@<EAX>, int pOld_stage@<EDX>, int pNew_stage@<EBX>)
void MoveDialFromTo(int pWhich_one, int pOld_stage, int pNew_stage) {
    tS32 time_diff;
    tU32 start_time;
    LOG_TRACE("(%d, %d, %d)", pWhich_one, pOld_stage, pNew_stage);
}

// Offset: 552
// Size: 0x5e
//IDA: void __cdecl SoundOptionsStart()
void SoundOptionsStart() {
    LOG_TRACE("()");
}

// Offset: 648
// Size: 0x5a
//IDA: int __usercall SoundOptionsDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int SoundOptionsDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
}

// Offset: 740
// Size: 0x9a
//IDA: int __usercall SoundOptionsLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SoundOptionsLeft(int *pCurrent_choice, int *pCurrent_mode) {
    int old_value;
    int *the_value;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 896
// Size: 0x9a
//IDA: int __usercall SoundOptionsRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SoundOptionsRight(int *pCurrent_choice, int *pCurrent_mode) {
    int old_value;
    int *the_value;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 1052
// Size: 0x180
//IDA: int __usercall SoundClick@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int SoundClick(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    float x_delta;
    float y_delta;
    float angle;
    int old_value;
    int *the_value;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
}

// Offset: 1436
// Size: 0x4d
//IDA: void __cdecl DoSoundOptions()
void DoSoundOptions() {
    static tFlicette flicker_on[3];
    static tFlicette flicker_off[3];
    static tFlicette push[3];
    static tMouse_area mouse_areas[3];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
}

// Offset: 1516
// Size: 0x24a
//IDA: void __cdecl GetGraphicsOptions()
void GetGraphicsOptions() {
    int value;
    br_scalar br_value;
    LOG_TRACE("()");
}

// Offset: 2104
// Size: 0x201
//IDA: void __cdecl SetGraphicsOptions()
void SetGraphicsOptions() {
    LOG_TRACE("()");
}

// Offset: 2620
// Size: 0x50
//IDA: void __usercall PlayRadioOn2(int pIndex@<EAX>, int pValue@<EDX>)
void PlayRadioOn2(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
}

// Offset: 2700
// Size: 0x50
//IDA: void __usercall PlayRadioOff2(int pIndex@<EAX>, int pValue@<EDX>)
void PlayRadioOff2(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
}

// Offset: 2780
// Size: 0x4f
//IDA: void __usercall PlayRadioOn(int pIndex@<EAX>, int pValue@<EDX>)
void PlayRadioOn(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
}

// Offset: 2860
// Size: 0x4f
//IDA: void __usercall PlayRadioOff(int pIndex@<EAX>, int pValue@<EDX>)
void PlayRadioOff(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
}

// Offset: 2940
// Size: 0x6d
//IDA: void __cdecl DrawInitialRadios()
void DrawInitialRadios() {
    int i;
    LOG_TRACE("()");
}

// Offset: 3052
// Size: 0x54
//IDA: void __usercall RadioChanged(int pIndex@<EAX>, int pNew_value@<EDX>)
void RadioChanged(int pIndex, int pNew_value) {
    LOG_TRACE("(%d, %d)", pIndex, pNew_value);
}

// Offset: 3136
// Size: 0x79
//IDA: int __usercall GraphOptLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptLeft(int *pCurrent_choice, int *pCurrent_mode) {
    int new_value;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 3260
// Size: 0x7d
//IDA: int __usercall GraphOptRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptRight(int *pCurrent_choice, int *pCurrent_mode) {
    int new_value;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 3388
// Size: 0x94
//IDA: int __usercall GraphOptUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptUp(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 3536
// Size: 0x94
//IDA: int __usercall GraphOptDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptDown(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 3684
// Size: 0xaf
//IDA: int __usercall RadioClick@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int RadioClick(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int i;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
}

// Offset: 3860
// Size: 0x3b
//IDA: int __usercall GraphOptGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 3920
// Size: 0xc3
//IDA: void __usercall PlotAGraphBox(int pIndex@<EAX>, int pColour_value@<EDX>)
void PlotAGraphBox(int pIndex, int pColour_value) {
    LOG_TRACE("(%d, %d)", pIndex, pColour_value);
}

// Offset: 4116
// Size: 0x32
//IDA: void __usercall DrawAGraphBox(int pIndex@<EAX>)
void DrawAGraphBox(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
}

// Offset: 4168
// Size: 0x2f
//IDA: void __usercall EraseAGraphBox(int pIndex@<EAX>)
void EraseAGraphBox(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
}

// Offset: 4216
// Size: 0x50
//IDA: void __usercall DrawGraphBox(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawGraphBox(int pCurrent_choice, int pCurrent_mode) {
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
}

// Offset: 4296
// Size: 0x80
//IDA: void __cdecl DoGraphicsOptions()
void DoGraphicsOptions() {
    static tFlicette flicker_on[14];
    static tFlicette flicker_off[14];
    static tFlicette push[14];
    static tMouse_area mouse_areas[14];
    static tInterface_spec interface_spec;
    LOG_TRACE("()");
}

// Offset: 4424
// Size: 0x5f6
//IDA: void __cdecl CalibrateJoysticks()
void CalibrateJoysticks() {
    tJoy_calib_stage stage;
    int escaped;
    int joy_value_x;
    int joy_value_y;
    int key;
    int top_left[2];
    int bot_right[2];
    int centre[2];
    int range[2];
    int min[2];
    int i;
    int saved_1x;
    int saved_1y;
    int saved_2x;
    int saved_2y;
    int max;
    char s[256];
    LOG_TRACE("()");
}

// Offset: 5952
// Size: 0x76
//IDA: void __usercall StripControls(unsigned char *pStr@<EAX>)
void StripControls(unsigned char *pStr) {
    int i;
    int len;
    LOG_TRACE("(%p)", pStr);
}

// Offset: 6072
// Size: 0xd7
//IDA: void __cdecl LoadKeyNames()
void LoadKeyNames() {
    int i;
    FILE *f;
    tPath_name the_path;
    unsigned char s[256];
    LOG_TRACE("()");
}

// Offset: 6288
// Size: 0x4f
//IDA: void __cdecl DisposeKeyNames()
void DisposeKeyNames() {
    int i;
    LOG_TRACE("()");
}

// Offset: 6368
// Size: 0x36
//IDA: void __cdecl SaveOrigKeyMapping()
void SaveOrigKeyMapping() {
    LOG_TRACE("()");
}

// Offset: 6424
// Size: 0x180
//IDA: void __usercall GetKeyCoords(int pIndex@<EAX>, int *pY@<EDX>, int *pName_x@<EBX>, int *pKey_x@<ECX>, int *pEnd_box)
void GetKeyCoords(int pIndex, int *pY, int *pName_x, int *pKey_x, int *pEnd_box) {
    int col;
    LOG_TRACE("(%d, %p, %p, %p, %p)", pIndex, pY, pName_x, pKey_x, pEnd_box);
}

// Offset: 6808
// Size: 0xb6
//IDA: void __cdecl SetKeysToDefault()
void SetKeysToDefault() {
    FILE *f;
    tPath_name the_path;
    int i;
    LOG_TRACE("()");
}

// Offset: 6992
// Size: 0xd9
//IDA: void __cdecl SaveKeyMapping()
void SaveKeyMapping() {
    FILE *f;
    tPath_name the_path;
    int i;
    LOG_TRACE("()");
}

// Offset: 7212
// Size: 0x3c
//IDA: void __usercall ChangeKeyMapIndex(int pNew_one@<EAX>)
void ChangeKeyMapIndex(int pNew_one) {
    LOG_TRACE("(%d)", pNew_one);
}

// Offset: 7272
// Size: 0x49a
//IDA: void __usercall DrawKeyAssignments(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawKeyAssignments(int pCurrent_choice, int pCurrent_mode) {
    int i;
    int y;
    int x_coord;
    int y_coord;
    int name_x;
    int key_x;
    int new_key;
    int end_box;
    tDR_font *font_n;
    tDR_font *font_k;
    static int on_radios_last_time;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
}

// Offset: 8452
// Size: 0xfc
//IDA: int __usercall KeyAssignLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignLeft(int *pCurrent_choice, int *pCurrent_mode) {
    int new_index;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 8704
// Size: 0xfc
//IDA: int __usercall KeyAssignRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignRight(int *pCurrent_choice, int *pCurrent_mode) {
    int new_index;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 8956
// Size: 0x12b
//IDA: int __usercall KeyAssignUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignUp(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 9256
// Size: 0x109
//IDA: int __usercall KeyAssignDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignDown(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 9524
// Size: 0x3f1
//IDA: int __usercall KeyAssignGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    int key;
    int i;
    int j;
    int y;
    int new_index;
    int disallowed;
    int name_x;
    int key_x;
    int end_box;
    tDR_font *font;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
}

// Offset: 10536
// Size: 0xa8
//IDA: int __usercall MouseyClickBastard@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int MouseyClickBastard(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int i;
    int x_coord;
    int y_coord;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
}

// Offset: 10704
// Size: 0x5a
//IDA: void __cdecl DrawInitialKMRadios()
void DrawInitialKMRadios() {
    int i;
    LOG_TRACE("()");
}

// Offset: 10796
// Size: 0x16e
//IDA: void __cdecl DoControlOptions()
void DoControlOptions() {
    static tFlicette flicker_on[4];
    static tFlicette flicker_off[4];
    static tFlicette push[4];
    static tMouse_area mouse_areas[5];
    static tInterface_spec interface_spec;
    int result;
    int swap_font_1;
    int swap_font_2;
    int swap_font_3;
    int second_time_around;
    int orig_key_map_index;
    LOG_TRACE("()");
}

// Offset: 11164
// Size: 0x44
//IDA: void __cdecl LoadSoundOptionsData()
void LoadSoundOptionsData() {
    LOG_TRACE("()");
}

// Offset: 11232
// Size: 0x30
//IDA: void __cdecl FreeSoundOptionsData()
void FreeSoundOptionsData() {
    LOG_TRACE("()");
}

// Offset: 11280
// Size: 0xa5
//IDA: void __cdecl DrawDisabledOptions()
void DrawDisabledOptions() {
    br_pixelmap *image;
    LOG_TRACE("()");
}

// Offset: 11448
// Size: 0x92
//IDA: void __cdecl DoOptions()
void DoOptions() {
    static tFlicette flicker_on[4];
    static tFlicette flicker_off[4];
    static tFlicette push[4];
    static tMouse_area mouse_areas[4];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
}

