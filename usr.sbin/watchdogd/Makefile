# $FreeBSD: bce983f6a92cb13c9839c59e5b4240af55cb4801 $

PROG=	watchdogd
LINKS=	${BINDIR}/watchdogd ${BINDIR}/watchdog
MAN=	watchdogd.8 watchdog.8

LIBADD=	util

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG} -t 1.0
