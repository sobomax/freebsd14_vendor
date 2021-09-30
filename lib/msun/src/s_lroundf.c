#include <sys/cdefs.h>
__FBSDID("$FreeBSD: e24fe7f81902e4523ec91f6752680aee94626a72 $");

#define type		float
#define	roundit		roundf
#define dtype		long
#define	DTYPE_MIN	LONG_MIN
#define	DTYPE_MAX	LONG_MAX
#define	fn		lroundf

#include "s_lround.c"
