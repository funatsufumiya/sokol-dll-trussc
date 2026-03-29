#define SOKOL_DLL

#if defined(_WIN32)
#define SOKOL_D3D11
#elif defined(__APPLE__)
#define SOKOL_METAL
#elif defined(__EMSCRIPTEN__)
#define SOKOL_GLES3
// #elif defined(__linux__) || defined(__unix__)
#else
#define SOKOL_GLCORE
#endif

#define SOKOL_NO_ENTRY
#define SOKOL_IMPL
#include "sokol_log.h"
#include "sokol_gfx.h"
#include "sokol_app.h"
#include "sokol_glue.h"
#include "util/sokol_gl_tc.h"

#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#include "cimgui.h"
#include "util/sokol_imgui.h"