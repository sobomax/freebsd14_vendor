# $FreeBSD: 5eebe9749ccc2ae71a8ba08b62ddddefb3c7e3b0 $

.PATH:	${SRCTOP}/sys/dev/ubsec
KMOD	= ubsec
SRCS	= ubsec.c opt_ubsec.h
SRCS   += device_if.h bus_if.h pci_if.h
SRCS   += opt_bus.h cryptodev_if.h

.if !defined(KERNBUILDDIR)
opt_ubsec.h:
	echo "#define UBSEC_DEBUG 1" > ${.TARGET}
.endif

.include <bsd.kmod.mk>
