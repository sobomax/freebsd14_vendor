# $FreeBSD: 0d9e2648cb59192eef5b7cf7b05675590c9e1869 $

SRCS+=	amd64_tramp.S \
	start.S \
	elf64_freebsd.c \
	trap.c \
	multiboot2.c \
	exc.S

.PATH:	${BOOTSRC}/i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c \
	spinconsole.c

CFLAGS+=	-fPIC
LDFLAGS+=	-Wl,-znocombreloc
