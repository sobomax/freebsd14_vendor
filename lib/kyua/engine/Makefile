# $FreeBSD: 4f0c9053c692cc801ae99f3a8ec09d863abc6a78 $

KYUA_LIB=	engine
LIBADD=		lutok kyua_utils
CFLAGS=		-DKYUA_ARCHITECTURE=\"${MACHINE_ARCH}\"	\
		-DKYUA_PLATFORM=\"${MACHINE}\"

SRCS=	atf.cpp			\
	atf_list.cpp		\
	atf_result.cpp		\
	config.cpp		\
	exceptions.cpp		\
	filters.cpp		\
	kyuafile.cpp		\
	plain.cpp		\
	requirements.cpp	\
	scanner.cpp		\
	tap.cpp			\
	tap_parser.cpp		\
	scheduler.cpp

.include <bsd.lib.mk>
