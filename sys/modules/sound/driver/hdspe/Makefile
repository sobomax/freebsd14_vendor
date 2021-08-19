# $FreeBSD: 9ee5abba1ca2959a4e4d7cd47ada86d6ed75e4b2 $

.PATH: ${SRCTOP}/sys/dev/sound/pci

KMOD=	snd_hdspe
SRCS=	device_if.h bus_if.h pci_if.h
SRCS+=	hdspe.c hdspe-pcm.c hdspe.h

.include <bsd.kmod.mk>
