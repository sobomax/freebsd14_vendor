# $FreeBSD: releng/12.2/sys/modules/safexcel/Makefile 363180 2020-07-14 14:09:29Z markj $
.PATH: ${SRCTOP}/sys/dev/safexcel

KMOD= safexcel
SRCS= safexcel.c

SRCS+=	bus_if.h cryptodev_if.h device_if.h ofw_bus_if.h

.include <bsd.kmod.mk>
