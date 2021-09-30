# $FreeBSD: 8efaadb6a333c3bfedf3e45d47bc9b1754b453bb $

# Long double is 64-bits
SRCS+=machdep_ldisd.c
SYM_MAPS+=${LIBC_SRCTOP}/powerpc64/Symbol.map
