# $FreeBSD: 058fbbc521b1afe29ee2d4cc416046d15b56b017 $

.PATH: ${SRCTOP}/sys/compat/linsysfs

KMOD=	linsysfs
SRCS=	vnode_if.h \
	device_if.h bus_if.h  pci_if.h \
	linsysfs.c

.if !defined(KERNBUILDDIR)
.warning Building Linuxulator outside of a kernel does not make sense
.endif

.include <bsd.kmod.mk>
