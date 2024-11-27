#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_RENDER_LVGL_LOGO_RGB565A8
    #define LV_ATTRIBUTE_IMG_RENDER_LVGL_LOGO_RGB565A8
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RENDER_LVGL_LOGO_RGB565A8
uint8_t img_render_lvgl_logo_rgb565a8_map[] = {

    0xff, 0xff, 0xff, 0xff, 0x55, 0xad, 0x2c, 0x63, 0xeb, 0x5a, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0x0c, 0x5b, 0xeb, 0x5a, 0xef, 0x7b, 0xfb, 0xde, 0xff, 0xff,
    0xdf, 0xff, 0x30, 0x84, 0x86, 0x29, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0x65, 0x29, 0x65, 0x29, 0x86, 0x29, 0x49, 0x42, 0x9a, 0xce,
    0x55, 0xad, 0x86, 0x29, 0xa7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0x86, 0x29, 0x0c, 0x5b, 0x6d, 0x6b, 0xa7, 0x31, 0x65, 0x29, 0xeb, 0x5a,
    0x2c, 0x63, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0x66, 0x29, 0xef, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x9c, 0x65, 0x29, 0xe7, 0x39,
    0xeb, 0x5a, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0x45, 0x21, 0x96, 0xb5, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xde, 0x86, 0x29, 0xe7, 0x39,
    0x0c, 0x5b, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0x86, 0x29, 0x0c, 0x63, 0x5d, 0xef, 0x9e, 0xf7, 0x10, 0x7c, 0x66, 0x29, 0xe7, 0x39,
    0x0c, 0x5b, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0x86, 0x29, 0x28, 0x42, 0x69, 0x4a, 0x86, 0x29, 0xa7, 0x31, 0xe7, 0x39,
    0xeb, 0x5a, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa6, 0x31, 0x86, 0x29, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0x4d, 0x63, 0x45, 0x21, 0x65, 0x21, 0x65, 0x29, 0x65, 0x29, 0x65, 0x29, 0x65, 0x29, 0x65, 0x29, 0x65, 0x21, 0x86, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0x3c, 0xe7, 0x35, 0x9d, 0xf4, 0x94, 0xf4, 0x94, 0xf4, 0x94, 0xf4, 0x94, 0xf4, 0x94, 0x14, 0x95, 0xf3, 0x94, 0xeb, 0x5a, 0x86, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xde, 0xff, 0xd8, 0xfe, 0xb7, 0xfe, 0xb8, 0xfe, 0xb8, 0xfe, 0xb8, 0xfe, 0xb8, 0xfe, 0xb7, 0xfe, 0xd8, 0xfe, 0xbe, 0xf7, 0x4d, 0x63, 0x86, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xad, 0xfc, 0xa2, 0xf2, 0xa2, 0xf2, 0xa2, 0xf2, 0xa2, 0xf2, 0xa2, 0xf2, 0xa2, 0xf2, 0xa2, 0xf2, 0x81, 0xf2, 0x55, 0xfe, 0x18, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xc9, 0xf3, 0xe3, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xa2, 0xf2, 0xb2, 0xfd, 0x59, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xe9, 0xf3, 0xe3, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xa2, 0xf2, 0xb2, 0xfd, 0x39, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xe9, 0xf3, 0xe3, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xa2, 0xf2, 0xb2, 0xfd, 0x39, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xe9, 0xf3, 0xe3, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xa2, 0xf2, 0xb2, 0xfd, 0x39, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xe9, 0xf3, 0xe3, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xa2, 0xf2, 0xb2, 0xfd, 0x39, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xe9, 0xf3, 0xe3, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xe4, 0xf2, 0xa2, 0xf2, 0xb2, 0xfd, 0x39, 0xbe, 0x65, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xe9, 0xf3, 0xa2, 0xf2, 0xc3, 0xf2, 0xc3, 0xf2, 0xc3, 0xf2, 0xc3, 0xf2, 0xc3, 0xf2, 0xc3, 0xf2, 0x61, 0xf2, 0xb2, 0xfd, 0x39, 0xbe, 0x24, 0x21, 0x86, 0x29, 0x86, 0x29, 0x86, 0x29, 0x86, 0x29, 0x86, 0x29, 0x86, 0x29, 0x86, 0x29, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0x56, 0xfe, 0x0a, 0xfc, 0xe9, 0xfb, 0xe9, 0xfb, 0xe9, 0xfb, 0xe9, 0xfb, 0xe9, 0xfb, 0xe9, 0xfb, 0x09, 0xfc, 0x1a, 0xff, 0x7d, 0xef, 0x6d, 0x6b, 0xeb, 0x5a, 0x0b, 0x5b, 0x0b, 0x5b, 0x0b, 0x5b, 0x0b, 0x5b, 0x0b, 0x5b, 0x0b, 0x5b, 0x49, 0x42, 0x86, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xff, 0xff, 0xfe, 0xf7, 0xde, 0xef, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xf7, 0xde, 0xef, 0xfe, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xef, 0x9f, 0xef, 0x9f, 0xef, 0x9f, 0xef, 0x9f, 0xef, 0x9f, 0xef, 0x9f, 0xef, 0x9d, 0xf7, 0x8e, 0x6b, 0x86, 0x29, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0x56, 0xb7, 0xae, 0x6e, 0xae, 0x6e, 0xae, 0x6e, 0xae, 0x6e, 0xae, 0x6e, 0xae, 0x6e, 0xae, 0x6e, 0xae, 0x6e, 0xba, 0xd7, 0x3f, 0xe7, 0xbf, 0x53, 0x7f, 0x43, 0x9f, 0x4b, 0x9f, 0x4b, 0x9f, 0x4b, 0x9f, 0x4b, 0x9f, 0x4b, 0x5f, 0x43, 0x9f, 0x9d, 0x3c, 0xe7, 0xc7, 0x31, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xd0, 0x7e, 0x8c, 0x5e, 0x8c, 0x5e, 0x8c, 0x5e, 0x8c, 0x5e, 0x8c, 0x5e, 0x8c, 0x5e, 0x8c, 0x5e, 0x6b, 0x56, 0x95, 0xb7, 0x7f, 0xc6, 0xdf, 0x2a, 0x1f, 0x3b, 0x1f, 0x3b, 0x1f, 0x3b, 0x1f, 0x3b, 0x1f, 0x3b, 0x1f, 0x3b, 0xff, 0x32, 0x1f, 0x5c, 0x7d, 0xef, 0x28, 0x42, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xf0, 0x86, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8b, 0x5e, 0x96, 0xb7, 0x7f, 0xc6, 0xff, 0x32, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0xff, 0x32, 0x3f, 0x64, 0x7d, 0xef, 0x28, 0x42, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xf0, 0x86, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8b, 0x5e, 0x96, 0xb7, 0x7f, 0xc6, 0xff, 0x32, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0xff, 0x32, 0x3f, 0x64, 0x7d, 0xef, 0x28, 0x42, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xf0, 0x86, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8b, 0x5e, 0x96, 0xb7, 0x7f, 0xc6, 0xff, 0x32, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0xff, 0x32, 0x3f, 0x64, 0x7d, 0xef, 0x28, 0x42, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0xf0, 0x7e, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8b, 0x5e, 0x96, 0xb7, 0x7f, 0xc6, 0xff, 0x32, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0xff, 0x32, 0x3f, 0x64, 0x7d, 0xef, 0x28, 0x42, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa7, 0x31, 0xe7, 0x39,
    0x13, 0x9f, 0x8c, 0x5e, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8b, 0x5e, 0x96, 0xb7, 0x7f, 0xc6, 0xff, 0x32, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0xff, 0x32, 0x3f, 0x64, 0x7d, 0xef, 0x28, 0x42, 0xa6, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xc7, 0x31, 0xa6, 0x31, 0x28, 0x42,
    0xbc, 0xe7, 0xae, 0x6e, 0x8c, 0x5e, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8c, 0x66, 0x8b, 0x56, 0x95, 0xb7, 0x7f, 0xc6, 0xdf, 0x2a, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0x3f, 0x3b, 0xff, 0x32, 0x1f, 0x64, 0x5d, 0xef, 0x08, 0x3a, 0x86, 0x29, 0xa7, 0x31, 0xa7, 0x31, 0xa7, 0x31, 0xa7, 0x31, 0xa6, 0x31, 0x45, 0x21, 0x92, 0x8c,
    0xff, 0xff, 0xbb, 0xdf, 0xd0, 0x7e, 0xad, 0x66, 0xad, 0x66, 0xad, 0x66, 0xad, 0x66, 0xad, 0x66, 0x8d, 0x66, 0xb9, 0xd7, 0x1f, 0xe7, 0x7f, 0x4b, 0x5f, 0x43, 0x5f, 0x43, 0x5f, 0x43, 0x5f, 0x43, 0x5f, 0x43, 0x5f, 0x43, 0x1f, 0x3b, 0x1f, 0x8d, 0xdf, 0xff, 0x2c, 0x63, 0xa7, 0x31, 0xe7, 0x39, 0xe7, 0x39, 0xe7, 0x39, 0xe7, 0x39, 0x28, 0x42, 0x92, 0x8c, 0xdf, 0xff,
    0x00, 0x00, 0x62, 0xb7, 0xc3, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc2, 0xc4, 0x94, 0x26, 0x00, 0x03, 0x90, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xde, 0x34,
    0x61, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0xb9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xc5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xb3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x1c, 0x68, 0x73, 0x72, 0x72, 0x72, 0x72, 0x70, 0x76, 0xc5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x07, 0x3e, 0x47, 0x46, 0x46, 0x46, 0x46, 0x48, 0x3c, 0x08, 0xb2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xa2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x59, 0x43, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7a, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xc4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x76, 0x41, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xc4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x76, 0x41, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xc4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x76, 0x41, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xc4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x76, 0x41, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xc5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x77, 0x42, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xc9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x78, 0x41, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x50, 0xbe, 0xc7, 0xc6, 0xc6, 0xc6, 0xc6, 0xc7, 0xbe, 0x2e, 0x11, 0xac, 0xc3, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x00, 0x09, 0x12, 0x11, 0x11, 0x11, 0x11, 0x12, 0x08, 0x00, 0x00, 0x03, 0x15, 0x13, 0x13, 0x13, 0x13, 0x13, 0x11, 0x0d, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x61, 0xd9, 0xe3, 0xe2, 0xe2, 0xe2, 0xe2, 0xe3, 0xd8, 0x33, 0x1e, 0xd3, 0xe8, 0xe6, 0xe6, 0xe6, 0xe6, 0xe7, 0xe5, 0x78, 0x19, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x42, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x10, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x13, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x13, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x13, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x13, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x8a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x13, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7,
    0x1e, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6d, 0x42, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x13, 0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0x00, 0x2a, 0xb7, 0xec, 0xf2, 0xf1, 0xf1, 0xf3, 0xe8, 0x3b, 0x21, 0xe0, 0xf4, 0xf2, 0xf2, 0xf2, 0xf2, 0xf3, 0xf2, 0x8c, 0x05, 0xb8, 0xf4, 0xf3, 0xf3, 0xf3, 0xf4, 0xe3, 0x83, 0x04,

};

const lv_image_dsc_t img_render_lvgl_logo_rgb565a8 = {
    .header.magic = LV_IMAGE_HEADER_MAGIC,
    .header.cf = LV_COLOR_FORMAT_RGB565A8,
    .header.flags = 0,
    .header.w = 30,
    .header.h = 30,
    .header.stride = 60,
    .data_size = sizeof(img_render_lvgl_logo_rgb565a8_map),
    .data = img_render_lvgl_logo_rgb565a8_map,
};

