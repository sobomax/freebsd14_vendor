# $FreeBSD: dd74272e97b20a097e80bd60c9f84ba232636871 $

.include <src.opts.mk>

PACKAGE=runtime
PROG=	expr
SRCS=	expr.y
YFLAGS=

# expr relies on signed integer wrapping
CFLAGS+= -fwrapv

NO_WMISSING_VARIABLE_DECLARATIONS=

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
