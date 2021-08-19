#	from: @(#)Makefile	5.8 (Berkeley) 7/28/90
# $FreeBSD: b7816cddedd3a4a666b8015d355a6acd7b79bc58 $

PROG=	rarpd
MAN=	rarpd.8

LIBADD=	util

WARNS?=	3
# This breaks with format strings returned by expand_syslog_m().. argh!
#FORMAT_AUDIT?=	1

.include <bsd.prog.mk>
