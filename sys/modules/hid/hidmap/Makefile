# $FreeBSD: e0c1c086e0987f721e590bc21ab3d187cd14ab37 $

.PATH: ${SRCTOP}/sys/dev/hid

KMOD=	hidmap
SRCS=	hidmap.c
SRCS+=	opt_hid.h
SRCS+=	bus_if.h device_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
