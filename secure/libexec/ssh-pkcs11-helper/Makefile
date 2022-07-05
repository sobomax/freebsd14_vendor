# $FreeBSD: c4ae4f50319766f827bcb2c0c1531ea5a00fa341 $

.include <src.opts.mk>
.include "${SRCTOP}/secure/ssh.mk"

PROG=	ssh-pkcs11-helper
SRCS=	ssh-pkcs11.c ssh-pkcs11-helper.c
MAN=	ssh-pkcs11-helper.8

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
#DPADD+=	${LIBLDNS}
#LDADD+=	-lldns
.endif

LIBADD+=	crypto

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
