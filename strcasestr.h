//===-- Implementation header for strcasestr --------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_STRING_STRCASECMP_H
#define LLVM_LIBC_SRC_STRING_STRCASECMP_H

namespace __llvm_libc {

char *strcasestr(const char *needle, const char *haystack);

} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_STRING_STRCASECMP_H
