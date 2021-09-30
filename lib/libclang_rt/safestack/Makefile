# $FreeBSD: 4f3d2fa2aa6867cce9d6927dc95f22ee1ce0a6b4 $

.include <bsd.init.mk>

LIB=		clang_rt.safestack-${CRTARCH}

SRCS+=		interception/interception_linux.cpp
SRCS+=		interception/interception_type_test.cpp
SRCS+=		safestack/safestack.cpp

.include <bsd.lib.mk>
