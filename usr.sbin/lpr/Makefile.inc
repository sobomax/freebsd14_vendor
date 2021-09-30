# $FreeBSD: 59f8ceb1ed552baefed0f29ff7addb6d9d7d6e85 $

.include <src.opts.mk>

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include "../Makefile.inc"
