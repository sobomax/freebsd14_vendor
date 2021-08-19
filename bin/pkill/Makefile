#	$NetBSD: Makefile,v 1.1 2002/03/01 11:21:58 ad Exp $
# $FreeBSD: bd755b822b7efb722b061194899b2792db6b4054 $

.include <src.opts.mk>

PACKAGE=runtime
PROG=	pkill

LIBADD=	kvm jail

LINKS=	${BINDIR}/pkill ${BINDIR}/pgrep
MLINKS=	pkill.1 pgrep.1

#
# If considering retirement of these compatibility symlinks,
# keep in mind that pkill is installed to /usr/bin in other
# OS types, e.g., NetBSD, OpenBSD, Solaris, and Linux.
#
SYMLINKS=	../..${BINDIR}/pkill /usr/bin/pkill
SYMLINKS+=	../..${BINDIR}/pgrep /usr/bin/pgrep

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
