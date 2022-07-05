# $FreeBSD: 2eb12bf11cad9cdeacb8d60026a7ce37e0794e2b $

SRCS+=	__vdso_gettc.c \
	sched_getcpu_gen.c

MDASM=	cerror.S \
	syscall.S \
	vfork.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o vfork.o
