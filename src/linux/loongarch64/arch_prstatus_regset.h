/*
 * Copyright (c) 2021-2022 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#ifndef STRACE_ARCH_PRSTATUS_REGSET_H
# define STRACE_ARCH_PRSTATUS_REGSET_H

typedef struct user_pt_regs struct_prstatus_regset;

# define HAVE_ARCH_PRSTATUS_REGSET 1

#endif /* !STRACE_ARCH_PRSTATUS_REGSET_H */
