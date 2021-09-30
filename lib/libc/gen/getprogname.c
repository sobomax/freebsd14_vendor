#include <sys/cdefs.h>
__FBSDID("$FreeBSD: fd51d1322517d7dbc7563cb6cc947ab52025fb47 $");

#include "namespace.h"
#include <stdlib.h>
#include "un-namespace.h"

#include "libc_private.h"

__weak_reference(_getprogname, getprogname);

const char *
_getprogname(void)
{

	return (__progname);
}
