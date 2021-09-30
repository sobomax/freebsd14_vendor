# $FreeBSD: fa7ac8725d146b3c0fbb00266dfe6e2959d2b336 $

.PATH: ${SRCTOP}/sys/compat/linprocfs

KMOD=	linprocfs
SRCS=	vnode_if.h \
	device_if.h bus_if.h \
	linprocfs.c

.if !defined(KERNBUILDDIR)
.warning Building Linuxulator outside of a kernel does not make sense
.endif

.include <bsd.kmod.mk>
