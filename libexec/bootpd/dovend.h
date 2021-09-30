/* dovend.h */
/* $FreeBSD: ef3b62de712628e27f74ea4126d0426b5fa67894 $ */

extern int dovend_rfc1497(struct host *hp, u_char *buf, int len);
extern int insert_ip(int, struct in_addr_list *, u_char **, int *);
extern void insert_u_long(u_int32, u_char **);
