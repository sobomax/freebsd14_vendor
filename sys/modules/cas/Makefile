# $FreeBSD: 92270d653f1f23aaba481bca1e1eac72a11f99cc $

.PATH: ${SRCTOP}/sys/dev/cas

KMOD=	if_cas
SRCS=	bus_if.h device_if.h if_cas.c miibus_if.h pci_if.h ${ofw_bus_if} opt_platform.h

.if ${MACHINE_CPUARCH} == "powerpc"
ofw_bus_if=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
