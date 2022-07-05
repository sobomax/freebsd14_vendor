# $FreeBSD: f7094a29d6b47f32518d00f30a6711b15d95514d $

.PATH:  ${SRCTOP}/sys/dev/ntb

KMOD    = ntb_transport
SRCS    = ntb_transport.c
SRCS += device_if.h bus_if.h ntb_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
