/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 1ab391076b0db374ad22fd8daf6ac6201116d228 $");

#include <string.h>

void
bzero(void *b, size_t len)
{

	memset(b, 0, len);
}
