#$FreeBSD: b369b666f2ec79844d1b4423ab2af904d08c97f7 $

PACKAGE=	kerberos-lib

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
