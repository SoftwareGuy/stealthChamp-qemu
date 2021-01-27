/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2019 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 */

#ifndef __SBI_SYSTEM_H__
#define __SBI_SYSTEM_H__

#include <sbi/sbi_types.h>

void __noreturn sbi_system_reset(u32 platform_reset_type);

#endif
