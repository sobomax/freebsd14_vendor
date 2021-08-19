# $FreeBSD: 623a06b7faf87eb3313522f881b93a06791d496a $

MIASM:=	${MIASM:Nfreebsd[467]_*}

SRCS+=	__vdso_gettc.c

MDASM=	cerror.S \
	syscall.S \
	vfork.S

# Don't generate default code for these syscalls:
NOASM+=	sbrk.o \
	vfork.o
