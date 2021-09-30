# $FreeBSD: fd2b7b4d9ccb3210d8c540f75361a1ab3d354713 $

PROG?=		ldd
SRCS=		ldd.c
.if ${MACHINE_CPUARCH} == "i386"
SRCS+=		sods.c
.endif

.include <bsd.prog.mk>
