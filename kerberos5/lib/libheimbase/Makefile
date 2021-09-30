#$FreeBSD: b6bf526b352281344ee6659dafc3e5f0615428b6 $

LIB=	heimbase
LDFLAGS=	-Wl,--no-undefined
LIBADD=	pthread
VERSION_MAP= ${KRB5DIR}/base/version-script.map

INCS=	heimbase.h

SRCS= \
	array.c \
	bool.c \
	dict.c \
	heimbase.c \
	null.c \
	number.c \
	string.c

CFLAGS+=	-I${KRB5DIR}/include

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/base
