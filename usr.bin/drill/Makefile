# $FreeBSD: 8cf0e682e36f0dde1158b01acb90e7a6c94ad354 $

# Vendor sources and generated files
LDNSDIR= ${SRCTOP}/contrib/ldns

.PATH: ${LDNSDIR}/drill

PROG=	drill
SRCS=	drill.c drill_util.c error.c root.c work.c \
	chasetrace.c dnssec.c securetrace.c
CFLAGS+= -I${LDNSDIR}
NO_WERROR= true
MAN=	drill.1

LIBADD=	ldns crypto

.include <bsd.prog.mk>
