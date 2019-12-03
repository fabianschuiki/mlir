//===- LLHD.td - LLHD operation definitions ----------------*- tablegen -*-===//
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

include "mlir/IR/OpBase.td"

def LLHD_Dialect : Dialect {
  let name = "llhd";
  let cppNamespace = "llhd";
}

class LLHD_Op<string mnemonic, list<OpTrait> traits = []> :
  Op<LLHD_Dialect, mnemonic, traits>;

def ConstIntOp : LLHD_Op<"const", [NoSideEffect]> {
  let arguments = (ins APIntAttr:$value);
  let results = (outs AnyInteger);
  let summary = "constant integer operation";
  // let parser = "parseConst";
}
