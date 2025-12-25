#include "methods.h"

/*
	------------------------------
	- \e[{SGR_codes}m{text}\e[0m -
	------------------------------
	
	* \e[ = escape sequence start
	* {SGR_codes} = one or more codes separated by ;
	* m = end of code sequence
	* {text} = your text
	* \e[0m = reset (clear all formatting)
*/

void STRprintfcol(char* src, COLOR clr, STYLE styles[9]) {
	char* prefix = "\e[";
	
	if (styles != NULL)
		for (int i = 0; i < 9; i++)
			if (styles[i+1] == NULL)
				break;
			else
				prefix = sprintf(prefix,
								"%d;",
								(styles[i] >= 0 && styles[i] <= 9) ? styles[i] : 0); // normal style if out of range
				
	if (clr != NULL)
		prefix = sprintf(prefix,
					"%d;",
						clr);

	prefix[strlen(prefix)-1] = 'm';

    printf("%s%s%s", prefix, *src, ansi_RESETCOL);
}

// char* getColor(unsigned short int CODE) {
//     return ""
// }]