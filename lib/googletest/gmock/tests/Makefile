# $FreeBSD: 0e311abfe3e1a960a37552e22bee90a475f9b2cc $

.include <bsd.init.mk>

.PATH: ${GOOGLEMOCK_SRCROOT}/src ${GOOGLEMOCK_SRCROOT}/test

GTESTS+=	gmock_stress_test

LIBADD+=	pthread gtest gmock

# The next release will resolve a number of build warnings issues.
NO_WERROR=

.include <bsd.test.mk>
