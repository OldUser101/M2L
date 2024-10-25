#include <stdio.h>

#include "m2l.h"
#include "color.h"
#include "disp.h"
#include "file.h"

int main(int argc, char* argv[])
{
	FILE* inFile;
	
	banner();
	
	if (argc < 2)
	{
		printStatus("Too few arguments supplied, expected at least 2.", STATUS_ERROR);
		return 1;
	}
	
	inFile = loadFileRead(argv[1]);
	if (inFile == FILE_ACCESS_FAIL)
	{
		printStatusF(STATUS_ERROR, "Failed to open source file \'%s\'.", argv[1]);
		return 1;
	}
	else
		printStatusF(STATUS_INFO, "Loaded source file \'%s\'.", argv[1]);
	
	fclose(inFile);
	return 0;
}