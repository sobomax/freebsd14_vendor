# $FreeBSD: ae93daabf0ac7ef7a236092adefc3145ec338dd1 $

.PATH: ${SRCTOP}/sys/dev/io
.PATH: ${SRCTOP}/sys/${MACHINE_CPUARCH}/${MACHINE_CPUARCH}

KMOD=	io
SRCS=	iodev.c io.c
SRCS+=	bus_if.h device_if.h

.include <bsd.kmod.mk>
