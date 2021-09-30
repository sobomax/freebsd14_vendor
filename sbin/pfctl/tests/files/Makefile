# $FreeBSD: 818e4cd21f779112519a2bea5d0c502ffbb18e20 $

TESTSDIR=	${TESTSBASE}/sbin/pfctl/files
BINDIR=		${TESTSDIR}

# We use ${.CURDIR} as workaround so that the glob patterns work.
FILES!=		echo ${.CURDIR}/pf????.in ${.CURDIR}/pf????.include ${.CURDIR}/pf????.ok
FILES+=		${.CURDIR}/pfctl_test_descr.sh

.include <bsd.progs.mk>
