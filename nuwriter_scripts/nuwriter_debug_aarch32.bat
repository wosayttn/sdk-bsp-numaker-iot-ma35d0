:forever_develop
py -3 nuwriter.py -a ddrimg\MA35D03F864C.bin
IF %ERRORLEVEL% EQU 0 (
   py -3 nuwriter.py -o execute -w ddr 0x28000000 debug_aarch32.bin
)
pause

goto :forever_develop
