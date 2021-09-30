#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: 45e69cad1d0fccf2a61958b17c59d7d13de9f492 $

SRCS+=	_ctx_start.S _setjmp.S _set_tp.c fabs.S \
	flt_rounds.c infinity.c ldexp.c makecontext.c \
	rfork_thread.S setjmp.S signalcontext.c sigsetjmp.S
