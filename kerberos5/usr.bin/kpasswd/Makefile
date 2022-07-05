# $FreeBSD: 2f1102315ab7839d4d439a8ea7ff1d0e87b962e2 $

PACKAGE=	kerberos

PROG=	kpasswd
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	hdb krb5 roken vers crypto
LDFLAGS=${LDAPLDFLAGS}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kpasswd
