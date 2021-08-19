# $FreeBSD: bcca9b3533038df19aea59f59a77edcc0c792e1d $

DIALOG=	${SRCTOP}/contrib/dialog
PROG=   dialog

LIBADD=	dialog ncursesw m
CFLAGS+= -I${.CURDIR} -I${DIALOG}
.PATH:	${DIALOG}

WARNS?= 6

.include <bsd.prog.mk>
