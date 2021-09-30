#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: c40baf2e3dc053574dc749cf7f7795104feaf7cb $

.include <src.opts.mk>

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
