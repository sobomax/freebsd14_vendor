# $FreeBSD: aa066c0ff2aca078f5369bed37167acf2dd20951 $

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sbin/pfctl/files
BINDIR=		${TESTSDIR}

# We use ${.CURDIR} as workaround so that the glob patterns work.
FILES!=		echo ${.CURDIR}/pf????.in ${.CURDIR}/pf????.include ${.CURDIR}/pf????.ok

.include <bsd.progs.mk>
