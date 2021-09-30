# $FreeBSD: 5bc9b77140acf6ecac3501cbcaf365113cc435b8 $

SHLIB_NAME=	bus.so
SRCS=		lang.c

CFLAGS+= -I${.CURDIR}/.. -I/usr/local/include/python2.7
LDFLAGS+= -L/usr/local/lib -lpython2.7

.include <bsd.lib.mk>
