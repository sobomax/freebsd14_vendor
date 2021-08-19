# $FreeBSD: ed31b78f2d31e891e1eaddfbae2c1e859aff1cc0 $

PROG=	mkuzip
MAN=	mkuzip.8
SRCS=	mkuzip.c mkuz_blockcache.c mkuz_lzma.c mkuz_zlib.c mkuz_conveyor.c \
	    mkuz_blk.c mkuz_fqueue.c mkuz_time.c mkuz_insize.c

#CFLAGS+=	-DMKUZ_DEBUG

LIBADD=	z md lzma pthread

.include <bsd.prog.mk>
