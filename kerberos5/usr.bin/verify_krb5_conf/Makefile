# $FreeBSD: 372870c1ecc95b21663e6daed1532726540f099c $

PROG=	verify_krb5_conf
MAN=	verify_krb5_conf.8
CFLAGS+=-I${KRB5DIR}/lib/asn1 -I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/roken \
	-I${SRCTOP}/contrib/com_err
LIBADD=	krb5 roken vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/lib/krb5
