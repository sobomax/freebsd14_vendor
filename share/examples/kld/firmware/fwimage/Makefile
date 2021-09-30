#	$FreeBSD: 1afe4766f2bad2ed24a909bf4b5ab3233ef4b0e4 $

PACKAGE=examples
FILESDIR=${SHAREDIR}/examples/kld/fwimage
KMOD=	beastie
FIRMWS=	firmware.img:beastie

CLEANFILES=	firmware.img

firmware.img: firmware.img.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}

.include <bsd.kmod.mk>
