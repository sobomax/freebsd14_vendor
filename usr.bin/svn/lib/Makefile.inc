# $FreeBSD: 869da97afcbe524f4509587aefeec5e64b1da4c2 $

.if !defined(SVNDIR)

SVNDIR=		${SRCTOP}/contrib/subversion/subversion
APRU=		${SRCTOP}/contrib/apr-util
APR=		${SRCTOP}/contrib/apr
SQLITE=		${SRCTOP}/contrib/sqlite3
SERF=		${SRCTOP}/contrib/serf

WARNS?=		0	# definitely not ready

.if exists(${.CURDIR}/../../../Makefile.inc)
.include "${.CURDIR}/../../../Makefile.inc"
.endif

.endif
