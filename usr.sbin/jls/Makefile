# $FreeBSD: 34a5023516cbb2e47925118d2992b8f1cd298d54 $

.include <src.opts.mk>

PROG=	jls
MAN=	jls.8
LIBADD=	jail xo

PACKAGE=jail

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

.include <bsd.prog.mk>
