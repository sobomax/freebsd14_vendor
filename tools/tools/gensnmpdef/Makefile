# $FreeBSD: 470e1de2dc880122ca8c0151977a43e75721ce1e $

.PATH:	${SRCTOP}/contrib/bsnmp/gensnmpdef

PROG=	gensnmpdef

SRCS=	gensnmpdef.c

MAN=	gensnmpdef.1

LOCALBASE?=	/usr/local

BINDIR=	${LOCALBASE}/bin

MANDIR=	${LOCALBASE}/man/man

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

LDADD+=	-lsmi

WARNS?=	6

.include <bsd.prog.mk>
