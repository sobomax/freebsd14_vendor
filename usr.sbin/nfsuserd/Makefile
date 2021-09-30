# $FreeBSD: aef51aa4c54dd32dbb30b175803c23c69ab2c59e $

.include <src.opts.mk>

PROG=	nfsuserd
MAN=	nfsuserd.8
WARNS?=	3

.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
