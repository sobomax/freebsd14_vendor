dnl $FreeBSD: 19af2e1fccefada0e27c46883d60d6d1d3a2805d $
dnl $OpenBSD: src/regress/usr.bin/m4/translit.m4,v 1.1 2010/03/23 20:11:52 espie Exp $
dnl first one should match, not second one
translit(`onk*', `**', `p_')
