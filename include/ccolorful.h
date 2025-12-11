#ifndef CCOLOR_H
#define CCOLOR_H

#include <stdio.h>
#include <stdlib.h>

extern const enum ansi_color;
extern const enum ansi_style;

#ifdef _WIN32
	#include <windows.h>
#else
	#define ansi_RESETCOL "\e[0m"

	extern void STRprintfcol(char* src, enum ansi_color clr);
	extern char* getColor(unsigned short int CODE);
#endif
#endif