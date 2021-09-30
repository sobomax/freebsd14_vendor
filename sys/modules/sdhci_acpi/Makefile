# $FreeBSD: 6b197a98c43af4c48a804d6d7f832df781fe16d3 $

.PATH: ${SRCTOP}/sys/dev/sdhci

KMOD=	sdhci_acpi
SRCS=	sdhci_acpi.c sdhci.h sdhci_if.h
SRCS+=	acpi_if.h device_if.h bus_if.h pci_if.h mmcbr_if.h
SRCS+=	opt_acpi.h opt_mmccam.h

.include <bsd.kmod.mk>
