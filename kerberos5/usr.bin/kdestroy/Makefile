# $FreeBSD: c192d33a3634c8ff139853473ed81027cf1f4e4f $

PACKAGE=	kerberos

PROG=	kdestroy
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	kafs5 krb5 roken vers
MAN=	kdestroy.1

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
