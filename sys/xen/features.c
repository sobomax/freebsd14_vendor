#include <sys/cdefs.h>
__FBSDID("$FreeBSD: bbb28968935a77de8494e9cc1118f21e3fec7e8d $");

#include <sys/param.h>
#include <sys/systm.h>

#include <xen/xen-os.h>
#include <xen/hypervisor.h>
#include <xen/features.h>

uint8_t xen_features[XENFEAT_NR_SUBMAPS * 32] /* __read_mostly */;

void
setup_xen_features(void)
{
        xen_feature_info_t fi;
        int i, j;

        for (i = 0; i < XENFEAT_NR_SUBMAPS; i++) {
                fi.submap_idx = i;
                if (HYPERVISOR_xen_version(XENVER_get_features, &fi) < 0)
                        break;
                for (j = 0; j < 32; j++)
                        xen_features[i*32 + j] = !!(fi.submap & 1<<j);
        }
}
