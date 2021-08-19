# $FreeBSD: 7085927715dba11663cc489af5dc9edae73dfddf $

.PATH: ${SRCTOP}/sys/dev/ahci

KMOD=	ahci
SRCS=	ahci.c ahci_pci.c ahciem.c ahci.h device_if.h bus_if.h pci_if.h opt_cam.h

.if ${MACHINE_CPUARCH} == "aarch64"
SRCS+=	ahci_generic.c acpi_if.h ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
