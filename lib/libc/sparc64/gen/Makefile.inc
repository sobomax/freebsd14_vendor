# $FreeBSD: 5442a33fdb18ca04350cf4b8b0b90ad09f7d4e93 $

SRCS+=	_ctx_start.S _setjmp.S fabs.S fixunsdfsi.S flt_rounds.c fpgetmask.c \
	fpgetround.c fpgetsticky.c fpsetmask.c fpsetround.c \
	infinity.c ldexp.c makecontext.c \
	signalcontext.c setjmp.S sigsetjmp.S _set_tp.c \
	trivial-getcontextx.c
