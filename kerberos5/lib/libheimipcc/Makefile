#$FreeBSD: d102058720e7df1383b4c3488b982e40b15d4be0 $

PACKAGE=	kerberos

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
