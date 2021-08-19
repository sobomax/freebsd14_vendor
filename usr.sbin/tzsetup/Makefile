# $FreeBSD: 1c8c2e5462ceb80964a978ec30555e27c201ed11 $

.include <src.opts.mk>

PROG=	tzsetup
MAN=	tzsetup.8

CFLAGS+= -I.

.if ${MK_DIALOG} != no
WARNS?=	3
CFLAGS+=	-I${SRCTOP}/contrib/dialog -DHAVE_DIALOG
LIBADD=	dialog ncursesw
.endif

.include <bsd.prog.mk>
