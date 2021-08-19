# $FreeBSD: 39f372b2d88865a0cb4d703693b36f9f983adb32 $

MAN=
.include <src.opts.mk>

.include "../Makefile.inc"
.include "../Makefile.fe"

.PATH: ${GCCDIR}/cp

PROG=	g++
SRCS+=	g++spec.c

DPADD=	${LIBCPP} ${LIBIBERTY}
LDADD=	${LIBCPP} ${LIBIBERTY}

.if ${MK_CLANG_IS_CC} == "no"
LINKS=	${BINDIR}/g++ ${BINDIR}/c++
LINKS+=	${BINDIR}/g++ ${BINDIR}/CC
.endif

.include <bsd.prog.mk>
