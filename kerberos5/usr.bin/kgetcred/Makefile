# $FreeBSD: 1451154f9cf8a87745bd4674be8d880f362f8306 $

PROG=	kgetcred
CFLAGS+=	-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/roken
LIBADD=	krb5 roken asn1 vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
