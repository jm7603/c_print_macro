//
// Created by jm on 23-5-27.
//

#ifndef COLOR_H_
#define COLOR_H_

/* color base value */
#define BLACK   0x14
#define RED     0x15
#define GREEN   0x16
#define YELLOW  0x17
#define BLUE    0x18
#define MAGENTA 0x19
#define CYAN    0x1A
#define WHITE   0x1B
#define DEFAULT 0x1D

/* base value to ANSI/VT100 color value */
#define BG(color) ((color) + 0x14)
#define FG(color) ((color) + 0x0A)

/* set the console color output attributes */
#define SET_CONSOLE_TEXT_COLOR(bg, fg) printf("\033[%d;%dm", bg, fg)
#define RESET_CONSOLE_TEXT_COLOR() SET_CONSOLE_TEXT_COLOR(BG(DEFAULT), FG(DEFAULT))

/* reset all console attributes(we'll move to `console_vt.h`) */
#define RESET_CONSOLE_ATTRIBUTE() printf("\033[0m")

#endif //COLOR_H_
