/* SPDX-License-Identifier: GPL-2.0+ */

#ifndef __AGASSI2_H
#define __AGASSI2_H

#include <linux/sizes.h>

/* Physical Memory Map */

/* CONFIG_TEXT_BASE needs to align with where ATF loads bl33.bin */

#define PHYS_SDRAM_1			0x00000000
#define PHYS_SDRAM_1_SIZE		0xC0000000

#define CFG_SYS_SDRAM_BASE		PHYS_SDRAM_1

#define CFG_SYS_INIT_RAM_ADDR	0x0e200000
#define CFG_SYS_INIT_RAM_SIZE	0x1000

/* Generic Interrupt Controller Definitions */
#define GICD_BASE			0xe82b1000
#define GICC_BASE			0xe82b2000

#endif /* __AGASSI2_H */
