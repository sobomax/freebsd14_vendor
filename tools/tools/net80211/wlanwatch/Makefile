# $FreeBSD: 7cd0550071b40e1efe3996ce3e1ddc481137ebc4 $

PROG=	wlanwatch
BINDIR=	/usr/local/bin
MAN=

.include <src.opts.mk>

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
