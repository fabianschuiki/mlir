// =============================================================================
//
// Copyright 2019 The MLIR Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// =============================================================================

#ifndef MLIR_LLHD_H_
#define MLIR_LLHD_H_

#include "mlir/IR/Attributes.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"

namespace mlir {
namespace llhd {

class LLHDDialect : public Dialect {
public:
  explicit LLHDDialect(MLIRContext *context);
  static StringRef getDialectNamespace() { return "llhd"; }
};

#define GET_OP_CLASSES
#include "mlir/Dialect/LLHD/LLHD.h.inc"

} // end namespace loop
} // end namespace mlir

#endif // MLIR_LOOPOPS_OPS_H_
