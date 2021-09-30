# $FreeBSD: ef581160706ccf1c13b2c2aa91b837fba7b836aa $

.include <bsd.init.mk>

LIB=		clang_rt.tsan_cxx-${CRTARCH}

SRCS+=		tsan/rtl/tsan_new_delete.cpp
SRCS+=		ubsan/ubsan_handlers_cxx.cpp
SRCS+=		ubsan/ubsan_type_hash.cpp
SRCS+=		ubsan/ubsan_type_hash_itanium.cpp

.include <bsd.lib.mk>

CXXFLAGS.ubsan_handlers_cxx.cpp=		-frtti
CXXFLAGS.ubsan_type_hash.cpp=		-frtti
CXXFLAGS.ubsan_type_hash_itanium.cpp=	-frtti
