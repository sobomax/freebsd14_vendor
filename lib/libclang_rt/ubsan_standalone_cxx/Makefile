# $FreeBSD: 680cb9374d8787b285229940a51f2b7001f0e310 $

.include <bsd.init.mk>

LIB=		clang_rt.ubsan_standalone_cxx-${CRTARCH}

CXXFLAGS+=	-frtti

SRCS+=		ubsan/ubsan_handlers_cxx.cpp
SRCS+=		ubsan/ubsan_type_hash.cpp
SRCS+=		ubsan/ubsan_type_hash_itanium.cpp

.include <bsd.lib.mk>
