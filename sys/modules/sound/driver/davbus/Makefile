# $FreeBSD: 5ea77b3032fc6ef5e476b253055fb251ca78dded $

.PATH: ${SRCTOP}/sys/dev/sound/macio

KMOD=	snd_davbus
SRCS=	device_if.h bus_if.h ofw_bus_if.h
SRCS+=	channel_if.h feeder_if.h mixer_if.h
SRCS+=	aoa.c davbus.c

.include <bsd.kmod.mk>
