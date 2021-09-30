# $FreeBSD: 68f54c801297029df43e17175ad1d6a16189132a $

PACKAGE=	tests

TESTSDIR=       ${TESTSBASE}/sys/netpfil/pf
TESTS_SUBDIRS+=	ioctl

ATF_TESTS_SH+=	anchor \
		checksum \
		forward \
		fragmentation \
		icmp \
		names \
		nat \
		pass_block \
		pfsync	\
		rdr \
		route_to \
		set_skip \
		set_tos \
		src_track \
		synproxy \
		table

${PACKAGE}FILES+=	CVE-2019-5597.py \
			CVE-2019-5598.py \
			echo_inetd.conf \
			utils.subr

${PACKAGE}FILESMODE_CVE-2019-5597.py=	0555
${PACKAGE}FILESMODE_CVE-2019-5598.py=	0555

.include <bsd.test.mk>
