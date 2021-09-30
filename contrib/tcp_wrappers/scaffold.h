 /*
  * @(#) scaffold.h 1.3 94/12/31 18:19:19
  * 
  * Author: Wietse Venema, Eindhoven University of Technology, The Netherlands.
  *
  * $FreeBSD: 38ef8b25468b5d264d3656942533cfef5b70e046 $
  */

#ifdef INET6
extern struct addrinfo *find_inet_addr(char *host);
#else
extern struct hostent *find_inet_addr(char *host);
#endif
extern int check_dns(char *host);
extern int check_path(char *path, struct stat *st);
