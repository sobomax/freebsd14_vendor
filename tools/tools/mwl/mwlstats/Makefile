# $FreeBSD: 69382b8f820a349f9822bb52452593af0b00f4da $

PROG=	mwlstats
BINDIR=	/usr/local/bin
MAN=

SRCS=	main.c mwlstats.c
LIBADD=	bsdstat
CFLAGS+=-I${.CURDIR}/../../../../lib/libbsdstat/

.include <bsd.prog.mk>

CFLAGS+= -I.
