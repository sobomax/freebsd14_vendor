# $FreeBSD: 66dd94a71f4a10b4cb739133a22ceb0d3c32f841 $

.include <src.opts.mk>

PROG=	nfsdumpstate
MAN=	nfsdumpstate.8

.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
