#
# $FreeBSD: be6311e674f554e6874b20efa248fc7d5682e4d3 $
#

OPENBSMDIR=${SRCTOP}/contrib/openbsm
.PATH: ${OPENBSMDIR}/bin/praudit

CFLAGS+=	-I${OPENBSMDIR}

PROG=	praudit
MAN=	praudit.1

WARNS?=	3

LIBADD=	bsm

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
