# $FreeBSD: a00ad7130436cfb6ea47ba55e1e5351a7b2d1270 $

SRCS+=	trivial-vdso_tc.c

# Long double is 64-bits
SRCS+=machdep_ldisd.c
SYM_MAPS+=${LIBC_SRCTOP}/powerpc64/Symbol.map
