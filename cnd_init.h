//===-- Implementation header for cnd_init function -------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_THREADS_CND_INIT_H
#define LLVM_LIBC_SRC_THREADS_CND_INIT_H

#include "include/threads.h"

namespace __llvm_libc {

int cnd_init(cnd_t *cond);

} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_THREADS_CND_INIT_H
