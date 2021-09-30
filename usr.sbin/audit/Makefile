#
# $FreeBSD: 4fa6856e8cabfe0673e5a877311cfeb15c222bae $
#

OPENBSMDIR=${SRCTOP}/contrib/openbsm
.PATH: ${OPENBSMDIR}/bin/audit

CFLAGS+=	-I${OPENBSMDIR}

PROG=	audit
MAN=	audit.8

LIBADD=	bsm

WARNS?=	5

.include <bsd.prog.mk>
