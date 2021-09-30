# $FreeBSD: 82df3adbb6da71873e5ad7bc89dcfc719d124341 $

PROG=	kfd
MAN=	kfd.8
CFLAGS+=	-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/roken
LIBADD=	krb5 roken vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/appl/kf
