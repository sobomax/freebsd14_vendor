# $FreeBSD: 9df72b44a61911c3ce54178e5b9a96c5751de4fb $
#
# Machine dependent definitions for the RISC-V architecture.
#

# Long double is quad precision
GDTOASRCS+=strtorQ.c
SRCS+=machdep_ldisQ.c
SYM_MAPS+=${LIBC_SRCTOP}/riscv/Symbol.map
