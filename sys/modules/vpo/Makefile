# $FreeBSD: afb5eb163c7be9445949aca655387ff6b7eed4f4 $

.PATH: ${SRCTOP}/sys/dev/ppbus

KMOD=	vpo
SRCS=	bus_if.h device_if.h ppbus_if.h \
	opt_cam.h opt_scsi.h opt_vpo.h \
	immio.c vpo.c vpoio.c

.include <bsd.kmod.mk>
