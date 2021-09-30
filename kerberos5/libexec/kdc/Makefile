# $FreeBSD: 338a508de20b8cf512aeec182dc0ec3f5887e52c $

PROG=	kdc
MAN=	kdc.8

SRCS=	config.c \
	connect.c \
	announce.c \
	main.c

CFLAGS+=-I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/asn1 -I${KRB5DIR}/lib/roken \
	-I${KRB5DIR}/kdc -I${SRCTOP}/contrib/com_err ${LDAPCFLAGS}
LIBADD=	kdc hdb krb5 roken crypt vers
LDFLAGS=${LDAPLDFLAGS}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kdc
