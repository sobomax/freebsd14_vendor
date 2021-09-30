# $FreeBSD: 79d1fd5c171ff1edff3e4f1bf8974f266699416f $

.PATH: ${SRCTOP}/sys/dev/sdhci

KMOD=	sdhci_pci
SRCS=	sdhci_pci.c sdhci.h sdhci_if.h device_if.h bus_if.h pci_if.h mmcbr_if.h
SRCS+=	opt_mmccam.h

.include <bsd.kmod.mk>
