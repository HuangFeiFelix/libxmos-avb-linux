#NOTE: IMPROVE THIS MAKEFILE TO BE LIKE THE OTHERS (CONSCIOUS DELETION)

all:
#	make -C module_avb
	make -C module_avb_1722_1
#	ar xs module_avb/libmodule_avb.a 
	ar xs module_avb_1722_1/libmodule_avb_1722_1.a
	ar rcs libxmos-avb-linux.a *.o
