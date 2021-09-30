# $FreeBSD: 89a2e8cf1dca7ae4a541fb8e233ca7b4ce788003 $

ATF_TESTS_SH+=	ls_tests
# This seems like overkill, but the idea in mind is that all of the testcases
# should be runnable as !root
TEST_METADATA.ls_tests+=	required_user="unprivileged"
TEST_METADATA.ls_tests+=	required_files="/usr/bin/awk /usr/bin/nc /usr/bin/sort"

.include <bsd.test.mk>
