/*
 * cabsf() wrapper for hypotf().
 *
 * Written by J.T. Conklin, <jtc@wimsey.com>
 * Placed into the Public Domain, 1994.
 */

#ifndef lint
static const char rcsid[] =
  "$FreeBSD: b5065c8a56833f21c99f155b003d03eb1c7ee5bc $";
#endif /* not lint */

#include <complex.h>
#include <math.h>
#include "math_private.h"

float
cabsf(float complex z)
{

	return hypotf(crealf(z), cimagf(z));
}
