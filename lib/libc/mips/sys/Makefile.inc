# $FreeBSD: d7cc70d01b079ca326dc33f35712624e45d5a2ca $

SRCS+=	trivial-vdso_tc.c

MDASM=  Ovfork.S cerror.S syscall.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o vfork.o
