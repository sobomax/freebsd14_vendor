#	@(#)Makefile.inc	8.1 (Berkeley) 5/31/93
# $FreeBSD: 86141a1387f9a9b0f188a6e4764f272e734ec06d $

.include <src.opts.mk>

BINDIR?=	/bin
WARNS?=		6

.if ${MK_DYNAMICROOT} == "no"
NO_SHARED?=	YES
.endif
