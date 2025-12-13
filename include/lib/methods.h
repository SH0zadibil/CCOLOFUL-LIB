#ifndef METHODS_H
#define METHODS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
	#include <windows.h>
#else
	#define ansi_RESETCOL "\e[0m"

	#include "constants.h"
	
	extern void STRprintfcol(char* src, COLOR clr);
	extern COLOR getRGB(unsigned char R,
						unsigned char G,
						unsigned char B);

#endif
#endif