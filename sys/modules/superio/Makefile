# $FreeBSD: 064c3986356644d0e11af5800143fa1251622984 $

.PATH: ${.CURDIR}/../../dev/superio

KMOD=	superio
SRCS=	superio.c
SRCS+=	device_if.h bus_if.h isa_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
