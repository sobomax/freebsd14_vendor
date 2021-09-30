#	@(#)Makefile.inc	8.1 (Berkeley) 6/8/93
# $FreeBSD: 401e2a8e349120c85f9b1dd66de277976b08320f $

.include <src.opts.mk>

BINDIR?=	/sbin

.if ${MK_DYNAMICROOT} == "no"
NO_SHARED?=	YES
.endif
