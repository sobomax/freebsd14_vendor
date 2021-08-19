# $FreeBSD: 60c59c0ea929a3185978f3098f9ef0d66de9b421 $

LIB_CXX=	devdctl
INCS=	consumer.h		\
	event.h			\
	event_factory.h		\
	exception.h		\
	guid.h
SRCS=	consumer.cc		\
	event.cc		\
	event_factory.cc	\
	exception.cc		\
	guid.cc

INCSDIR= ${INCLUDEDIR}/devdctl

WARNS?=	3
PRIVATELIB=	true
SHLIB_MAJOR=	0

# Silence warnings about usage of deprecated std::auto_ptr, and various
# deprecated function objects from <functional>
CXXWARNFLAGS+=	-Wno-deprecated-declarations

.include <bsd.lib.mk>
