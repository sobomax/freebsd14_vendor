# $FreeBSD: 0cd516cc8bc0dcc6f5f51709a8ac707f1e275ca3 $

.PATH: ${SRCTOP}/sys/dev/sound/sbus

KMOD=	snd_audiocs
SRCS=	device_if.h bus_if.h ofw_bus_if.h
SRCS+=	channel_if.h feeder_if.h mixer_if.h
SRCS+=	cs4231.c

.include <bsd.kmod.mk>
