# $FreeBSD: 72acf1c2d75ef2be28e664a6e0adb07fe767926b $

.include <src.opts.mk>
.include "${SRCTOP}/secure/ssh.mk"

PROG=	ssh-keysign
SRCS=	ssh-keysign.c readconf.c uidswap.c
MAN=	ssh-keysign.8
BINMODE=4555

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
#DPADD+=	${LIBLDNS}
#LDADD+=	-lldns
.endif

LIBADD+=	crypto

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
