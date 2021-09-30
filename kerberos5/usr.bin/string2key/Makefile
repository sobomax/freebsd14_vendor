# $FreeBSD: 129d12cbcf0df48ff8a5c0366b85a7ae2252e21b $

PROG=	string2key
MAN=	string2key.8
CFLAGS+=	-I${KRB5DIR}/kdc \
		-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/krb5 \
		-I${KRB5DIR}/lib/roken \
		-I${KRB5DIR}/lib/windc \
		-I${SRCTOP}/contrib/com_err
LIBADD=	krb5 roken crypto vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kdc
