# $FreeBSD: 49f14d7ba4abaa67a8b0b914a05015d3dc590660 $

.include <src.opts.mk>

PACKAGE=	nfs

PROG=	nfsdumpstate
MAN=	nfsdumpstate.8

.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
