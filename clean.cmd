@echo off

rem This script simply deletes all build artifacts.

echo -------------------------
echo  M2L Cleanup Script v1.0
echo -------------------------

echo Cleaning up build artifacts...

del /q bin\ > NUL
rmdir bin > NUL
mkdir bin > NUL

echo Done.