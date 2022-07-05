#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: f2592aa1ac338a092e2583bc525816b03bbf971f $

.include <src.opts.mk>

PACKAGE=	runtime

PROG=	id
LINKS=	${BINDIR}/id ${BINDIR}/groups
LINKS+=	${BINDIR}/id ${BINDIR}/whoami
MAN=	id.1 groups.1 whoami.1

.if ${MK_AUDIT} != "no"
CFLAGS+=	-DUSE_BSM_AUDIT
.endif

.include <bsd.prog.mk>
