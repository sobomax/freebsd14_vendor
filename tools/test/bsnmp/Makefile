# $FreeBSD: 52f67be70164f01a700936f3cd736dce4378be5c $

CONTRIB=${SRCTOP}/contrib/bsnmp
.PATH: ${CONTRIB}/tests

PROG_CXX=ctest
SRCS= main.cc asn1.cc snmp_parse_server.cc
CFLAGS += -I/${CONTRIB}/lib
CXXFLAGS+= -std=c++2a
LIBADD= bsnmp

CFLAGS += -DBOGUS_CVE_2019_5610_FIX
MK_MAN= no

.include <bsd.prog.mk>


run:
	${.OBJDIR}/ctest
