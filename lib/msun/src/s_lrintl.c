#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 497b442f32d71071f6764a6a64a0cdc437bc1c16 $");

#define type		long double
#define	roundit		rintl
#define dtype		long
#define	fn		lrintl

#include "s_lrint.c"
