# $FreeBSD: cd8f0f121ea6542ef383ffff8636aca2ae18a73c $
#
# Machine dependent definitions for the amd64 architecture.
#

# Long double is 80 bits
GDTOASRCS+=strtorx.c
SRCS+=machdep_ldisx.c
SYM_MAPS+=${LIBC_SRCTOP}/amd64/Symbol.map
