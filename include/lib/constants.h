#ifndef CONSTANTS_H
#define CONSTANTS_H

typedef unsigned char COLOR; // 0 - 255
typedef enum {
    FOREGROUND,
    BACKGROUND
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

#define ST_RED(purpose) (purpose = FOREGROUND) ? 31 
#define ST_GREEN   (COLOR)32
#define ST_YELLOW  (COLOR)33
#define ST_BLUE    (COLOR)34
#define ST_MAGENTA (COLOR)35
#define ST_CYAN    (COLOR)36
#define ST_WHITE   (COLOR)37

#define ST_BRIGHT_RED     (COLOR)91

#endif