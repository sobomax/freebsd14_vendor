# $FreeBSD: bf018e16c9e064979f0acce6a63d12c0e046771e $

.include <src.opts.mk>

PACKAGE=	clibs
LIB=		gcc_eh
NO_PIC=
MK_SSP=		no
WARNS?=	2

.include "Makefile.inc"

.if ${.MAKE.LEVEL} > 0
# avoid circular dependencies
GENDIRDEPS_FILTER+= Nlib/msun
CFLAGS+= -I${SRCTOP}/lib/msun/src
.endif

.include <bsd.lib.mk>
