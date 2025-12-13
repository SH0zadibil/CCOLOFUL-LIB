#include "ccolorful.h"

void STRprintfcol(char* src, COLOR clr) {
    printf("\e[%dm%s%s", clr, src, ansi_RESETCOL);
}

// char* getColor(unsigned short int CODE) {
//     return ""
// }