# $FreeBSD: 3287bcf3ebd1ce666e5a3a9c2d432b7b8111bbe4 $

PROG=	lzmainfo

XZDIR=	${SRCTOP}/contrib/xz/src
LZMALIBDIR=	${SRCTOP}/lib/liblzma

.PATH: ${XZDIR}/lzmainfo
SRCS+=	lzmainfo.c

.PATH: ${XZDIR}/common
SRCS+=	tuklib_progname.c \
	tuklib_exit.c

CFLAGS+=	-DHAVE_CONFIG_H \
		-I${LZMALIBDIR} \
		-I${XZDIR}/common

LIBADD=	lzma

.include <bsd.prog.mk>
