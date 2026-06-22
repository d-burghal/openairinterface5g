# SPDX-License-Identifier: LicenseRef-CSSL-1.0

add_library(radio_common STATIC
  common_lib.c
  record_player.c
  # nr_fhi_72 is compiled as common code — it has no xRAN SDK dependency;
  # the three trx_fhi_* callbacks wired by the xRAN transport_init() are
  # called through openair0_device_t function pointers at runtime.
  ${CMAKE_CURRENT_SOURCE_DIR}/../fhi_72/nr_fhi_72.c
)
target_include_directories(radio_common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(radio_common PUBLIC dl log_headers shlib_loader)
