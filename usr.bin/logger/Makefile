#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: cbdd0b433b2bf2fe244e5805af6fd351817f15e5 $

.include <src.opts.mk>

PROG=	logger

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
