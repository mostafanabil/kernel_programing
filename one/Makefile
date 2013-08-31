obj-m += hello.o

KDIR = /usr/src/linux-headers-3.5.0-28-generic


all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order
