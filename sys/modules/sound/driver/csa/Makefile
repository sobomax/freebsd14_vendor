# $FreeBSD: b1a3f1fb9df42bc623bb73abe8c212108cda29d9 $

.PATH: ${SRCTOP}/sys/dev/sound/pci

KMOD=	snd_csa
SRCS=	device_if.h bus_if.h mpufoi_if.h pci_if.h
SRCS+=	csa.c csamidi.c csapcm.c

.include <bsd.kmod.mk>
