#$FreeBSD: 3cebdee9694153b6bde02f8d60ee32bb02ba2e3f $

PACKAGE=	kerberos-lib

LIB=	heimipcc
PRIVATELIB=
LIBADD=	heimbase roken pthread

SRCS=	\
	client.c \
	common.c

CFLAGS+=	-I${KRB5DIR}/lib/roken \
		-I${KRB5DIR}/base \
		-I${KRB5DIR}/lib/ipc \
		-I${KRB5DIR}/include

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/lib/ipc
