# $FreeBSD: 1b776b21777627a5623916e1bef7da4b8a8913e1 $

.include "${.CURDIR}/../Makefile.common"
.PATH:	${.CURDIR:H}

GTESTS=			zfsd_unittest

SRCS.zfsd_unittest:=	${SRCS:Nzfsd_main.cc}
SRCS.zfsd_unittest+=	libmocks.c zfsd_unittest.cc
.undef SRCS

LIBADD.zfsd_unittest+=	gmock_main

.include <bsd.test.mk>
