//===-- Lower/OpenACC.h -- lower OpenACC directives -------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// Coding style: https://mlir.llvm.org/getting_started/DeveloperGuide/
//
//===----------------------------------------------------------------------===//

#ifndef FORTRAN_LOWER_OPENACC_H
#define FORTRAN_LOWER_OPENACC_H

namespace Fortran {
namespace parser {
struct OpenACCConstruct;
struct OpenACCDeclarativeConstruct;
} // namespace parser

namespace semantics {
class SemanticsContext;
}

namespace lower {

class AbstractConverter;

namespace pft {
struct Evaluation;
} // namespace pft

void genOpenACCConstruct(AbstractConverter &,
                         Fortran::semantics::SemanticsContext &,
                         pft::Evaluation &, const parser::OpenACCConstruct &);
void genOpenACCDeclarativeConstruct(
    AbstractConverter &, pft::Evaluation &,
    const parser::OpenACCDeclarativeConstruct &);

} // namespace lower
} // namespace Fortran

#endif // FORTRAN_LOWER_OPENACC_H
