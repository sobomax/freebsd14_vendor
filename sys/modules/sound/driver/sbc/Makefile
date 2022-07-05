# $FreeBSD: bde54a077696c457f67a5891dbf1749208afebc9 $

.PATH: ${SRCTOP}/sys/dev/sound/isa

KMOD=	snd_sbc
SRCS=	device_if.h bus_if.h isa_if.h pci_if.h
SRCS+=	sbc.c

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
