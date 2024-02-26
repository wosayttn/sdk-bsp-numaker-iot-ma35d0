py -3 nuwriter.py -a ddrimg\MA35D03F864C.bin
IF %ERRORLEVEL% EQU 0 (
    py -3 nuwriter.py -r spinor 0x00840000 0x1000 output.bin
)
