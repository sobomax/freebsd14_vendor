# $FreeBSD: 24a96d8354dab627466628e106591dece9c8a237 $

SYSDIR?=${SRCTOP}/sys

.PATH:	${SYSDIR}/dev/tsec

KMOD=	if_tsec
SRCS=	if_tsec.c if_tsec_fdt.c
SRCS+=	bus_if.h device_if.h miibus_if.h miidevs.h ofw_bus_if.h opt_platform.h

.include <bsd.kmod.mk>
