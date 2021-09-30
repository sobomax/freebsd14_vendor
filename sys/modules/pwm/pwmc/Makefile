# $FreeBSD: 6e373e467a4a2607555ca569f86ee3ac87b68fc2 $

.PATH:	${SRCTOP}/sys/dev/pwm
KMOD=	pwmc
SRCS=	pwmc.c

# Generated files...
SRCS+=	\
	bus_if.h \
	device_if.h \
	opt_platform.h \
	pwmbus_if.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
