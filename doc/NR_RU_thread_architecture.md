# NR Radio Unit Thread Architecture

This document describes the connections between `ru_thread`, `L1_tx_thread`, `L1_rx_thread`,
`RU_t`, and `openair0_device_t` for the three southbound interface types: `LOCAL_RF`,
`REMOTE_IF5`, and `REMOTE_IF4p5`.

**Key source files:**
- `executables/nr-ru.c` — `ru_thread`, `ru_tx_func`, `set_function_spec_param()`
- `executables/nr-gnb.c` — `L1_rx_thread`, `L1_tx_thread`, `tx_func()`, `rx_func()`
- `openair1/PHY/defs_RU.h` — `RU_t`, `RU_proc_t`, `RU_if_south_t`
- `radio/COMMON/common_lib.h` — `openair0_device_t`

---

## 1. Structure Relationships

```mermaid
classDiagram
    class RU_t {
        RU_if_south_t if_south
        RU_proc_t proc
        tpool_t* threadPool
        int ru_thread_core
        openair0_device_t rfdevice
        openair0_device_t ifdevice
        openair0_config_t openair0_cfg
        eth_params_t eth_params
        notifiedFIFO_t* respfeprx
        notifiedFIFO_t* respfeptx
        fh_south_in()
        fh_south_out()
        feprx()
        feptx_ofdm()
        feptx_prec()
        start_rf()
        nr_start_if()
    }

    class RU_proc_t {
        pthread_t pthread_FH
        int frame_rx
        int tti_rx
        int frame_tx
        int tti_tx
        openair0_timestamp_t timestamp_rx
        openair0_timestamp_t timestamp_tx
    }

    class openair0_device_t {
        dev_type_t type
        transport_type_t transp_type
        host_type_t host_type
        openair0_config_t* openair0_cfg
        eth_params_t* eth_params
        trx_start_func()
        trx_read_func()
        trx_write_func()
        get_internal_parameter()
    }

    class PHY_VARS_gNB {
        pthread_t L1_rx_thread
        pthread_t L1_tx_thread
        int L1_rx_thread_core
        int L1_tx_thread_core
        notifiedFIFO_t resp_L1
        notifiedFIFO_t L1_tx_out
        notifiedFIFO_t L1_rx_out
    }

    RU_t *-- RU_proc_t : proc
    RU_t *-- openair0_device_t : rfdevice\n(LOCAL_RF)
    RU_t *-- openair0_device_t : ifdevice\n(IF5 / IF4p5)
    RU_t ..> PHY_VARS_gNB : accesses RC.gNB[0]\nfor FIFO signaling
    RU_proc_t ..> ru_thread : pthread_FH runs
    PHY_VARS_gNB ..> L1_rx_thread : pthread runs
    PHY_VARS_gNB ..> L1_tx_thread : pthread runs
```

---

## 2. Notification FIFOs (common to all interface types)

Three `notifiedFIFO_t` queues inside `PHY_VARS_gNB` coordinate the three threads:

| FIFO | Producer | Consumer | Purpose |
|------|----------|----------|---------|
| `L1_tx_out` | `ru_thread` | `L1_tx_thread` | Trigger TX slot processing |
| `resp_L1` | `L1_tx_thread` (inside `tx_func`) | `L1_rx_thread` | Trigger RX slot processing |
| `L1_rx_out` | `L1_rx_thread` (inside `rx_func`) | `ru_thread` | Backpressure: signal RX slot done |

---

## 3. LOCAL_RF

**Concept:** Integrated RF — the gNB controls the radio hardware directly.  
Both DFT/IDFT and RF I/O happen locally.

**Function pointer assignments** (`set_function_spec_param`, `nr-ru.c:895`):

| Pointer | Value |
|---------|-------|
| `fh_south_in` | `rx_rf` |
| `fh_south_out` | `tx_rf` |
| `feprx` | `nr_fep_tp` (DFT + frequency shift) |
| `feptx_ofdm` | `nr_feptx_tp` (IDFT + precoding) |
| `feptx_prec` | `NULL` |
| `nr_start_if` | `NULL` |
| `start_rf` | `start_rf` |
| Device used | `rfdevice` |

```mermaid
flowchart TD
    subgraph HW["RF Hardware (e.g. USRP/RFsim)"]
        ANT_RX([Antenna RX])
        ANT_TX([Antenna TX])
    end

    subgraph DEV["openair0_device_t  rfdevice"]
        TRX_R["trx_read_func()"]
        TRX_W["trx_write_func()"]
    end

    subgraph RU["RU_t  (ru_thread — executables/nr-ru.c:611)"]
        FH_IN["fh_south_in = rx_rf\nread IQ samples from rfdevice"]
        FEPRX["feprx = nr_fep_tp\nDFT + frequency shift\n→ rxdataF[]"]
        TX_PUSH["push L1_tx_out\n(frame_tx, slot_tx, timestamp_tx)"]
        RX_WAIT["wait_free_rx_tti\n← L1_rx_out backpressure"]
    end

    subgraph FIFO_TX["gNB->L1_tx_out"]
        Q_TX[["notifiedFIFO_t"]]
    end

    subgraph L1TX["L1_tx_thread — executables/nr-gnb.c:130"]
        TX_FUNC["tx_func()\nMAC scheduling\nphy_procedures_gNB_TX\n+ push resp_L1"]
        RU_TX["ru_tx_func()\nfeptx_ofdm = nr_feptx_tp (IDFT)\nfh_south_out = tx_rf"]
    end

    subgraph FIFO_RX["gNB->resp_L1"]
        Q_RX[["notifiedFIFO_t"]]
    end

    subgraph FIFO_RXOUT["gNB->L1_rx_out"]
        Q_RXOUT[["notifiedFIFO_t"]]
    end

    subgraph L1RX["L1_rx_thread — executables/nr-gnb.c:113"]
        RX_FUNC["rx_func()\nUL signal processing\npush L1_rx_out when done"]
    end

    ANT_RX -->|time-domain IQ| TRX_R
    TRX_R --> FH_IN
    FH_IN --> RX_WAIT
    RX_WAIT --> FEPRX
    FEPRX --> TX_PUSH
    TX_PUSH --> Q_TX
    Q_TX -->|pull| TX_FUNC
    TX_FUNC --> RU_TX
    TX_FUNC -->|push| Q_RX
    RU_TX -->|time-domain IQ| TRX_W
    TRX_W --> ANT_TX
    Q_RX -->|pull| RX_FUNC
    RX_FUNC -->|push| Q_RXOUT
    Q_RXOUT -->|backpressure| RX_WAIT
```

---

## 4. REMOTE_IF5

**Concept:** Frequency-domain fronthaul (split 7 / CPRI IF5). IQ samples in the frequency
domain are transported over Ethernet. DFT/IDFT still runs locally on the RAU/gNB side.

**Function pointer assignments** (`set_function_spec_param`, `nr-ru.c:913`):

| Pointer | Value |
|---------|-------|
| `fh_south_in` | `fh_if5_south_in` |
| `fh_south_out` | `fh_if5_south_out` |
| `feprx` | `nr_fep_tp` (DFT + frequency shift) |
| `feptx_ofdm` | `nr_feptx_tp` (IDFT + precoding) |
| `feptx_prec` | `NULL` |
| `nr_start_if` | `nr_start_if` |
| `start_rf` | `start_streaming` (UDP/eCPRI) or `NULL` |
| Device used | `ifdevice` (Ethernet transport) |

```mermaid
flowchart TD
    subgraph NET["Network (Ethernet — IF5 / eCPRI)"]
        ETH_RX([Packet RX])
        ETH_TX([Packet TX])
    end

    subgraph DEV["openair0_device_t  ifdevice"]
        TRX_R["trx_read_func()\n(Ethernet driver)"]
        TRX_W["trx_write_func()\n(Ethernet driver)"]
        START_IF["nr_start_if()\nopenair0_transport_load()"]
    end

    subgraph RU["RU_t  (ru_thread — executables/nr-ru.c:611)"]
        FH_IN["fh_south_in = fh_if5_south_in\nread freq-domain IQ from ifdevice"]
        FEPRX["feprx = nr_fep_tp\nDFT + frequency shift\n→ rxdataF[]"]
        TX_PUSH["push L1_tx_out\n(frame_tx, slot_tx, timestamp_tx)"]
        RX_WAIT["wait_free_rx_tti\n← L1_rx_out backpressure"]
    end

    subgraph FIFO_TX["gNB->L1_tx_out"]
        Q_TX[["notifiedFIFO_t"]]
    end

    subgraph L1TX["L1_tx_thread — executables/nr-gnb.c:130"]
        TX_FUNC["tx_func()\nMAC scheduling\nphy_procedures_gNB_TX\n+ push resp_L1"]
        RU_TX["ru_tx_func()\nfeptx_ofdm = nr_feptx_tp (IDFT)\nfh_south_out = fh_if5_south_out"]
    end

    subgraph FIFO_RX["gNB->resp_L1"]
        Q_RX[["notifiedFIFO_t"]]
    end

    subgraph FIFO_RXOUT["gNB->L1_rx_out"]
        Q_RXOUT[["notifiedFIFO_t"]]
    end

    subgraph L1RX["L1_rx_thread — executables/nr-gnb.c:113"]
        RX_FUNC["rx_func()\nUL signal processing\npush L1_rx_out when done"]
    end

    ETH_RX -->|freq-domain IQ packets| TRX_R
    TRX_R --> FH_IN
    FH_IN --> RX_WAIT
    RX_WAIT --> FEPRX
    FEPRX --> TX_PUSH
    TX_PUSH --> Q_TX
    Q_TX -->|pull| TX_FUNC
    TX_FUNC --> RU_TX
    TX_FUNC -->|push| Q_RX
    RU_TX -->|freq-domain IQ packets| TRX_W
    TRX_W --> ETH_TX
    Q_RX -->|pull| RX_FUNC
    RX_FUNC -->|push| Q_RXOUT
    Q_RXOUT -->|backpressure| RX_WAIT
```

---

## 5. REMOTE_IF4p5

**Concept:** Time-domain fronthaul (split 7.2 / CPRI IF4p5). Raw time-domain IQ samples are
transported over Ethernet. DFT/IDFT is **not** performed by the RU — only precoding runs
locally. The fronthaul functions (`fh_south_in`/`fh_south_out`) are initially `NULL` and are
injected at runtime by the transport plugin via `ifdevice.get_internal_parameter()` (see
`nr-ru.c:647–652`).

No `threadPool` or `respfeprx`/`respfeptx` FIFOs are created for this interface type
(`nr-ru.c:1008`).

**Function pointer assignments** (`set_function_spec_param`, `nr-ru.c:930`):

| Pointer | Value |
|---------|-------|
| `fh_south_in` | `NULL` → overridden by transport plugin (`fh_if4p5_south_in`) |
| `fh_south_out` | `NULL` → overridden by transport plugin (`fh_if4p5_south_out`) |
| `feprx` | `NULL` (no DFT in RU) |
| `feptx_ofdm` | `NULL` (no IDFT in RU) |
| `feptx_prec` | `nr_feptx_prec` (precoding only) |
| `nr_start_if` | `nr_start_if` |
| `start_rf` | `NULL` (no local RF) |
| Device used | `ifdevice` (Ethernet transport) |

```mermaid
flowchart TD
    subgraph NET["Network (Ethernet — IF4p5 / CPRI)"]
        ETH_RX([Packet RX])
        ETH_TX([Packet TX])
    end

    subgraph DEV["openair0_device_t  ifdevice"]
        TRX_R["fh_if4p5_south_in\n(injected via get_internal_parameter)"]
        TRX_W["fh_if4p5_south_out\n(injected via get_internal_parameter)"]
        START_IF["nr_start_if()\nopenair0_transport_load()"]
    end

    subgraph RU["RU_t  (ru_thread — executables/nr-ru.c:611)"]
        FH_IN["fh_south_in\n(plugin-provided: fh_if4p5_south_in)\nread time-domain IQ from ifdevice"]
        FEPRX["feprx = NULL\n(DFT skipped — done by remote RU)"]
        TX_PUSH["push L1_tx_out\n(frame_tx, slot_tx, timestamp_tx)"]
        RX_WAIT["wait_free_rx_tti\n← L1_rx_out backpressure"]
    end

    subgraph FIFO_TX["gNB->L1_tx_out"]
        Q_TX[["notifiedFIFO_t"]]
    end

    subgraph L1TX["L1_tx_thread — executables/nr-gnb.c:130"]
        TX_FUNC["tx_func()\nMAC scheduling\nphy_procedures_gNB_TX\n+ push resp_L1"]
        RU_TX["ru_tx_func()\nfeptx_prec = nr_feptx_prec (precoding only)\nfeptx_ofdm = NULL\nfh_south_out = plugin-provided"]
    end

    subgraph FIFO_RX["gNB->resp_L1"]
        Q_RX[["notifiedFIFO_t"]]
    end

    subgraph FIFO_RXOUT["gNB->L1_rx_out"]
        Q_RXOUT[["notifiedFIFO_t"]]
    end

    subgraph L1RX["L1_rx_thread — executables/nr-gnb.c:113"]
        RX_FUNC["rx_func()\nUL signal processing\n(receives time-domain IQ, does DFT)\npush L1_rx_out when done"]
    end

    ETH_RX -->|time-domain IQ packets| TRX_R
    TRX_R --> FH_IN
    FH_IN --> RX_WAIT
    RX_WAIT --> FEPRX
    FEPRX --> TX_PUSH
    TX_PUSH --> Q_TX
    Q_TX -->|pull| TX_FUNC
    TX_FUNC --> RU_TX
    TX_FUNC -->|push| Q_RX
    RU_TX -->|time-domain IQ + precoding| TRX_W
    TRX_W --> ETH_TX
    Q_RX -->|pull| RX_FUNC
    RX_FUNC -->|push| Q_RXOUT
    Q_RXOUT -->|backpressure| RX_WAIT
```

---

## 6. Comparison Table

| Feature | LOCAL_RF | REMOTE_IF5 | REMOTE_IF4p5 |
|---------|----------|------------|--------------|
| Device used | `rfdevice` | `ifdevice` | `ifdevice` |
| Transport | Local RF (USRP, …) | Ethernet (IF5/eCPRI) | Ethernet (IF4p5/CPRI) |
| `fh_south_in` | `rx_rf` | `fh_if5_south_in` | Plugin-provided (`fh_if4p5_south_in`) |
| `fh_south_out` | `tx_rf` | `fh_if5_south_out` | Plugin-provided (`fh_if4p5_south_out`) |
| `feprx` | `nr_fep_tp` (DFT) | `nr_fep_tp` (DFT) | `NULL` |
| `feptx_ofdm` | `nr_feptx_tp` (IDFT) | `nr_feptx_tp` (IDFT) | `NULL` |
| `feptx_prec` | `NULL` | `NULL` | `nr_feptx_prec` |
| Time-domain buffers | Allocated | Allocated | Not allocated |
| `threadPool` / FEP FIFOs | Yes | Yes | No |
| `nr_start_if` | `NULL` | `nr_start_if` | `nr_start_if` |
| `start_rf` | `start_rf` | `start_streaming` or `NULL` | `NULL` |
| IQ domain at fronthaul | Time-domain | Frequency-domain | Time-domain |
| DFT/IDFT location | RAU (gNB side) | RAU (gNB side) | Remote RU (split) |
