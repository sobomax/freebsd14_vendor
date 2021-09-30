/*
 * infinity.c
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 464b4029b35ae4df8124a3c65168906e13d8d759 $");

#include <math.h>

/* bytes for +Infinity on a 387 */
const union __infinity_un __infinity = { { 0, 0, 0, 0, 0, 0, 0xf0, 0x7f } };

/* bytes for NaN */
const union __nan_un __nan = { { 0, 0, 0xc0, 0xff } };
