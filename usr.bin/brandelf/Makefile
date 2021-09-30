# $FreeBSD: 9d3efde974d69b6ba003ecdb95ca24f3ca7560bf $

.include <src.opts.mk>

PROG=	brandelf

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_fileargs
CFLAGS+=	-DWITH_CASPER
.endif

.include <bsd.prog.mk>
