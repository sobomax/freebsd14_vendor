# $FreeBSD: d52876e3aa1836c43d21472a2c4acb0963c90352 $

PROG=	gnu
MAN=

WARNS?=	3
CFLAGS+= -L/usr/local/lib -I/usr/local/include
LDADD=	-liconv
DPADD=	/usr/local/lib/libiconv.a

.include <bsd.prog.mk>
