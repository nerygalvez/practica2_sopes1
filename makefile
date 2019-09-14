obj-m += memo_201403525.c

all: paso1

paso1:
	make -C /lib/modules/$(shell uname -r)/build M=${PWD} modules

paso2:
	@echo "Hola Nery"
	@echo /lib/modules/$(shell uname -r)/build M=${PWD} modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=${PWD} clean
