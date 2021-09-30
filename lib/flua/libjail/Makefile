# $FreeBSD: 22f9bdb33feffe7a1c786c9d5a223c758b0502d7 $

SHLIB_NAME=	jail.so
SHLIBDIR=	${LIBDIR}/flua

SRCS+=		lua_jail.c

CFLAGS+= \
	-I${SRCTOP}/contrib/lua/src \
	-I${SRCTOP}/lib/liblua \

LIBADD+=	jail

MAN=	jail.3lua

.include <bsd.lib.mk>
