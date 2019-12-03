add_llvm_library(MLIRLLHD
  DialectRegistration.cpp
  LLHD.cpp

  ADDITIONAL_HEADER_DIRS
  ${MLIR_MAIN_INCLUDE_DIR}/mlir/LLHD
  )

add_dependencies(MLIRLLHD
	MLIRLLHDIncGen
	LLVMSupport)

target_link_libraries(MLIRLLHD
	LLVMSupport)
