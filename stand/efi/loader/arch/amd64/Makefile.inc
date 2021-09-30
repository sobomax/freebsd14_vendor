# $FreeBSD: f64adf08ec13a3f8c0cb4b9c62c72d29cc7566d2 $

SRCS+=	amd64_tramp.S \
	start.S \
	elf64_freebsd.c \
	trap.c \
	exc.S

.PATH:	${BOOTSRC}/i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c \
	spinconsole.c

CFLAGS+=	-fPIC
LDFLAGS+=	-Wl,-znocombreloc
