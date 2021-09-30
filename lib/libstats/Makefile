# $FreeBSD: 89e10aa64c5f4283e9ab0cdf7df6ef75488231e2 $

LIB=		stats
SHLIBDIR?= 	/lib
SHLIB_MAJOR=	0
SRCS=		subr_stats.c tcp_stats.c

# To debug, comment WITHOUT_ASSERT_DEBUG= and uncomment CFLAGS:=
WITHOUT_ASSERT_DEBUG=
#CFLAGS:=${CFLAGS:C/-O[0-9]/-O0 -g3/} -DDIAGNOSTIC

.PATH:	${.CURDIR}/../../sys/kern ${.CURDIR}/../../sys/netinet

.include <bsd.lib.mk>
