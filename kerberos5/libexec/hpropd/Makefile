# $FreeBSD: 56a598f0831247c5f67d86d0764b4d4b71ff30a5 $

PROG=	hpropd
MAN=	hpropd.8
CFLAGS+=-I${KRB5DIR}/lib/roken -I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/asn1 \
	-I${KRB5DIR}/kdc -I${SRCTOP}/contrib/com_err ${LDAPCFLAGS}
LIBADD=	hdb krb5 roken vers
DPADD=	${LDAPDPADD}
LDADD=	${LDAPLDADD}
LDFLAGS=${LDAPLDFLAGS}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kdc
