# $FreeBSD: 9d8269d861099ea5cc35b569dd65005ab0289766 $

.PATH: ${SRCTOP}/sys/dev/sdhci

KMOD=	sdhci
SRCS=	sdhci.c sdhci.h sdhci_if.c sdhci_if.h device_if.h bus_if.h mmcbr_if.h opt_mmccam.h opt_cam.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
