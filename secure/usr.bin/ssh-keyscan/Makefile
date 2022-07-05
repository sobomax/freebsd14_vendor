# $FreeBSD: 130e5f61ec641f49c355a91c85bec1978094b447 $

.include <src.opts.mk>
.include "${SRCTOP}/secure/ssh.mk"

PROG=	ssh-keyscan
SRCS=	ssh-keyscan.c
PACKAGE=	ssh

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
#DPADD+=	${LIBLDNS}
#LDADD+=	-lldns
.endif

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
