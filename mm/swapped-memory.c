/*
 * Swapped Memory Support.
 *
 * This code enables swapped memory support. Memory can be allocated to be in a
 * file and have fix-sized cache in the memory.
 *
 * Copyright (C) 2017 Shanghai Jiao Tong University and Intel Corporation.
 * Authors:
 *	Jiacheng Ma
 *	Bo Peng
 *	Haozhong Zhang
 *
 * This work is licensed under the terms of the GNU GPL, version 2.
 */

#include <linux/errno.h>
#include <linux/mm.h>
#include <linux/fs.h>
#include <linux/pagemap.h>
#include <linux/rmap.h>
#include <linux/memory.h>
#include <linux/syscall.h>

#include <asm/tlbflush.h>
#include "internal.h"

SYSCALL_DEFINE3(malloc_swapped, unsigned long, addr, unsigned long, len,
		unsigned long, in_mem_len)
{

}
