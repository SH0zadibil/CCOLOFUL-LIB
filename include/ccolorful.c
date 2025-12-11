#include "ccolorful.h"

const enum ansi_color {
    /* STANDART COLORS */
    ST_BLACK  = 30,
    ST_RED    = 31,
    ST_GREEM  = 32,
    ST_YELLOW = 33,
    ST_BLUE   = 34,
    ST_PURPLE = 35, // magenta
    ST_CYAN   = 36,
    ST_WHITE  = 37,

    /* BRIGHT COLORS */
    BR_BLACK  = 90,
    BR_RED    = 91,
    BR_GREEM  = 92,
    BR_YELLOW = 93,
    BR_BLUE   = 94,
    BR_PURPLE = 95, // magenta
    BR_CYAN   = 96,
    BR_WHITE  = 97
};

const enum ansi_style {
    BOLD,
    ITALIC,
    STRIKE
};

void STRprintfcol(char* src, enum ansi_color clr) {
    printf("\e[%dm%s%s", (int)clr, src, ansi_RESETCOL);
}

// char* getColor(unsigned short int CODE) {
//     return ""
// }