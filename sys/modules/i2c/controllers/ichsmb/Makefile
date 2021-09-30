#$FreeBSD: e65f1a938d02b039adc813c6765242c1fb6010fc $

.PATH:		${SRCTOP}/sys/dev/ichsmb
KMOD		= ichsmb
SRCS		= device_if.h bus_if.h iicbb_if.h pci_if.h smbus_if.h \
		  ichsmb.c ichsmb_pci.c ichsmb_reg.h ichsmb_var.h

.include <bsd.kmod.mk>
