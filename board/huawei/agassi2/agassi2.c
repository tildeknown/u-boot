// SPDX-License-Identifier: GPL-2.0+

#include <cpu_func.h>
#include <dm.h>
#include <asm/cache.h>
#include <init.h>
#include <asm/global_data.h>
#include <asm/io.h>
#include <asm/armv8/mmu.h>
#include <asm/psci.h>
#include <linux/arm-smccc.h>
#include <linux/delay.h>
#include <linux/psci.h>

static struct mm_region hi6250_mem_map[] = {
	{
		.virt = 0x0UL, /* DDR */
		.phys = 0x0UL,
		.size = 0xC0000000UL,
		.attrs = PTE_BLOCK_MEMTYPE(MT_NORMAL) |
			 PTE_BLOCK_INNER_SHARE
	}, {
		.virt = 0xE0000000UL, /* Peripheral block */
		.phys = 0xE0000000UL,
		.size = 0x20000000UL,
		.attrs = PTE_BLOCK_MEMTYPE(MT_DEVICE_NGNRNE) |
			 PTE_BLOCK_NON_SHARE |
			 PTE_BLOCK_PXN | PTE_BLOCK_UXN
	}, {
		/* List terminator */
		0,
	}
};

struct mm_region *mem_map = hi6250_mem_map;

int board_early_init_f(void)
{
	return 0;
}

int misc_init_r(void)
{
	return 0;
}

int dram_init(void)
{
	return 0;
}

int dram_init_banksize(void)
{
	return 0;
}

int board_init(void)
{
	return 0;
}

void reset_cpu(void)
{
}
