#	From: @(#)Makefile	8.1 (Berkeley) 6/8/93
# $FreeBSD: b29214787bb8a1ae496a45f68d58f4488682c32a $

VOLUME=		usd/19.memacros
SRCS=		meintro.me-sed
MACROS=		-me
GROFFDIR=	${SRCTOP}/contrib/groff
SRCDIR=		${GROFFDIR}/doc

version=`cat ${GROFFDIR}/VERSION`
revision=`sed -e 's/^0$$//' -e 's/^[1-9].*$$/.&/' ${GROFFDIR}/REVISION`

meintro.me-sed: meintro.me
	sed -e "s;@VERSION@;$(version)$(revision);" ${.ALLSRC} > ${.TARGET}

CLEANFILES=	${SRCS}

.include <bsd.doc.mk>
