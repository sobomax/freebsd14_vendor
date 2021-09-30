# $FreeBSD: 4047edd70c377247a4efd280d1da49afa9829ced $

# Long double is 64-bits
SRCS+=machdep_ldisd.c
SYM_MAPS+=${LIBC_SRCTOP}/powerpc/Symbol.map
