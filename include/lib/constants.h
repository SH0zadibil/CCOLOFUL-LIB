#ifndef CONSTANTS_H
#define CONSTANTS_H

typedef unsigned char COLOR; // 0 - 255
typedef enum {
    FOREGROUND = 1,
    BACKGROUND = 2
} COLOR_PURPOSE;

typedef enum {
    SGR_RESET        = 0,

    SGR_BOLD         = 1,
    SGR_DIM          = 2,
    SGR_ITALIC       = 3,
    SGR_UNDERLINE    = 4,

    SGR_REVERSE      = 7,
    SGR_HIDDEN       = 8,
    SGR_STRIKE       = 9
} STYLE;

#define RESET_CLR "\e[0m"

#define ST_BLACK(purpose)   (purpose == 1) ? (COLOR)30 : (purpose == 2) ? (COLOR)90 : NULL
#define ST_RED(purpose)     (purpose == 1) ? (COLOR)31 : (purpose == 2) ? (COLOR)91 : NULL
#define ST_GREEN(purpose)   (purpose == 1) ? (COLOR)32 : (purpose == 2) ? (COLOR)92 : NULL
#define ST_YELLOW(purpose)  (purpose == 1) ? (COLOR)33 : (purpose == 2) ? (COLOR)93 : NULL
#define ST_BLUE(purpose)    (purpose == 1) ? (COLOR)34 : (purpose == 2) ? (COLOR)94 : NULL
#define ST_MAGENTA(purpose) (purpose == 1) ? (COLOR)35 : (purpose == 2) ? (COLOR)95 : NULL // aka purple color
#define ST_CYAN(purpose)    (purpose == 1) ? (COLOR)36 : (purpose == 2) ? (COLOR)96 : NULL
#define ST_WHITE(purpose)   (purpose == 1) ? (COLOR)37 : (purpose == 2) ? (COLOR)97 : NULL

// #define ST_RBG(purpose, r,g,b) ...

#endif
