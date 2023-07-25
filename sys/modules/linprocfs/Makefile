# $FreeBSD: 16f9f8c703be1e0d51d1415ad4cf10199f7e2e81 $

.PATH: ${SRCTOP}/sys/compat/linprocfs

KMOD=	linprocfs
SRCS=	vnode_if.h \
	device_if.h bus_if.h opt_inet.h \
	linprocfs.c

.if !defined(KERNBUILDDIR)
.warning Building Linuxulator outside of a kernel does not make sense
.endif

.include <bsd.kmod.mk>
