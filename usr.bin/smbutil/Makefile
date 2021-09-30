# $FreeBSD: 7af710ac798df4c9c6db091ae9b43bf09e31f48d $

PROG=	smbutil
SRCS=	smbutil.c dumptree.c login.c lookup.c view.c print.c

LIBADD=	smb

CONTRIBDIR=	${SRCTOP}/contrib/smbfs
CFLAGS+=	-I${CONTRIBDIR}/include

WARNS?=	0

.PATH:	${CONTRIBDIR}/smbutil

.include <bsd.prog.mk>
