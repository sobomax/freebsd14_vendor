/*
 * $FreeBSD: b79c1179713542550243e055305a4ca8bb004f6c $
 */

extern devclass_t stg_devclass;

int	stg_alloc_resource	(device_t);
void	stg_release_resource	(device_t);
int	stg_probe		(device_t);
int	stg_attach		(device_t);
int	stg_detach		(device_t);
void	stg_intr		(void *);
