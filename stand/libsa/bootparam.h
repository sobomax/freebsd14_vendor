/*	$NetBSD: bootparam.h,v 1.3 1998/01/05 19:19:41 perry Exp $	*/
/*	$FreeBSD: 9c9f50ea434d1386de46b55232f5551e2f8905fe $ */

int bp_whoami(int sock);
int bp_getfile(int sock, char *key, struct in_addr *addrp, char *path);

