@echo off

rem This script runs "m2l.exe" in the "bin" directory,
rem with all supplied arguments.

cd bin
m2l.exe %*
cd ..