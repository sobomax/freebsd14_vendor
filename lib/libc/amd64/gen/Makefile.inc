#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: 30fb05f89cb72c7e11cbe9b66f6e83b9fc5444b3 $

SRCS+=	_setjmp.S _set_tp.c rfork_thread.S setjmp.S sigsetjmp.S \
	fabs.S \
	infinity.c ldexp.c makecontext.c signalcontext.c \
	flt_rounds.c fpgetmask.c fpsetmask.c fpgetprec.c fpsetprec.c \
	fpgetround.c fpsetround.c fpgetsticky.c
