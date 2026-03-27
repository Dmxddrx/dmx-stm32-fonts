/**
 * fonts.c / fonts.h
 *
 * Author      : dmxddrx
 * Created     : 2025
 *
 * Description :
 *   Bitmap font library for STM32 TFT displays.
 *   Contains Font_5x7, Font_6x8, Font_7x10, Font_11x18, Font_16x26.
 *
 * Font data origin :
 *   These fonts were built and refined incrementally by dmxddrx
 *   over time, with the assistance of AI tools
 *   Original column-major source data was transposed to row-major
 *   uint16_t format to match the TFT_DrawChar rendering engine.
 *   Any resemblance to prior open-source font tables is incidental —
 *   every glyph has been reviewed, corrected, or redrawn by the author.
 *
 * Usage :
 *   Include fonts.h and pass a FontDef_t pointer to TFT_PrintFont().
 *   Data format: each uint16_t = one row of pixels, MSB = leftmost pixel.
 *
 * No license is attached. Credit appreciated but not required.
 * Do whatever you want with this — just don't claim it was yours alone.
 */

/* -------------------------------------------------------------------------
Available Fonts
	Default
		5x7
		6x8
		7x10
		11x18
		16x26

	Inter
		Regular
			5x7
			6x8
			7x10

------------------------------------------------------------------------- */

#ifndef FONTS_H
#define FONTS_H 120

/* C++ detection */
#ifdef __cplusplus
extern C {
#endif

#include "stm32f4xx_hal.h"
#include "string.h"


typedef struct {
	uint8_t FontWidth;    // Font width in pixels
	uint8_t FontHeight;   // Font height in pixels
	const uint16_t *data; // Pointer to data font data array
} FontDef_t;


typedef struct {
	uint16_t Length;      // String length in units of pixels
	uint16_t Height;      // String height in units of pixels
} FONTS_SIZE_t;

// -------------------------------------------------------------------------
// Font: Default
// Default 5x7 font
extern FontDef_t Font_5x7;

// Default 6x8 font
extern FontDef_t Font_6x8;

// Default 7x10 font
extern FontDef_t Font_7x10;

// Default 11x18 font
extern FontDef_t Font_11x18;

// Default 16x26 font
extern FontDef_t Font_16x26;
// -------------------------------------------------------------------------



// -------------------------------------------------------------------------
// Font: Inter Regular
// Inter Regular 5x7 font
extern FontDef_t Font_Inter_Regular_5x7;

// Inter Regular 6x8 font
extern FontDef_t Font_Inter_Regular_6x8;

// Inter Regular 7x10 font
extern FontDef_t Font_Inter_Regular_7x10;
// -------------------------------------------------------------------------


char* FONTS_GetStringSize(char* str, FONTS_SIZE_t* SizeStruct, FontDef_t* Font);


/* C++ detection */
#ifdef __cplusplus
}
#endif


#endif
