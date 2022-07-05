# $FreeBSD: c93abcae43f3bc4a332f8e1624b489743fee42aa $

.PATH:	${SRCTOP}/sys/dev/xz
.PATH:	${SRCTOP}/sys/contrib/xz-embedded/freebsd
.PATH:	${SRCTOP}/sys/contrib/xz-embedded/linux/lib/xz

KMOD=	xz
SRCS= \
	xz_crc32.c \
	xz_dec_bcj.c \
	xz_dec_lzma2.c \
	xz_dec_stream.c \
	xz_mod.c

CFLAGS+= \
	-I${SRCTOP}/sys/contrib/xz-embedded/freebsd \
	-I${SRCTOP}/sys/contrib/xz-embedded/linux/lib/xz \
	-I${SRCTOP}/sys/contrib/xz-embedded/linux/include/linux

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
