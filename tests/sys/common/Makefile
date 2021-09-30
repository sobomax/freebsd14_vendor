# $FreeBSD: 556652cf640424bfabaa0ad6527c7c6f3d6703b9 $

PACKAGE=		tests
TESTSDIR=		${TESTSBASE}/sys/common
${PACKAGE}FILES+=	vnet.subr
${PACKAGE}FILES+=	divert.py
${PACKAGE}FILES+=	sender.py
${PACKAGE}FILES+=	net_receiver.py

${PACKAGE}FILESMODE_divert.py=0555
${PACKAGE}FILESMODE_sender.py=0555
${PACKAGE}FILESMODE_net_receiver.py=0555

.include <bsd.test.mk>
