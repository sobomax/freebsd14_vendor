# $FreeBSD: be7b21984eb5570bb3b9f646cd3e1dd9e188cf08 $

.PATH: ${SRCTOP}/sys/dev/bhnd/cores/pci
.PATH: ${SRCTOP}/sys/dev/bhnd/cores/pcie2

KMOD=	bhnd_pcib
SRCS=	bhnd_pcib.c bhnd_pcie2b.c
SRCS+=	device_if.h bus_if.h pci_if.h \
	bhnd_bus_if.h

.include <bsd.kmod.mk>
