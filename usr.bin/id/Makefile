#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 07cabd05837f1e371770907a92836c10a53ccaba $

.include <src.opts.mk>

PROG=	id
LINKS=	${BINDIR}/id ${BINDIR}/groups
LINKS+=	${BINDIR}/id ${BINDIR}/whoami
MAN=	id.1 groups.1 whoami.1

.if ${MK_AUDIT} != "no"
CFLAGS+=	-DUSE_BSM_AUDIT
.endif

.include <bsd.prog.mk>
