# $FreeBSD: releng/11.3/usr.sbin/unbound/control/Makefile 363027 2020-07-08 20:20:59Z gordon $

# Vendor sources and generated files
LDNSDIR= ${SRCTOP}/contrib/ldns
UNBOUNDDIR= ${SRCTOP}/contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/smallapp ${UNBOUNDDIR}/util ${UNBOUNDDIR}/doc

PROG=	local-unbound-control
SRCS=	ub_event.c unbound-control.c worker_cb.c
CFLAGS+=	-I${UNBOUNDDIR} -I${LDNSDIR}
CFLAGS+=	-I${.CURDIR:H} -I${.CURDIR}
LIBADD=	unbound crypto ssl pthread
MAN=	local-unbound-control.8

.include <bsd.prog.mk>
