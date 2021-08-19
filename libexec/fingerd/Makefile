#	@(#)Makefile	8.1 (Berkeley) 6/4/93
# $FreeBSD: 09f91419051fc87de1996c527773d986f2895e16 $

.include <src.opts.mk>

PROG=	fingerd
LIBADD=	util
MAN=	fingerd.8

WARNS?=	2
WFORMAT=0

.if ${MK_BLACKLIST_SUPPORT} != "no"
CFLAGS+= -DUSE_BLACKLIST -I${SRCTOP}/contrib/blacklist/include
LIBADD+= blacklist
LDFLAGS+=-L${LIBBLACKLISTDIR}
.endif

.include <bsd.prog.mk>
