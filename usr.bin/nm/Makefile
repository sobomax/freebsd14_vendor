# $FreeBSD: b1b9555962e75b9d94c7b72a21359452ef130fd5 $

.include <src.opts.mk>

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain
NMDIR=		${ELFTCDIR}/nm

.PATH: ${NMDIR}

PROG=	nm

LIBADD=	dwarf elftc elf

.if ${MK_CASPER} != "no" && !defined(BOOTSTRAPPING) && !defined(NXB_TARGET)
LIBADD+=	casper
LIBADD+=	cap_fileargs
CFLAGS+=	-DWITH_CASPER
.endif

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
