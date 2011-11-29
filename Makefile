MODULENAME = kparam
obj-m := $(MODULENAME).o
KERNELDIR=/workspace/trident/cowork_trident/kernel/linux-2.6.34
PWD := $(shell pwd)
default:
	make clean
	$(MAKE) -C $(KERNELDIR) M=$(PWD)  modules
.PHONY: clean
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.symvers modules.order




