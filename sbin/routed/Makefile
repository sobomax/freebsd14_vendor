# Make `routed` for FreeBSD
# $FreeBSD: c01ab417844381834bce3457ff000062bfb25e6d $

PACKAGE=runtime
PROG=	routed
MAN=	routed.8
SRCS=	if.c input.c main.c output.c parms.c radix.c rdisc.c table.c trace.c
WARNS?=	3
LIBADD=	md

SUBDIR= rtquery

.include <bsd.prog.mk>
