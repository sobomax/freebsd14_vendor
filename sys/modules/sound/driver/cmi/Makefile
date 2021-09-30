# $FreeBSD: 4c7af371ce587e53ea97d0ff1a1cb79281afd46b $

.PATH: ${SRCTOP}/sys/dev/sound/pci

KMOD=	snd_cmi
SRCS=	device_if.h bus_if.h pci_if.h
SRCS+= mpufoi_if.h
SRCS+=	cmi.c

.include <bsd.kmod.mk>
