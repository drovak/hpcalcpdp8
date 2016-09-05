all: hpcalcpdp8.bin

hpcalcpdp8.bin: hpcalcpdp8.pal
	pal hpcalcpdp8.pal -d
