# $FreeBSD: ce817fafe514a40c55d37dcba2020a2ca01df91b $

SRCS+=	lex.l yacc.y
CFLAGS+= -I${.CURDIR} -I${.CURDIR}/../mkesdb \
	 -I${.CURDIR}/../../lib/libc/iconv
