# $FreeBSD: ebca6fec5418874a1be3e69a770e8f18316f1f04 $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_mmc
SRCS=	aw_mmc.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	mmc_pwrseq_if.h \
	ofw_bus_if.h

.include <bsd.kmod.mk>
