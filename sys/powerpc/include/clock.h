/*-
 * Kernel interface to machine-dependent clock driver.
 * Garrett Wollman, September 1994.
 * This file is in the public domain.
 *
 * $FreeBSD: b3cee9c7110817ddb64d48a1b1a873b9086b0cda $
 */

#ifndef _MACHINE_CLOCK_H_
#define	_MACHINE_CLOCK_H_

#ifdef _KERNEL

struct trapframe;

void	decr_intr(struct trapframe *);

#endif

#endif /* !_MACHINE_CLOCK_H_ */
