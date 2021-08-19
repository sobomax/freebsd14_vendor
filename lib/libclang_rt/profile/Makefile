# $FreeBSD: c41da991a039617bda1b13860b0b291f8c3ed4e4 $

.include <bsd.init.mk>

LIB=		clang_rt.profile-${CRTARCH}

CFLAGS+=	-DCOMPILER_RT_HAS_ATOMICS=1
CFLAGS+=	-DCOMPILER_RT_HAS_FCNTL_LCK=1
CFLAGS+=	-DCOMPILER_RT_HAS_UNAME=1

# This is needed for --coverage
CXXFLAGS+=	-fvisibility=default

SRCS+=		profile/GCDAProfiling.c
SRCS+=		profile/InstrProfiling.c
SRCS+=		profile/InstrProfilingBuffer.c
SRCS+=		profile/InstrProfilingFile.c
SRCS+=		profile/InstrProfilingMerge.c
SRCS+=		profile/InstrProfilingMergeFile.c
SRCS+=		profile/InstrProfilingNameVar.c
SRCS+=		profile/InstrProfilingPlatformLinux.c
SRCS+=		profile/InstrProfilingPlatformOther.c
SRCS+=		profile/InstrProfilingRuntime.cpp
SRCS+=		profile/InstrProfilingUtil.c
SRCS+=		profile/InstrProfilingValue.c
SRCS+=		profile/InstrProfilingWriter.c

.PATH:		${CRTSRC}/include/profile
INCSDIR=	${CLANGDIR}/include/profile
INCS+=		InstrProfData.inc

.include <bsd.lib.mk>
