# $FreeBSD: 711d95e48ba04e08ec6e1560ba2fd272a97c66b9 $

# Common flags to build lua related files

CFLAGS+=	-I${LUASRC} -I${LDRSRC} -I${LIBLUASRC}
CFLAGS+=	-DLUA_FLOAT_TYPE=LUA_FLOAT_INT64
