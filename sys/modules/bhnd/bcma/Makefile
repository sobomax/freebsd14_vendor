# $FreeBSD: 08a651d8477f820f4fe6e3531a8d019ddd770911 $

.PATH:	${SRCTOP}/sys/dev/bhnd/bcma

KMOD=	bcma
SRCS=	bcma.c bcma_subr.c bcma_erom.c

SRCS+=	device_if.h bus_if.h
SRCS+=	bhnd_bus_if.h bhnd_erom_if.h bhnd_pmu_if.h

.include <bsd.kmod.mk>
