# $FreeBSD: d11b91273b50cb3861b5ca62a0b2a2d1f33e4202 $

.include <src.opts.mk>

PROG=	top
SRCS=	commands.c display.c machine.c screen.c top.c \
	username.c utils.c
MAN=	top.1

LIBADD=	ncursesw m kvm jail util sbuf
.include <bsd.prog.mk>
