# $FreeBSD: 45095ac953099f5a0cd9039ea6577653ab23e66d $

PACKAGE=	tests
WARNS?=		1

TESTSDIR=       ${TESTSBASE}/sys/netlink

#ATF_TESTS_C +=	test_snl
ATF_TESTS_PYTEST +=	test_nl_core.py
ATF_TESTS_PYTEST +=	test_rtnl_iface.py
ATF_TESTS_PYTEST +=	test_rtnl_ifaddr.py

CFLAGS+=	-I${.CURDIR:H:H:H}

.include <bsd.test.mk>
