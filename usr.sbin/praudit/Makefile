#
# $FreeBSD: 4d0cf2742e56d42e7f6d5f42464e582ac3b14e76 $
#

.include <src.opts.mk>

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
