# $FreeBSD: 34eddd9206d89b016d4d8d983f386811f3c7d6b1 $

W00T=	../libw00t
# NB: we get crc32 from -lz
DPADD=	${W00T}/libw00t.a
LDFLAGS= -L${W00T}
LDADD=	-lw00t
LIBADD+= crypto z

BINDIR=	/usr/local/bin
CFLAGS=	-g -I${W00T}

MAN=
