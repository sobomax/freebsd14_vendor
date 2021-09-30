# $FreeBSD: 71496f77483007f17785449aadc6d637afd15c8a $

DIALOG=	${SRCTOP}/contrib/dialog
PROG=   dialog

LIBADD=	dialog ncursesw m
CFLAGS+= -I${.CURDIR} -I${DIALOG}
.PATH:	${DIALOG}

.include <bsd.prog.mk>
