# $FreeBSD: 840f668d23e661590f9830574bbc495163a92b05 $

.PATH:	${SRCTOP}/sys/dev/hifn
KMOD	= hifn
SRCS	= hifn7751.c opt_hifn.h
SRCS   += device_if.h bus_if.h pci_if.h
SRCS   += opt_bus.h cryptodev_if.h

.if !defined(KERNBUILDDIR)
opt_hifn.h:
	echo "#define HIFN_DEBUG 1" > ${.TARGET}
.endif

.include <bsd.kmod.mk>
