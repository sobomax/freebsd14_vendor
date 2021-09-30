# $FreeBSD: 46c8436ebff3455a51acb3cd6752afac0d35a89a $

.include <bsd.own.mk>

TESTS_SUBDIRS+=	common

.if ${MACHINE_CPUARCH} == "i386"
TESTS_SUBDIRS+= i386
.endif

.PATH:		${SRCTOP}/tests
KYUAFILE=	yes

.PATH:		${.CURDIR}/tools
SCRIPTSDIR=	${TESTSDIR}
SCRIPTS=	dtest.sh

.include <bsd.test.mk>
