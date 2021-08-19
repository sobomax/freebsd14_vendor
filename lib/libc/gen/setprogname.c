#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 29a6cd025ec892fdd894635e2be65d629f58b477 $");

#include <stdlib.h>
#include <string.h>

#include "libc_private.h"

void
setprogname(const char *progname)
{
	const char *p;

	p = strrchr(progname, '/');
	if (p != NULL)
		__progname = p + 1;
	else
		__progname = progname;
}
