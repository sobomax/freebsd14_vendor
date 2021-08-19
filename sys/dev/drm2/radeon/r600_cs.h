
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 9db545e4c70ba9b5e964c9959b52f1080db93271 $");

#ifndef __R600_CS_H__
#define	__R600_CS_H__

int	r600_dma_cs_next_reloc(struct radeon_cs_parser *p,
	    struct radeon_cs_reloc **cs_reloc);

#endif /* !defined(__R600_CS_H__) */
