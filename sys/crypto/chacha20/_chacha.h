/* $FreeBSD: 20f8bb9a79487da417064994c4f4e2fb13565a65 $ */
/*
 * Public domain.
 */

#ifndef _CHACHA_H
#define _CHACHA_H

#include <sys/types.h>

struct chacha_ctx {
	u_int input[16];
};

#endif
