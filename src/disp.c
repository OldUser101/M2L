#include <stdio.h>

#include "m2l.h"
#include "color.h"
#include "disp.h"

void banner()
{
	printfc(COLOR_LPURPLE, "M2L");
	printf(" Version %s, (c) Nathan Gill, under MPLv2\n", __M2L_VER);
}