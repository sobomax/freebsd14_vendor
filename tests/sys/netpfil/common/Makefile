# $FreeBSD: e63a23b59687335c5e5161073a32d886fecb0537 $

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sys/netpfil/common


ATF_TESTS_SH+=	\
		pass_block \
		nat \
		tos \
		fragments \
		forward

${PACKAGE}FILES+=	\
		utils.subr \
		runner.subr \
		pft_ping.py \
		sniffer.py

${PACKAGE}FILESMODE_pft_ping.py=	0555

.include <bsd.test.mk>
