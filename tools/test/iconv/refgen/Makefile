# $FreeBSD: 6ac215101de37d42020da2e50734d28b92648924 $

.PATH: ${.CURDIR}/../tablegen

PROG=	refgen
MAN=
SRCS=	tablegen.c

WARNS?=	3
CFLAGS+= -L/usr/local/lib -I/usr/local/include
LDADD=	-liconv
DPADD=  /usr/local/lib/libiconv.a

.include <bsd.prog.mk>
