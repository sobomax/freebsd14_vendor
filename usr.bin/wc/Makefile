#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 550b718e1478a49d83ec4a65bbcea153ff1f4b65 $

.include <src.opts.mk>

PROG=	wc
LIBADD=	xo

.if ${MK_CASPER} != "no"
LIBADD+=        casper
LIBADD+=        cap_fileargs
CFLAGS+=-DWITH_CASPER
.endif

.include <bsd.prog.mk>
