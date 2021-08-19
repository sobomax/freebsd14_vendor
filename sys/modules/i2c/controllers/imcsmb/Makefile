#$FreeBSD: 74a458ebf58eb844134a2ddf20e713d6fadcbb33 $

.PATH:		${SRCTOP}/sys/dev/imcsmb
KMOD		= imcsmb
SRCS		= device_if.h bus_if.h pci_if.h smbus_if.h \
		  imcsmb.c imcsmb_pci.c imcsmb_reg.h imcsmb_var.h

.include <bsd.kmod.mk>
