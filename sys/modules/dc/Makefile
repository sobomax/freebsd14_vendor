# $FreeBSD: 298246301070e49c86b5a69320b97283736c1eab $

.PATH: ${SRCTOP}/sys/dev/dc

KMOD=	if_dc
SRCS=	if_dc.c dcphy.c pnphy.c device_if.h bus_if.h pci_if.h
SRCS+=	miibus_if.h miidevs.h opt_platform.h

.include <bsd.kmod.mk>
