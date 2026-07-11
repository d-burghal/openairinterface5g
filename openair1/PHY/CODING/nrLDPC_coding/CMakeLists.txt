# SPDX-License-Identifier: LicenseRef-CSSL-1.0

add_subdirectory(nrLDPC_coding_segment)
add_subdirectory(nrLDPC_coding_aal)
add_boolean_option(ENABLE_LDPC_CUDA OFF "Build support for CUDA" OFF)
add_boolean_option(ENABLE_LDPC_HIP OFF "Build support for HIP (AMD ROCm)" OFF)
if (ENABLE_LDPC_CUDA AND ENABLE_LDPC_HIP)
  message(FATAL_ERROR "ENABLE_LDPC_CUDA and ENABLE_LDPC_HIP are mutually exclusive")
endif()
if (ENABLE_LDPC_CUDA OR ENABLE_LDPC_HIP)
  add_subdirectory(nrLDPC_coding_cuda)
endif()
