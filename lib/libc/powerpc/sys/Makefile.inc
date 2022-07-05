# $FreeBSD: 6f07795b8870d930aea0f0179cfa6af89e2d7b48 $

SRCS+=	__vdso_gettc.c \
	sched_getcpu_gen.c

MDASM+=	cerror.S
