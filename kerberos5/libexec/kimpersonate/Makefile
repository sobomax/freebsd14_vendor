# $FreeBSD: 3c94db6857d0e4a7720ccae2d69abdfb66d20368 $

PROG=	kimpersonate
MAN=	kimpersonate.8
CFLAGS+=	-I${KRB5DIR}/lib/hx509 \
		-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/roken \
		-I${KRB5DIR}/lib/sl -I.
LIBADD=	krb5 roken asn1 vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
