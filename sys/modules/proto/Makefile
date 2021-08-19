# $FreeBSD: 331c2c6835d2c28dcd08efab9a9b1abaca65950a $

.PATH: ${SRCTOP}/sys/dev/proto

KMOD=	proto
SRCS=	\
	proto_bus_isa.c \
	proto_bus_pci.c \
	proto_busdma.c \
	proto_core.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	isa_if.h \
	pci_if.h

.include <bsd.kmod.mk>
