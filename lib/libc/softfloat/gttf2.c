/* $NetBSD: gttf2.c,v 1.1 2011/01/17 10:08:35 matt Exp $ */

/*
 * Written by Matt Thomas, 2011.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 519ea845f00c13e8ef4e378dda4532af90aeb71d $");

#ifdef FLOAT128

flag __gttf2(float128, float128);

flag
__gttf2(float128 a, float128 b)
{

	/* libgcc1.c says a > b */
	return float128_lt(b, a);
}

#endif /* FLOAT128 */
