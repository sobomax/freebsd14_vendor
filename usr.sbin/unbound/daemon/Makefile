# $FreeBSD: ee251acee85f5b68bcc276262de059bfa58336c1 $

# Vendor sources and generated files
LDNSDIR= ${SRCTOP}/contrib/ldns
UNBOUNDDIR= ${SRCTOP}/contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/daemon ${UNBOUNDDIR}/util ${UNBOUNDDIR}/util/shm_side ${UNBOUNDDIR}/doc

PROG=	local-unbound
SRCS=	acl_list.c cachedump.c daemon.c remote.c shm_main.c stats.c \
	ub_event.c unbound.c worker.c
CFLAGS+=	-I${UNBOUNDDIR} -I${LDNSDIR}
CFLAGS+=	-I${.CURDIR:H} -I${.CURDIR}
LIBADD=	unbound util ssl crypto pthread
MAN=	local-unbound.8 local-unbound.conf.5

.include <bsd.prog.mk>
