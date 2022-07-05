#include <sys/cdefs.h>
__FBSDID("$FreeBSD: cbbcf07823876b3f67e68fcb1eb23e6fdc5ac6fb $");

/*
 * ldexp() and scalbn() are defined to be identical, but ldexp() lives in libc
 * for backwards compatibility.
 */
#define scalbn ldexp
#include "../../msun/src/s_scalbn.c"
#undef scalbn
