# $FreeBSD: 2180fe8c366af4607676caef00cd887bcfff5e80 $

.PATH: ${SRCTOP}/sys/dev/sound/pci

KMOD=	snd_emu10k1
SRCS=	device_if.h bus_if.h pci_if.h
SRCS+= mpufoi_if.h
SRCS+=	emu10k1.c

.include <bsd.kmod.mk>
