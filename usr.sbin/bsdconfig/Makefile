# $FreeBSD: a203c9aab3282a6d8887d864edd2d9f818df497c $

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
