# $FreeBSD: 332f01eef9ccecd446c29041fa99e545c33e75fc $

.PATH: ${SRCTOP}/sys/dev/sound/pci

KMOD=	snd_maestro3
SRCS=	device_if.h bus_if.h pci_if.h
SRCS+=	maestro3.c

CFLAGS+= -Wall -DM3_DEBUG_LEVEL=-1

.include <bsd.kmod.mk>
