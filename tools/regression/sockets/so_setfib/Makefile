# $FreeBSD: eadb3efb1c361d73e2ef2d32deb74e50a1f29872 $

.include <src.opts.mk>

PROG=	so_setfib
MAN=

.if ${MK_INET} != "no"
CFLAGS+=	-DINET
.endif
.if ${MK_INET6} != "no"
CFLAGS+=	-DINET6
.endif

.include <bsd.prog.mk>
