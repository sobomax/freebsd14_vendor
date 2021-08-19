# $FreeBSD: 6173fc59b8b68d7927784008df176c46f3f12d0b $

.PATH: ${SRCTOP}/sys/dev/malo

KMOD    = if_malo
SRCS    = if_malo.c if_malohal.c if_malo_pci.c
SRCS+=	device_if.h bus_if.h pci_if.h opt_malo.h

opt_malo.h:
	echo '#define MALO_DEBUG 1'> $@

.include <bsd.kmod.mk>
