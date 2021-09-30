# $FreeBSD: 073f4d3fa00cd6f2d3df33dd89911cd0228f3a9a $

PACKAGE=runtime
SCRIPTS = freebsd-version
MAN = freebsd-version.1
CLEANFILES = freebsd-version freebsd-version.sh
NEWVERS = ${SRCTOP}/sys/conf/newvers.sh

freebsd-version.sh: ${.CURDIR}/freebsd-version.sh.in ${NEWVERS}
	eval $$(egrep '^(TYPE|REVISION|BRANCH)=' ${NEWVERS}) ; \
	if ! sed -e "\
			s/@@TYPE@@/$${TYPE}/g; \
			s/@@REVISION@@/$${REVISION}/g; \
			s/@@BRANCH@@/$${BRANCH}/g; \
		" ${.CURDIR}/freebsd-version.sh.in >${.TARGET} ; then \
		rm -f ${.TARGET} ; \
		exit 1 ; \
	fi

.include <bsd.prog.mk>
