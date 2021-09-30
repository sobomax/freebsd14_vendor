#
# $FreeBSD: d7f23285e69b3fa4163d0a6f397f788c4d80a246 $
#

OPENBSMDIR=${SRCTOP}/contrib/openbsm
.PATH: ${OPENBSMDIR}/bin/auditreduce

CFLAGS+=	-I${OPENBSMDIR}

PROG=	auditreduce
MAN=	auditreduce.1

LIBADD=	bsm

WARNS?=	3

.include <bsd.prog.mk>
