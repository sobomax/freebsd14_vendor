# $FreeBSD: releng/11.3/usr.bin/mkimg/tests/Makefile 345436 2019-03-23 03:37:08Z marcel $

.PATH:	${.CURDIR}

PACKAGE=	tests

_REBASE_SCRIPT=	mkimg_test
ATF_TESTS_SH=	${_REBASE_SCRIPT}

SOURCES!=	cd ${.CURDIR}; echo *.uu
${PACKAGE}FILES+=		${SOURCES:S,.gz.uu,,g}

.for f in ${${PACKAGE}FILES}
$f: $f.gz.uu
	uudecode -p ${.ALLSRC} | gunzip -c > ${.TARGET}
.endfor

CLEANFILES+=	${${PACKAGE}FILES}}

rebase: .PHONY
	(cd ${.CURDIR}; /usr/libexec/atf-sh ${_REBASE_SCRIPT}.sh rebase)

.include <bsd.test.mk>
