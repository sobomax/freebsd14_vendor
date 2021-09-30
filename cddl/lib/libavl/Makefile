# $FreeBSD: 2f7b9ad30856e75b2ada6ac89c1f53ada1617b94 $

.PATH: ${SRCTOP}/sys/contrib/openzfs/module/avl

PACKAGE=	runtime
LIB=	avl
SRCS=	avl.c
WARNS?=	3
CFLAGS+= -DIN_BASE
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/include
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libspl/include/
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libspl/include/os/freebsd
CFLAGS+= -I${SRCTOP}/sys
CFLAGS+= -include ${SRCTOP}/sys/contrib/openzfs/include/os/freebsd/spl/sys/ccompile.h
.include <bsd.lib.mk>
