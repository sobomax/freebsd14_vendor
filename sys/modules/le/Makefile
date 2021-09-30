# $FreeBSD: b77a2e69f1610196493d3d01c5f61ead118014bb $

.PATH: ${SRCTOP}/sys/dev/le

KMOD=	if_le
SRCS=	am7990.c am79900.c ${if_le_isa} if_le_pci.c lance.c
SRCS+=	bus_if.h device_if.h ${isa_if} pci_if.h

.if ${MACHINE_CPUARCH} == "i386"
if_le_isa=	if_le_isa.c
isa_if=		isa_if.h
.endif

.include <bsd.kmod.mk>
