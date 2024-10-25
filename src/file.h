#ifndef _M2L_FILE
#define _M2L_FILE
#endif

#define FILE_ACCESS_FAIL (FILE*)0
#define FILE_ACCESS_SUCCESS (FILE*)1

// Returns a value indicating whether a file is accessible in a given mode.
int getFileAccessStatus(const char* filename, const char* mode);

// Returns a read-only file pointer. May return FILE_ACCESS_FAIL.
FILE* loadFileRead(const char* filename);