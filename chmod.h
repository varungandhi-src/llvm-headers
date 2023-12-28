//===-- Implementation header for chmod -------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_SYS_STAT_CHMOD_H
#define LLVM_LIBC_SRC_SYS_STAT_CHMOD_H

#include <sys/stat.h>

namespace __llvm_libc {

int chmod(const char *path, mode_t mode);

} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_SYS_STAT_CHMOD_H
