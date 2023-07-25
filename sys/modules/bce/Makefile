# $FreeBSD: 5998c2864180e89b05c793f73b1edef101d5e91a $
.PATH:	${SRCTOP}/sys/dev/bce
KMOD=	if_bce
SRCS=	opt_platform.h opt_bce.h if_bce.c miibus_if.h miidevs.h device_if.h bus_if.h pci_if.h

#CFLAGS += -DBCE_DEBUG=0

.include <bsd.kmod.mk>
