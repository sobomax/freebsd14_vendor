# $FreeBSD: d6b5616dfc0acf09145f9d5ac8501c8f4ea034de $

.include <src.opts.mk>

PROG=	ssh-keygen
SRCS=	ssh-keygen.c
PACKAGE=	ssh
CFLAGS+=-I${SSHDIR} -include ssh_namespace.h
SRCS+=	ssh_namespace.h

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
.endif

LIBADD+=	crypto

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
