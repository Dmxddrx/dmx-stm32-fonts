# dmx-stm32-fonts 🔠

A plug-and-play bitmap font library for the entire C/C++ microcontroller ecosystem (STM32, ESP32, Arduino, etc.). 

This library provides a clean, ready-to-use set of `uint16_t` row-major font arrays, including a custom rendering of the modern **Inter** font family optimized for TFT and OLED screens.

## Current Specs (v1.0)

* **2 Font Styles:** Default and Inter Regular (More styles coming in future updates).
* **5 Text Sizes:** 5x7, 6x8, 7x10, 11x18, 16x26.
* **Format:** Data is structured as `uint16_t` row-major arrays (MSB = leftmost pixel), ready to drop into custom rendering engines.

## 🛠️ Usage

Include `fonts.h` in your project and pass the desired font pointer directly to your text rendering function. 

```c
#include "fonts.h"

// Example: Passing the 11x18 Inter Regular font pointer to a drawing function
TFT_PrintFont(10, 20, TEXT_COLOR, BG_COLOR, &Font_Inter_Regular_11x18, "Hello World");