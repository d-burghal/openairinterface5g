#/*
# * Licensed to the EPYSYS SCIENCE (EpiSci) under one or more
# * contributor license agreements.
# * The EPYSYS SCIENCE (EpiSci) licenses this file to You under
# * the Episys Science (EpiSci) Public License (Version 1.1) (the "License"); you may not use this file
# * except in compliance with the License.
# * You may obtain a copy of the License at
# *
# *      https://github.com/EpiSci/oai-lte-5g-multi-ue-proxy/blob/master/LICENSE
# *
# * Unless required by applicable law or agreed to in writing, software
# * distributed under the License is distributed on an "AS IS" BASIS,
# * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# * See the License for the specific language governing permissions and
# * limitations under the License.
# *-------------------------------------------------------------------------------
# * For more information about EPYSYS SCIENCE (EpiSci):
# *      bo.ryu@episci.com
# */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef enum softmodem_mode_t
{
    SOFTMODEM_LTE,
    SOFTMODEM_NR,
    SOFTMODEM_NSA,
} softmodem_mode_t;

typedef struct {
  char *remote_addr;
  //! remote port number for Ethernet interface (control)
  uint16_t remote_portc;
  //! remote port number for Ethernet interface (user)
  uint16_t remote_portd;
  //! local IP/MAC addr for Ethernet interface (eNB/RAU, UE)
  char *my_addr;
  //! local port number (control) for Ethernet interface (eNB/RAU, UE)
  uint16_t  my_portc;
  //! local port number (user) for Ethernet interface (eNB/RAU, UE)
  uint16_t  my_portd;
  //! local Ethernet interface (eNB/RAU, UE)
  char *local_if_name;
  //! transport type preference  (RAW/UDP)
  uint8_t transp_preference;
  //! compression enable (0: No comp/ 1: A-LAW)
  uint8_t if_compress;
} eth_params_t;

void exit_function(const char *file, const char *function, const int line, const char *s, const int assert);

#ifdef __cplusplus
}
#endif
