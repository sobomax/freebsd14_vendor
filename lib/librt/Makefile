# $FreeBSD: 3c0973db1d70d2d6c1d06165e47973eabbcb7804 $

.include <src.opts.mk>

PACKAGE=lib${LIB}
LIB=rt
SHLIB_MAJOR= 1
CFLAGS+=-I${SRCTOP}/lib/libc/include -I${.CURDIR}
.ifndef NO_THREAD_STACK_UNWIND
CFLAGS+=-fexceptions
.endif
CFLAGS+=-Winline -Wall
LIBADD=	pthread

WARNS?=	2

SRCS+= aio.c mq.c sigev_thread.c timer.c

PRECIOUSLIB=

VERSION_DEF=${SRCTOP}/lib/libc/Versions.def
SYMBOL_MAPS=${.CURDIR}/Symbol.map

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.lib.mk>
