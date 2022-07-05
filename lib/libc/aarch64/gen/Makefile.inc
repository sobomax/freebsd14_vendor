# $FreeBSD: 7c530b93b4e40208bf4f5cb8e47ee1c84edda677 $

CFLAGS+=	-DNO_COMPAT7

SRCS+=	_ctx_start.S \
	fabs.S \
	flt_rounds.c \
	fpgetmask.c \
	fpsetmask.c \
	_get_tp.c \
	infinity.c \
	ldexp.c \
	makecontext.c \
	_setjmp.S \
	_set_tp.c \
	setjmp.S \
	sigsetjmp.S \
	trivial-getcontextx.c
