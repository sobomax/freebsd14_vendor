# $FreeBSD: fa6d9b32739df04b84013217cdf1fdfac7fa3352 $

SRCS+=	trivial-vdso_tc.c \
	sched_getcpu_gen.c

MDASM=  Ovfork.S cerror.S syscall.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o vfork.o
