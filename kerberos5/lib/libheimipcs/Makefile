#$FreeBSD: b1201f65a84262748b4a7f17f7ff51a92fcf824c $

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
