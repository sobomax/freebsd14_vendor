# $FreeBSD: 81940f23691b061a9f6e7b725513b80754db8749 $
.PATH:	${SRCTOP}/sys/dev/bce
KMOD=	if_bce
SRCS=	opt_bce.h if_bce.c miibus_if.h miidevs.h device_if.h bus_if.h pci_if.h

#CFLAGS += -DBCE_DEBUG=0

.include <bsd.kmod.mk>
