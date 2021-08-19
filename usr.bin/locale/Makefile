# $FreeBSD: 48a5c5562b5d73627910da63062857eb2db57ee4 $

.include <src.opts.mk>

PROG=	locale
CFLAGS+= -I${SRCTOP}/lib/libc/locale
LIBADD+= sbuf

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
