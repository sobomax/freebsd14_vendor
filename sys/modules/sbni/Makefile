# $FreeBSD: 270b592447ecd8aecf8fdc82ab91f2bee5a74787 $

.PATH: ${SRCTOP}/sys/dev/sbni

KMOD=	if_sbni
SRCS=	if_sbni.c if_sbni_isa.c if_sbni_pci.c

SRCS+=	bus_if.h device_if.h isa_if.h pci_if.h

.include <bsd.kmod.mk>
