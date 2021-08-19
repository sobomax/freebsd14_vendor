# $FreeBSD: 75f39419bfd27636c5e2b1899ad7b6c767eae9a8 $

.include <src.opts.mk>

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain
SRCDIR=		${ELFTCDIR}/cxxfilt

.PATH: ${SRCDIR}

PROG=	c++filt
SRCS=	cxxfilt.c

LIBADD=	elftc

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
