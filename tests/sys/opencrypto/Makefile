# $FreeBSD: releng/11.3/tests/sys/opencrypto/Makefile 320862 2017-07-10 05:34:37Z ngie $

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sys/opencrypto
BINDIR=		${TESTSDIR}

PLAIN_TESTS_SH=	runtests

TEST_METADATA.runtests+= required_programs="python"
TEST_METADATA.runtests+= required_user="root"

PYMODULES=	cryptodev.py cryptodevh.py cryptotest.py dpkt.py

${PACKAGE}FILES+=	${PYMODULES}

.include <bsd.test.mk>
