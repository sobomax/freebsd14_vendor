#
# $FreeBSD: 58eaf49dae3aa240b1591791db0e74451906c1d3 $
#

.include <src.opts.mk>

PROG=	bhyvectl
SRCS=	bhyvectl.c
PACKAGE=	bhyve

MAN=	bhyvectl.8

LIBADD=	vmmapi util

WARNS?=	3

CFLAGS+= -I${SRCTOP}/sys/amd64/vmm

.if ${MK_BHYVE_SNAPSHOT} != "no"
CFLAGS+= -DBHYVE_SNAPSHOT
.endif

.include <bsd.prog.mk>
