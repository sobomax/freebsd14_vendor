dnl $FreeBSD: 3ad30f2442ecdb312da8c282f738026c46c0e321 $
dnl $OpenBSD: src/regress/usr.bin/m4/args.m4,v 1.1 2001/10/10 23:23:59 espie Exp $
dnl Expanding all arguments
define(`A', `first form: $@, second form $*')dnl
define(`B', `C')dnl
A(1,2,`B')
dnl indirection means macro can get called with argc == 2 !
indir(`A',1,2,`B')
indir(`A')
