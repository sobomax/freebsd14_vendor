# $FreeBSD: 90111fb86bd5af4eb1e1318fca424563694918a4 $

.include <src.opts.mk>

PROG=	so_setfib
MAN=
WARNS?=	6

.if ${MK_INET} != "no"
CFLAGS+=	-DINET
.endif
.if ${MK_INET6} != "no"
CFLAGS+=	-DINET6
.endif

.include <bsd.prog.mk>
