# $FreeBSD: c7ab67b386511746a09710b7fd34c56015315217 $

.PATH:	${SRCTOP}/sys/dev/pwm
KMOD=	pwm_backlight
SRCS=	pwm_backlight.c

SRCS+=	\
	backlight_if.h \
	bus_if.h \
	device_if.h \
	opt_platform.h \
	pwmbus_if.h \
	regnode_if.h \
	ofw_bus_if.h

.include <bsd.kmod.mk>
