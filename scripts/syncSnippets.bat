@echo OFF
setlocal EnableDelayedExpansion 
echo Synchronizing sublime snippets

set batFilePath=%~dp0
echo %batFilePath%

set snippetPath=%batFilePath%..\sublime-snippets
echo %snippetPath%

set windowsSublimePath=%APPDATA%/Sublime Text 3/Packages/User/
echo %windowsSublimePath%
echo ---------- REMOVING SymLinks TO UPDATE ----------
for /F "usebackq delims=" %%a in (`DIR /a:l /s /b "%windowsSublimePath%\"`) DO echo Deleting %%~nxa & del "%%a"

echo Files removed...

echo ----------      CREATING SymLinks      ----------
setlocal
for %%A in ("%snippetPath%\*") do (
  mklink "%windowsSublimePath%%%~nxA" %%A 
  echo.
)
endlocal
endlocal

PAUSE