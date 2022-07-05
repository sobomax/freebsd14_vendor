# $FreeBSD: 1c1a90bda7304f6a48b02931c984af088d863890 $

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

CFLAGS._get_tp.c+= ${RTLD_HDRS}
