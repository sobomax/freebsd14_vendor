# $FreeBSD: 2d23932a62a5ccf30b46a6e9beb2c0b780f8e7cb $

.include <bsd.compiler.mk>

PROG=	wlanstats
BINDIR=	/usr/local/bin
MAN=
LIBADD=	bsdstat
CFLAGS+=-I${.CURDIR}/../../../../lib/libbsdstat/

SRCS=	wlanstats.c main.c

CFLAGS.clang+= -fbracket-depth=512

.include <bsd.prog.mk>
