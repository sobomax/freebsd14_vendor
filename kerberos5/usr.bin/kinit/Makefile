# $FreeBSD: 12db5bfde0443beb779f0bbc35d94c770825e9a2 $

PACKAGE=	kerberos

PROG=	kinit
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	kafs5 krb5 heimntlm roken crypto vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
