# $FreeBSD: 4a5267a42da3db20972fac517dd3b81fa4fe9792 $

.PATH: ${SRCTOP}/sys/dev/sound/macio

KMOD=	snd_ai2s
SRCS=	device_if.h bus_if.h ofw_bus_if.h
SRCS+=	channel_if.h feeder_if.h mixer_if.h
SRCS+=	onyx.c snapper.c tumbler.c aoa.c i2s.c

.include <bsd.kmod.mk>
