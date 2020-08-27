# $FreeBSD: releng/11.3/usr.sbin/bsdconfig/Makefile 335488 2018-06-21 15:11:14Z dteske $

.include <src.opts.mk>

SUBDIR=	console \
	diskmgmt \
	docsinstall \
	dot \
	include \
	includes \
	mouse \
	networking \
	packages \
	password \
	security \
	share \
	startup \
	timezone \
	ttys \
	usermgmt

.if ${MK_EXAMPLES} != "no"
SUBDIR+= examples
.endif

FILESDIR=	${LIBEXECDIR}/bsdconfig
FILES=		USAGE

SCRIPTS= bsdconfig

MAN= bsdconfig.8

.include <bsd.prog.mk>
