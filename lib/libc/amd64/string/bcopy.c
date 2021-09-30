/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 9e0c4187e439ff1af87aa66a6b7ab336e2b84db2 $");

#include <string.h>

void
bcopy(const void *src, void *dst, size_t len)
{

	memmove(dst, src, len);
}
