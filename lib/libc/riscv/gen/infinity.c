/*
 * infinity.c
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 115c4702d895a880c0f41df4911b7a800a780250 $");

#include <math.h>

/* bytes for +Infinity on riscv */
const union __infinity_un __infinity = { { 0, 0, 0, 0, 0, 0, 0xf0, 0x7f } };

/* bytes for NaN */
const union __nan_un __nan = { { 0, 0, 0xc0, 0xff } };
