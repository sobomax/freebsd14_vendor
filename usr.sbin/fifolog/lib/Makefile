# $FreeBSD: f60529fa9ef0b6dcc88824764c00856a6b61d9a8 $

LIB=	fifolog
INTERNALLIB=	# API not published or supported.

SRCS=	fifolog_int.c fifolog_create.c fifolog_write_poll.c fifolog_reader.c
SRCS+=	getdate.y

CFLAGS+= -I${.CURDIR}
LIBADD=	z

NO_WMISSING_VARIABLE_DECLARATIONS=

.include <bsd.lib.mk>
