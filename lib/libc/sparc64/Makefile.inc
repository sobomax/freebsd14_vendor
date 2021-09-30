# $FreeBSD: da507d2f4894be65a113dda1daba34ae3929a5dc $
#
# Machine dependent definitions for the ultra sparc architecture.
#

.include "fpu/Makefile.inc"

SRCS+=	trivial-vdso_tc.c

# Long double is quad precision
GDTOASRCS+=strtorQ.c
SRCS+=machdep_ldisQ.c
SYM_MAPS+=${LIBC_SRCTOP}/sparc64/Symbol.map
