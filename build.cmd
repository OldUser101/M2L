@echo off

rem This script just compiles the source files,
rem so you dont have to "CD SRC" every time!

echo -----------------------
echo  M2L Build Script v1.1
echo -----------------------

echo Cleaning up previous build artifacts...

del /q bin\ > NUL
rmdir bin > NUL
mkdir bin > NUL

echo Compiling source files...

cd src\
cl /nologo /EHsc m2l.c color.c

echo Moving files...

move m2l.obj ..\bin\ > NUL
move color.obj ..\bin\ > NUL
move m2l.exe ..\bin\ > NUL
cd ..

echo Done.