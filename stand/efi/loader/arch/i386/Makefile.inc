# $FreeBSD: fcdb6324b2f084686e60681b9f57f7da6291f0ce $

SRCS+=	start.S \
	elf32_freebsd.c \
	exec.c

.PATH:	${BOOTSRC}/i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c \
	spinconsole.c

CFLAGS+=	-fPIC
LDFLAGS+=	-Wl,-znocombreloc
