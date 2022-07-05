# $FreeBSD: cd7318f014624e97ab7c06b3bd54ca268a52921a $

PACKAGE=	kerberos

PROG=	kstash
MAN=	kstash.8
CFLAGS+=-I${KRB5DIR}/lib/asn1 -I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/roken \
	-I${KRB5DIR}/kdc -I${SRCTOP}/contrib/com_err ${LDAPCFLAGS}
LIBADD=	hdb krb5 crypto vers
DPADD=	${LDAPDPADD}
LDADD=	${LDAPLDADD}
LDFLAGS=${LDAPLDFLAGS}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kdc
