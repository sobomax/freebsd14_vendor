/*
 * The contents of this file are in the public domain.
 * Written by Garrett A. Wollman, 2000-10-07.
 *
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 0dc77e3e992b9cec88235186d392bba399e7b40d $");

#include <sys/mman.h>
#include <errno.h>

int
posix_madvise(void *address, size_t size, int how)
{
	int ret, saved_errno;

	saved_errno = errno;
	if (madvise(address, size, how) == -1) {
		ret = errno;
		errno = saved_errno;
	} else {
		ret = 0;
	}
	return (ret);
}
