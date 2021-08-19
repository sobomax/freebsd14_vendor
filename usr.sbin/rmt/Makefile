#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 93fa5a5f1297033c6b9f8aa030c652c29e49b043 $

PROG=	rmt
MAN=	rmt.8

# called from /usr/src/etc/Makefile
etc-rmt:
	rm -f ${DESTDIR}/etc/rmt
	${INSTALL_RSYMLINK} ..${BINDIR}/rmt ${DESTDIR}/etc/rmt

.include <bsd.prog.mk>
