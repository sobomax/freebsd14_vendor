# $FreeBSD: f059154cd4c0acffe81633abde2928968beee994 $
#
# Machine dependent definitions for the arm 64-bit architecture.
#

# Long double is quad precision
GDTOASRCS+=strtorQ.c
SRCS+=machdep_ldisQ.c
SYM_MAPS+=${LIBC_SRCTOP}/aarch64/Symbol.map
