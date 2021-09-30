# $FreeBSD: 7622b8da956e6f92129f43141db395c0d61c03d9 $

PROG=	kinit
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	kafs5 krb5 heimntlm roken crypto vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
