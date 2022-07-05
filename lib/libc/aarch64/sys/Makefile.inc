# $FreeBSD: 97aff8ba92fe9a42e91a561f93534644c9446398 $

MIASM:=	${MIASM:Nfreebsd[467]_*}

SRCS+=	__vdso_gettc.c \
	sched_getcpu_gen.c

MDASM=	cerror.S \
	syscall.S \
	vfork.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o \
	vfork.o
