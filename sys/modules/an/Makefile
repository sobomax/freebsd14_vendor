# $FreeBSD: 41c7b2fb871f11aeab14650e69bc4644cdc973f3 $

.PATH: ${SRCTOP}/sys/dev/an

KMOD=	if_an
SRCS=	if_an.c if_an_pccard.c if_an_pci.c if_an_isa.c
SRCS+=	opt_inet.h device_if.h bus_if.h pci_if.h isa_if.h card_if.h
SRCS+=	pccarddevs.h

.include <bsd.kmod.mk>
