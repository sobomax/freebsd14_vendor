# $FreeBSD: bba2b97954a9f6099d19fe3f98f3bbf23577118e $

.PATH:	${SRCTOP}/sys/dev/bhnd/siba

KMOD=	siba_bhndb
SRCS=	siba_bhndb.c

SRCS+=	bhnd_bus_if.h bhnd_erom_if.h
SRCS+=	bhndb_bus_if.h bhndb_if.h
SRCS+=	device_if.h bus_if.h

.include <bsd.kmod.mk>
