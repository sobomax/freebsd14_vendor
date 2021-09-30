# $FreeBSD: d12cf0245df299e21fefeffcd6e2385418f7fea0 $

PACKAGE=runtime
PROG=	newfs_msdos
MAN=	newfs_msdos.8
SRCS=	newfs_msdos.c mkfs_msdos.c

# XXX - this is verboten
.if ${MACHINE_CPUARCH} == "arm"
WARNS?= 3
.endif
CSTD=	c11

.include <bsd.prog.mk>
