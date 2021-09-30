# $FreeBSD: 6f717d812696a4249238bfb6755b0769ffe8fc7d $

.include "Makefile.boot.pre"
# Don't build shared libraries during bootstrap
NO_PIC=	yes
.include "../../../share/mk/bsd.lib.mk"
.include "Makefile.boot"
