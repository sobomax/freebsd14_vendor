# $FreeBSD: 079c73d336a9ae9232c9846482a99e97a2892b32 $

SRCS+=	start.S \
	elf32_freebsd.c \
	exec.c

.PATH:	${BOOTSRC}/i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c \
	spinconsole.c

CFLAGS+=	-fPIC -DTERM_EMU
LDFLAGS+=	-Wl,-znocombreloc
