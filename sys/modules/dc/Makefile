# $FreeBSD: c692532a9c018347e43953536e8dcd3c5627f28e $

.PATH: ${SRCTOP}/sys/dev/dc

KMOD=	if_dc
SRCS=	if_dc.c dcphy.c pnphy.c device_if.h bus_if.h pci_if.h
SRCS+=	miibus_if.h miidevs.h

.include <bsd.kmod.mk>
