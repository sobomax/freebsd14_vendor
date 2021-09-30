# $FreeBSD: 9a4df6e7b6480601f9681f4372f2a1c26a1e362a $

CFLAGS+=	${CFLAGS_NO_SIMD} -msoft-float -fvisibility=hidden
