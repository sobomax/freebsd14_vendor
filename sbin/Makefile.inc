#	@(#)Makefile.inc	8.1 (Berkeley) 6/8/93
# $FreeBSD: 896c64c82c130b27b6cca9ac8a9052a6e2dbb932 $

.include <src.opts.mk>

BINDIR?=	/sbin
WARNS?=	6

.if ${MK_DYNAMICROOT} == "no"
NO_SHARED?=	YES
.endif
