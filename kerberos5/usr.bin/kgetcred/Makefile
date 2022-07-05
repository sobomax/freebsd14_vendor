# $FreeBSD: 9e4ae650a8a592610a3e0f572594ad110ba217c1 $

PACKAGE=	kerberos

PROG=	kgetcred
CFLAGS+=	-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/roken
LIBADD=	krb5 roken asn1 vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
