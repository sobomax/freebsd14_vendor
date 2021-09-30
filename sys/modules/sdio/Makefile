# $FreeBSD: 4ee0e2d5223b6bc6bcf6ec2370b20a213c0fbf87 $

.PATH: ${.CURDIR}/../../dev/sdio

KMOD=	sdio
SRCS=	sdiob.c sdio_subr.c
SRCS+=	sdio_if.c
SRCS+=	device_if.h bus_if.h sdio_if.h opt_cam.h

.include <bsd.kmod.mk>
