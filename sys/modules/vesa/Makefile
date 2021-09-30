# $FreeBSD: 610226f4e02c8318088c236bb5ec4faf58038970 $

KMOD=	vesa
SRCS=	opt_vga.h opt_vesa.h
SRCS+=	bus_if.h device_if.h pci_if.h

.PATH:	${SRCTOP}/sys/dev/fb
SRCS+=	vesa.c

.PATH:	${SRCTOP}/sys/dev/syscons
SRCS+=	scvesactl.c

.include <bsd.kmod.mk>
