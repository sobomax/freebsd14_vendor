/*-
 * This file is in the public domain.
 *
 * $FreeBSD: 9ac82e6fab8dbc06126cd00ac8cb86f43311ffe1 $
 */

typedef void (fwmethod)(int dev_fd, const char *filename, char ich, int count);
extern fwmethod dvrecv;
extern fwmethod dvsend;
extern fwmethod mpegtsrecv;
