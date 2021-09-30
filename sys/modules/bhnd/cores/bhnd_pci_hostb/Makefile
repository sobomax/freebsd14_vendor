# $FreeBSD: 03f20f61ae5236ce0c713c75ddc1360ad3591ca5 $

.PATH: ${SRCTOP}/sys/dev/bhnd/cores/pci
.PATH: ${SRCTOP}/sys/dev/bhnd/cores/pcie2

KMOD=	bhnd_pci_hostb
SRCS=	bhnd_pci_hostb.c bhnd_pcie2_hostb.c
SRCS+=	device_if.h bus_if.h pci_if.h \
	bhnd_bus_if.h bhnd_chipc_if.h

.include <bsd.kmod.mk>
