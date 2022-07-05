/* bootptest.h */
/* $FreeBSD: 2d9e451bddef6d059276e91b7aa06de6660ee0f4 $ */
/*
 * Hacks for sharing print-bootp.c between tcpdump and bootptest.
 */
#define ESRC(p) (p)
#define EDST(p) (p)

extern int vflag; /* verbose flag */

/* global pointers to beginning and end of current packet (during printing) */
extern unsigned char *packetp;
extern unsigned char *snapend;

void	 bootp_print(struct bootp *bp, int length, u_short sport,
	    u_short dport);
char	*ipaddr_string(struct in_addr *);
int	 printfn(u_char *s, u_char *ep);
