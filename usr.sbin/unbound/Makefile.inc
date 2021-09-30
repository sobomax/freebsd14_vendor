# $FreeBSD: 7cdeaa592d2a3b0cda1acb0fdbb3b17dab6e7c7e $

MK_WERROR=	no
NO_WTHREAD_SAFETY= true
PACKAGE=	unbound

.for man in ${MAN}
${man}: ${UNBOUNDDIR}/doc/${man:S/local-//}
	sed -E \
	    -e 's/\<(fI)?u(nbound\>[^.])/\1local-u\2/g' \
	    -e 's/\<(fI)?U(nbound\>[^.])/\1Local-u\2/g' \
	    -e 's/\/local-unbound/\/unbound/g' \
	    <${.ALLSRC} >${.TARGET}
CLEANFILES += ${man}
.endfor

.include "../Makefile.inc"
