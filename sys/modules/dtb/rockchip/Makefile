# $FreeBSD: 12f59e4ee973640a9aefab32ced2645832eb40a5 $
# All the dts files for rockchip systems we support.

.if ${MACHINE_ARCH} == "armv7"
DTS=	\
	rk3288-tinker.dts		\
	rk3288-tinker-s.dts
.elif ${MACHINE_ARCH} == "aarch64"
DTS=	\
	rockchip/rk3399-khadas-edge-captain.dts \
	rockchip/rk3399-khadas-edge.dts \
	rockchip/rk3399-khadas-edge-v.dts \
	rockchip/rk3399-rock-pi-4.dts \
	rockchip/rk3328-rock64.dts \
	rockchip/rk3399-firefly.dts \
	rockchip/rk3399-rockpro64.dts

DTSO=	rk3328-dwc3.dtso
.endif

.include <bsd.dtb.mk>
