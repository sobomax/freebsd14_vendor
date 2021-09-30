# $FreeBSD: a0c613a37c9fd610f5f9f007a3cfe8abfc206932 $

.PATH: ${SRCTOP}/sys/dev/an

KMOD=	if_an
SRCS=	if_an.c if_an_pci.c if_an_isa.c
SRCS+=	opt_inet.h device_if.h bus_if.h pci_if.h isa_if.h

.include <bsd.kmod.mk>
