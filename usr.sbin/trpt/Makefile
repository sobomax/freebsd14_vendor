#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 33a3d1f81a7f6b8700b2eb743ae619ea59a99539 $

.include <src.opts.mk>

PROG=	trpt
MAN=	trpt.8
BINGRP=	kmem
BINMODE= 2555

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>

# Several included system headers tickle this warning in ways that are
# difficult to work around in this program.
CFLAGS+= -Wno-missing-variable-declarations
