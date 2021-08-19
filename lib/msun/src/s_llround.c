#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 827dfc1f636776f0ed9c9f53aaea8ef86f02ff5a $");

#define type		double
#define	roundit		round
#define dtype		long long
#define	DTYPE_MIN	LLONG_MIN
#define	DTYPE_MAX	LLONG_MAX
#define	fn		llround

#include "s_lround.c"
