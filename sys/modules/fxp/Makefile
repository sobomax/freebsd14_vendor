# $FreeBSD: 6a47028f8822b9c4f7ba83df97da8241525af605 $

.PATH: ${SRCTOP}/sys/dev/fxp

KMOD=	if_fxp
SRCS=	device_if.h bus_if.h if_fxp.c inphy.c miibus_if.h miidevs.h pci_if.h

.include <bsd.kmod.mk>

CWARNFLAGS+=	${NO_WARRAY_BOUNDS}
