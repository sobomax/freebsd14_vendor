# $FreeBSD: ade1e4237ff57c0363cc8d437bafea3f5bade6a6 $

.include <src.opts.mk>

PROG=	ssh-keyscan
SRCS=	ssh-keyscan.c
PACKAGE=	ssh
CFLAGS+=-I${SSHDIR} -include ssh_namespace.h
SRCS+=	ssh_namespace.h

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
#DPADD+=	${LIBLDNS}
#LDADD+=	-lldns
.endif

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
