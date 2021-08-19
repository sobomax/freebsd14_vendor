# $FreeBSD: be1ea3787fdb3a1b873ecc67025b35f3be91faeb $

.include <src.opts.mk>

PROG=	newkey
SRCS=	newkey.c generic.c update.c
.if ${MK_NIS} != "no"
CFLAGS+= -DYP
.endif
MAN=	newkey.8
LIBADD=	rpcsvc mp

.include <bsd.prog.mk>
