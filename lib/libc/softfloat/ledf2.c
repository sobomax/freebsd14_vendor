/* $NetBSD: ledf2.c,v 1.1 2000/06/06 08:15:06 bjh21 Exp $ */

/*
 * Written by Ben Harris, 2000.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 7d3e8fb54855661b183cb4cb8a303dd64a2599a4 $");

flag __ledf2(float64, float64);

flag
__ledf2(float64 a, float64 b)
{

	/* libgcc1.c says 1 - (a <= b) */
	return 1 - float64_le(a, b);
}
