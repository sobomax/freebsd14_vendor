#$FreeBSD: 17e81702061c5ddd640f76c256fa3929ac2b47d3 $

PACKAGE=	kerberos-lib

LIB=	heimipcs
PRIVATELIB=
LIBADD=	heimbase roken pthread

SRCS=	\
	server.c \
	common.c

CFLAGS+=	-I${KRB5DIR}/lib/roken \
		-I${KRB5DIR}/base \
		-I${KRB5DIR}/lib/ipc -I.

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/lib/ipc
