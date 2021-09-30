# $FreeBSD: e3d7526838a13f24417fe607406a2c03ea5b487b $

.include <src.opts.mk>

PROG=	tzsetup
MAN=	tzsetup.8

CFLAGS+= -I.

.if ${MK_DIALOG} != no && !defined(BOOTSTRAPPING)
WARNS?=	3
CFLAGS+=	-I${SRCTOP}/contrib/dialog -DHAVE_DIALOG
LIBADD=	dialog ncursesw
.endif

.include <bsd.prog.mk>
