#	@(#)Makefile.inc	8.1 (Berkeley) 5/31/93
# $FreeBSD: 637d54f2a4ac9a47e20b36df1294b689fff85000 $

.include <src.opts.mk>

BINDIR?=	/bin

.if ${MK_DYNAMICROOT} == "no"
NO_SHARED?=	YES
.endif
