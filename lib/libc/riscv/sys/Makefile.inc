# $FreeBSD: 0e94e6652645e84382694c1134294e27129574f6 $

SRCS+=	trivial-vdso_tc.c

MDASM=	cerror.S \
	syscall.S \
	vfork.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o vfork.o
