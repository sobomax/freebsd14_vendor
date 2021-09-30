# $FreeBSD: 3a2c49fed0db09648eb94d11421f3f2ca2c55634 $

PACKAGE=runtime
PROG=	newfs_msdos
MAN=	newfs_msdos.8
SRCS=	newfs_msdos.c mkfs_msdos.c

# XXX - this is verboten
.if ${MACHINE_CPUARCH} == "arm"
WARNS?= 3
.endif

.include <bsd.prog.mk>
