#include <stdio.h>

#include "file.h"

int getFileAccessStatus(const char* filename, const char* mode)
{
	FILE* f;
	f = fopen(filename, mode);
	if (!f)
		return FILE_ACCESS_FAIL;
	fclose(f);
	return FILE_ACCESS_SUCCESS;
}

FILE* loadFileRead(const char* filename)
{
	FILE* f;
	f = fopen(filename, "r");
	if (!f)
		return FILE_ACCESS_FAIL;
	return f;
}