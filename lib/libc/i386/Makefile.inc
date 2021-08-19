# $FreeBSD: 4470cdbaed35a56effc68d29bc27175b625b5ca7 $

# Long double is 80 bits
GDTOASRCS+=strtorx.c
SRCS+=machdep_ldisx.c
SYM_MAPS+=${LIBC_SRCTOP}/i386/Symbol.map
