# dmx-stm32-fonts 🔠

A lightweight, modular bitmap font library built for STM32 TFT and OLED displays. 

This library provides a clean API for rendering text across multiple font sizes and styles, including a custom implementation of the modern **Inter** font family optimized for embedded screens.

## Features

* **Standard Bitmap Fonts:** Includes highly optimized, hand-reviewed default fonts (5x7, 6x8, 7x10, 11x18, 16x26).
* **Modern Typography:** Support for the **Inter** font family (Light, Regular, Medium, Bold, and Italics) pre-rendered for crisp display on TFTs.
* **Clean API:** Uses an intuitive Enum-based lookup system (`FONTS_GetFont`) to easily switch between sizes and styles dynamically.
* **Row-Major Format:** Data is structured as `uint16_t` row-major arrays (MSB = leftmost pixel), ready to be dropped into custom `TFT_DrawChar` rendering engines.

## Usage

Include `fonts.h` in your project. Instead of passing massive arrays directly, use the built-in lookup function to select your font size and style:

```c
#include "fonts.h"

// Example: Fetching a 7x10 Inter Regular font
FontDef_t* myFont = FONTS_GetFont(FONT_SIZE_7x10, FONT_STYLE_INTER_REGULAR);

// Pass to your display's string drawing function
TFT_DrawString(10, 20, "Hello World", myFont);