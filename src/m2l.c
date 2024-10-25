#include <stdio.h>

#include "m2l.h"
#include "color.h"

int main (int argc, char* argv[])
{
	if (argc < 2)
	{
		printfc(COLOR_LPURPLE, "M2L");
		printf(" - Version %s\n", __M2L_VER);
		printStatus("Too few arguments supplied, expected at least 2.", STATUS_ERROR);
		return 1;
	}
	return 0;
}