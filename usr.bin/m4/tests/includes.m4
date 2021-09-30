dnl $FreeBSD: c06e763d85d092a0795b3939a90f3ec1c3ee8037 $
dnl $OpenBSD: src/regress/usr.bin/m4/includes.m4,v 1.1 2008/08/16 10:02:32 espie Exp $
dnl Check that include can occur within parameters
define(`foo', include(includes.aux))dnl
foo
