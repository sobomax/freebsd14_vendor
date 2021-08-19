#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: e1b9d4fd68a2e9dc18e9f7327fadfa9e6fc35958 $

.include <src.opts.mk>

.PATH: ${SRCTOP}/usr.bin/ktrace

PROG=		kdump
SRCS=		kdump.c subr.c
CFLAGS+=	-I${SRCTOP}/usr.bin/ktrace

LIBADD=		sysdecode
.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_grp
LIBADD+=	cap_pwd
CFLAGS+=-DWITH_CASPER
.endif

#NO_WERROR?=	YES

.include <bsd.prog.mk>
