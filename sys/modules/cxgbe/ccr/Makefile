# $FreeBSD: 73d34762719da7941cd1a7147482450dbdba7e33 $

CXGBE=	${SRCTOP}/sys/dev/cxgbe
.PATH: ${CXGBE}/crypto

KMOD=	ccr

SRCS=	t4_crypto.c
SRCS+=	bus_if.h
SRCS+=	device_if.h
SRCS+=	cryptodev_if.h
SRCS+=	pci_if.h

CFLAGS+= -I${CXGBE}

MFILES=	kern/bus_if.m kern/device_if.m opencrypto/cryptodev_if.m \
	dev/pci/pci_if.m

.include <bsd.kmod.mk>
