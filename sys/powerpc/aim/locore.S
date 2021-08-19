/* $FreeBSD: 806884dfbeff4231d409273e9d5f9ecc004cbde6 $ */

#ifdef __powerpc64__
#include <powerpc/aim/locore64.S>
#else
#include <powerpc/aim/locore32.S>
#endif

/*
 * XXX: This should be moved to a shared AIM/booke asm file, if one ever is
 * created.
 */
ENTRY(get_spr)
	mfspr	%r3, 0
	blr
