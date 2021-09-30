# $FreeBSD: 7cd9a8fa02f5f5d82d7302764aacf44a90d75553 $

SUBDIR=		capi
.if ${MACHINE_CPUARCH} == "amd64" || ${MACHINE_CPUARCH} == "i386"
SUBDIR+=	padlock
.endif
SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
