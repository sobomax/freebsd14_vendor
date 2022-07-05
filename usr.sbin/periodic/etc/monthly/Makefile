# $FreeBSD: b4aaf6967891ff8c82f0c00700ebe39cad707810 $

.include <src.opts.mk>

PACKAGE=	periodic

CONFGROUPS=	CONFS

CONFS=	450.status-security \
	999.local

# NB: keep these sorted by MK_* knobs

.if ${MK_UTMPX} != "no"
CONFGROUPS+=	ACCT
ACCT+=		200.accounting
ACCTDIR=	/etc/periodic/monthly
ACCTMODE=	${BINMODE}
ACCTPACKAGE=	acct
.endif

.include <bsd.prog.mk>
