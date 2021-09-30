#	From: @(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: 7718c6344dc4870a73e2ff85bd8f03a83064b7a4 $

.include <src.opts.mk>

SUBDIR=	${_IPv6} \
	${_atf} \
	legal \
	${_llvm} \
	${_pjdfstest} \
	${_roffdocs}

.if ${MK_TESTS} != "no"
_atf= atf
_pjdfstest= pjdfstest
.endif

.if ${MK_CLANG} != "no"
_llvm=	llvm
.endif

.if ${MK_INET6} != "no"
_IPv6=	IPv6
.endif

SUBDIR_PARALLEL=

# Default output format for troff documents is ascii.
# To generate postscript versions of troff documents, use:
#  make PRINTERDEVICE=ps

.include <bsd.subdir.mk>
