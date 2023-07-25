# $FreeBSD: 47fc9488f7729aee35161829d327c28060828036 $

PACKAGE= tests

TESTSDIR= ${TESTSBASE}

${PACKAGE}FILES+=		README __init__.py conftest.py

KYUAFILE= yes

SUBDIR+= etc
SUBDIR+= examples
SUBDIR+= sys
SUBDIR+= atf_python

SUBDIR_PARALLEL=

afterinstall: install-tests-local
install-tests-local: .PHONY
	${INSTALL_SYMLINK} -T 'package=tests' \
	    ../local/tests ${DESTDIR}${TESTSDIR}/local

.include "Makefile.inc0"
.include <bsd.test.mk>
