#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 14663709632a1f744ead332249d3bd13b1e8f6a2 $

.include <src.opts.mk>

PACKAGE=	runtime

PROG=	logger

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.if ${MK_CASPER} != "no"
LIBADD+=        casper
LIBADD+=        cap_syslog
CFLAGS+=-DWITH_CASPER
.endif

.include <bsd.prog.mk>
