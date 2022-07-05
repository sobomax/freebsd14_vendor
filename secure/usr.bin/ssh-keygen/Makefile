# $FreeBSD: b53b645e857637570a86e2f4d3cde3ed661e6b98 $

.include <src.opts.mk>
.include "${SRCTOP}/secure/ssh.mk"

PROG=	ssh-keygen
# XXX ssh-sk-client.c in libssh maybe?
SRCS=	ssh-keygen.c sshsig.c ssh-sk-client.c
PACKAGE=	ssh

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
.endif

LIBADD+=	crypto

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
