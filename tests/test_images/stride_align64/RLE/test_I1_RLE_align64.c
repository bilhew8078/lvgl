
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_TEST_I1_RLE_ALIGN64
#define LV_ATTRIBUTE_TEST_I1_RLE_ALIGN64
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_TEST_I1_RLE_ALIGN64
uint8_t test_I1_RLE_align64_map[] = {

    0x01,0x00,0x00,0x00,0xbc,0x03,0x00,0x00,0xc8,0x03,0x00,0x00,0xff,0x56,0x82,0x0a,
    0xfa,0x43,0xbe,0xeb,0x3b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0xff,0xff,0xff,0xe0,0x00,0x0c,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0xf0,0xff,0xff,0xef,0xff,0xec,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0xc0,0x3f,0xe7,0xe8,0x00,0x2c,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0x00,0x0f,0xc3,0xeb,0xff,0xac,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0x00,0x0f,0xc3,0xea,0xff,0x00,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1e,0x00,0x07,0xe7,0xea,0xfe,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1e,0x00,0x07,0xff,0xea,0x82,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1c,0x00,0x03,0xff,0xea,0xba,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1c,0x00,0x03,0xc3,0xea,0xaa,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1c,0x00,0x03,0x81,0xea,0xba,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1c,0x00,0x03,0x00,0xea,0x82,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1e,0x00,0x07,0x00,0xea,0xfe,0xac,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1e,0x00,0x07,0x00,0xff,0xea,0x00,0xac,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0x00,0x07,0x00,0xeb,0xff,0xac,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0x00,0x1f,0x81,0xe8,0x00,0x2c,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1f,0xc0,0x1f,0xc3,0xef,0xff,0xec,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xf0,0x7f,0xff,0xe0,0x00,0x0c,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x0c,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xff,0xff,0xff,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xf0,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xf8,0x7f,0xf0,0x7f,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x71,0xf8,0x3f,0xc0,0x3f,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xf8,0x7f,0xc4,0x1f,0xff,0xff,0xff,
    0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x3f,0xcf,0x0f,0xff,0xff,0xad,
    0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x7f,0xcf,0xff,0x0f,0xff,0xff,
    0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x3f,0xfd,0x0f,0xff,0xff,
    0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xf8,0x7f,0xe0,0x0f,0xf0,0x7f,
    0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xf8,0x3f,0xc1,0x0f,0xf3,0x3f,
    0xad,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xf8,0x7f,0x87,0x0f,0xfe,0x3f,
    0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xf0,0x3f,0x8f,0x0f,0xf0,0x3f,
    0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x1f,0x86,0x0f,0xf3,0x3f,
    0xad,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x1f,0x80,0x07,0xf2,0x3f,
    0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x1c,0x1f,0xff,0xc1,0x87,0xf0,
    0x1f,0xad,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x01,0x7f,
    0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x01,
    0x5f,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x01,0x56,
    0xd7,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x0a,
    0xbf,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0xaa,
    0xab,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0xff,0x00,0x00,0x00,
    0x0a,0xbf,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x02,
    0xaa,0xd6,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,
    0x15,0x5f,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,
    0xaa,0xb7,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,
    0x05,0x6d,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x01,
    0x55,0x5f,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,
    0x2a,0xbb,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,
    0x95,0xae,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xb9,0x00,0x00,0x00,
    0x00,0x56,0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xfc,0x00,0x16,0x00,

};

const lv_image_dsc_t test_I1_RLE_align64 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_I1,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 16,
  .data_size = sizeof(test_I1_RLE_align64_map),
  .data = test_I1_RLE_align64_map,
};

