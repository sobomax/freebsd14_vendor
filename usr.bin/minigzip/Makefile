# $FreeBSD: 9a0098eed5476ffb4dc65ec4d52bd7f39c986f7c $

SRCDIR=	${SRCTOP}/sys/contrib/zlib/test
.PATH:	${SRCDIR}

PROG=	minigzip

WARNS?=	5
CFLAGS+=-DUSE_MMAP
LIBADD=	z

.include <bsd.prog.mk>
