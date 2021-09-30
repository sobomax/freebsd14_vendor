# $FreeBSD: 9cd82717061371d266774bcb8b825495b81669d7 $

.PATH: ${SRCTOP}/sys/dev/vmd

KMOD=	vmd

SRCS=	\
	vmd_bus.c	\
	vmd.c		\
	bus_if.h	\
	device_if.h	\
	pci_if.h 	\
	pcib_if.h	\
	opt_global.h	\

CFLAGS+=        -include opt_global.h

opt_global.h:
	echo "#define NEW_PCIB 1"	>> ${.TARGET}

.include <bsd.kmod.mk>
