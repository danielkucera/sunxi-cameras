PWD         := $(shell pwd)
KVERSION    := $(shell uname -r)
KERNEL_DIR   = /lib/modules/$(KVERSION)/build

MODULE_NAME  = gc2035
obj-m       := device/$(MODULE_NAME).o

all:
	make -C $(KERNEL_DIR) M=$(PWD) modules
clean:
	make -C $(KERNEL_DIR) M=$(PWD) clean

