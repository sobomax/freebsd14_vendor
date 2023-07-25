/* This file is in the public domain */
/* $FreeBSD: 8a53b2b0456f30820153b86fc85075fbd6325300 $ */

#define	abort()								\
	panic("libsodium error at %s:%d", __FILE__, __LINE__)
