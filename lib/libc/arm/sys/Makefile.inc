# $FreeBSD: be6a58f8aaf5d7fb70ff215f9593db4968f3f6e0 $

SRCS+=	__vdso_gettc.c

MDASM= Ovfork.S cerror.S syscall.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o vfork.o
