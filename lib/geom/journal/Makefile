# $FreeBSD: 3be15a13a81ec92e97d444824302510a2da06b2b $

PACKAGE=runtime
.PATH: ${.CURDIR:H:H}/misc

GEOM_CLASS=	journal
SRCS+=	geom_journal_ufs.c

LIBADD=	ufs md

CFLAGS+=-I${SRCTOP}/sys

.include <bsd.lib.mk>
