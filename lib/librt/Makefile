# $FreeBSD: 00ae29bab26b59a695b36cb573ab0514c2cf1687 $

.include <src.opts.mk>

PACKAGE=clibs
LIB=rt
SHLIB_MAJOR= 1
CFLAGS+=-I${SRCTOP}/lib/libc/include -I${.CURDIR}
.ifndef NO_THREAD_STACK_UNWIND
CFLAGS+=-fexceptions
.endif
CFLAGS+=-Wall
LIBADD=	pthread

WARNS?=	2

SRCS+= aio.c mq.c sigev_thread.c timer.c

PRECIOUSLIB=

VERSION_DEF=${SRCTOP}/lib/libc/Versions.def
SYMBOL_MAPS=${.CURDIR}/Symbol.map

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.lib.mk>
