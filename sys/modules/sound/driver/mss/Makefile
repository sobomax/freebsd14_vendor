# $FreeBSD: 4032bf3e004dd8e57ce3e7d0c523a6d522c50aa1 $

.PATH: ${SRCTOP}/sys/dev/sound/isa

KMOD=	snd_mss
SRCS=	device_if.h bus_if.h isa_if.h pci_if.h
SRCS+=	mss.c gusc.c

.include <bsd.kmod.mk>
