# $FreeBSD: 47d4939f2166abb8a8c420dd75224d6c1d88819a $

.include <src.opts.mk>

SUBDIR+=		gtest
SUBDIR+=		gmock
SUBDIR+=		gmock_main
SUBDIR+=		gtest_main

SUBDIR.${MK_TESTS}+=	tests

SUBDIR_DEPEND_gtest_main=	gtest
SUBDIR_DEPEND_gmock=	gtest
SUBDIR_DEPEND_gmock_main=	gmock
SUBDIR_DEPEND_tests=	gmock_main
SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
