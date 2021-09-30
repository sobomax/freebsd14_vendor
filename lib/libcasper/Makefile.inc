# $FreeBSD: d6baedd2ed8e2c8cb92ed95f571ea732b9a786d8 $

.include <src.opts.mk>

.if ${MK_CASPER} != "no"
CFLAGS+=-DWITH_CASPER
.endif

.include "../Makefile.inc"
