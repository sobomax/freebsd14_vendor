# $DragonFly: src/sys/dev/netif/et/Makefile,v 1.1 2007/10/12 14:12:42 sephe Exp $
# $FreeBSD: d0a15274fe0073b6ac51baa7e5096ee251e2f155 $

.PATH: ${SRCTOP}/sys/dev/et

KMOD=	if_et
SRCS=	if_et.c
SRCS+=	bus_if.h pci_if.h device_if.h miibus_if.h opt_platform.h

.include <bsd.kmod.mk>
