# $FreeBSD: 902666c2ec39b247f6f48e00de86d833adadf2f8 $

PROG=p1003_1b

SRCS=\
	fifo.c \
	main.c \
	memlock.c \
	prutil.c \
	p26.c \
	sched.c \
	yield.c

MAN=

CFLAGS+=-DNO_MEMLOCK

.include <bsd.prog.mk>
