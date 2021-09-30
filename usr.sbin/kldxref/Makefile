# $FreeBSD: c22960c54e3a6c5067892ab58ed267f3304869ff $

PACKAGE=	runtime
PROG=	kldxref
MAN=	kldxref.8
SRCS=	kldxref.c ef.c ef_obj.c

WARNS?=	2

.if exists(ef_${MACHINE_CPUARCH}.c)
SRCS+=	ef_${MACHINE_CPUARCH}.c
.else
SRCS+=	ef_nop.c
.endif

.include <bsd.prog.mk>
