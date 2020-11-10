# $FreeBSD: releng/12.2/usr.bin/mkimg/tests/Makefile 362776 2020-06-29 08:14:45Z gonzo $

.PATH:	${.CURDIR}

PACKAGE=	tests

_REBASE_SCRIPT=	mkimg_test
ATF_TESTS_SH=	${_REBASE_SCRIPT}

SOURCES!=	cd ${.CURDIR}; echo *.hex
${PACKAGE}FILES+=		${SOURCES:S,.hex,,g}

.for f in ${${PACKAGE}FILES}
$f: $f.hex
	sed -e '/^#.*/D' < ${.ALLSRC} > ${.TARGET}
.endfor

CLEANFILES+=	${${PACKAGE}FILES}}

rebase: .PHONY
	(cd ${.CURDIR}; /usr/libexec/atf-sh ${_REBASE_SCRIPT}.sh rebase)

.include <bsd.test.mk>
