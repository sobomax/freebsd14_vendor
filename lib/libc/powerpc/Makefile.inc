# $FreeBSD: afc403d860607b259fdf04e9d9c437452cc210c4 $

SRCS+=	trivial-vdso_tc.c

# Long double is 64-bits
SRCS+=machdep_ldisd.c
SYM_MAPS+=${LIBC_SRCTOP}/powerpc/Symbol.map
