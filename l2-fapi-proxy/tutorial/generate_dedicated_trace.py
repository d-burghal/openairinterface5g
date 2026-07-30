#!/usr/bin/env python3
"""
Generate a channel trace CSV that forces deterministic UE→gNB mapping.

Each UE is assigned to exactly one gNB. The target gNB (UE x → gNB x) gets a
strong RSRP of (-50 - x) dBm (so UE0 gets -50, UE1 gets -51, UE2 gets -52, ...)
while all other gNBs get a weak RSRP (default -100 dBm). This ensures the UE's
cell selection algorithm picks the intended gNB.

Output format (8 fields, matches the proxy parser in nfapi_pnf.c):
    UE_ID,Trace_Index,RSSI_dBm,SINR_dB,RSRP_dBm,gnb_id,time_index,gnb_name

The proxy's apply_ch_trace_to_ue_info() updates measurements[gnb_id] for each
trace row, so we emit one row per gNB per UE per iteration to explicitly set
every gNB's RSRP — strong for the target, weak for all others.

Usage:
    python3 generate_dedicated_trace.py --num-ue 4 --num-gnb 2 -o channel_trace.csv
    # UE0→gNB0, UE1→gNB1, UE2→gNB0, UE3→gNB1 (wraps around)

    python3 generate_dedicated_trace.py --num-ue 4 --num-gnb 4 -o channel_trace.csv
    # UE0→gNB0, UE1→gNB1, UE2→gNB2, UE3→gNB3 (1:1 mapping)
"""

import argparse
import sys


def main():
    parser = argparse.ArgumentParser(
        description='Generate channel trace CSV with deterministic UE→gNB mapping')
    parser.add_argument('--output', '-o', default='channel_trace.csv',
                        help='Output CSV file (default: channel_trace.csv)')
    parser.add_argument('--num-ue', '-u', type=int, default=4,
                        help='Number of UEs (default: 4)')
    parser.add_argument('--num-gnb', '-g', type=int, default=2,
                        help='Number of gNBs (default: 2)')
    parser.add_argument('--num-iterations', '-n', type=int, default=100,
                        help='Number of trace iterations/rows per UE (default: 100)')
    parser.add_argument('--strong-rsrp-base', type=float, default=-50.0,
                        help='Base RSRP for the target gNB in dBm. '
                             'UE x gets (base - x), so UE0=-50, UE1=-51, etc. '
                             '(default: -50)')
    parser.add_argument('--weak-rsrp', type=float, default=-100.0,
                        help='RSRP for non-target gNBs in dBm (default: -100)')
    parser.add_argument('--strong-sinr', type=float, default=30.0,
                        help='SINR for the target gNB in dB (default: 30)')
    parser.add_argument('--weak-sinr', type=float, default=-10.0,
                        help='SINR for non-target gNBs in dB (default: -10)')
    parser.add_argument('--no-header', action='store_true',
                        help='Omit CSV header line (parser now skips it, but '
                             'use this if running with an older proxy binary)')

    args = parser.parse_args()

    if args.num_gnb > 8:
        print(f"Error: num_gnb ({args.num_gnb}) exceeds MAX_GNBS (8) in the proxy",
              file=sys.stderr)
        sys.exit(1)

    # Assign each UE to a gNB: UE0→gNB0, UE1→gNB1, ... wraps around
    ue_to_gnb = [i % args.num_gnb for i in range(args.num_ue)]

    print(f"UE→gNB mapping:")
    for ue_id, gnb_id in enumerate(ue_to_gnb):
        print(f"  UE{ue_id} → gNB{gnb_id}")

    with open(args.output, 'w') as f:
        if not args.no_header:
            f.write("UE_ID,Trace_Index,RSSI_dBm,SINR_dB,RSRP_dBm,gnb_id,time_index,gnb_name\n")

        total_rows = 0
        for iter_idx in range(args.num_iterations):
            trace_idx = iter_idx + 1  # 1-based like the other script
            for ue_id in range(args.num_ue):
                target_gnb = ue_to_gnb[ue_id]
                for gnb_id in range(args.num_gnb):
                    if gnb_id == target_gnb:
                        rsrp = args.strong_rsrp_base - ue_id
                        sinr = args.strong_sinr
                        rssi = rsrp + 20  # RSSI typically ~20 dB above RSRP
                    else:
                        rsrp = args.weak_rsrp
                        sinr = args.weak_sinr
                        rssi = args.weak_rsrp + 20

                    gnb_name = f"gnb{gnb_id}"
                    f.write(f"{ue_id},{trace_idx},{rssi:.1f},{sinr:.1f},{rsrp:.1f},{gnb_id},{iter_idx},{gnb_name}\n")
                    total_rows += 1

    print(f"\nWrote {total_rows} trace rows to {args.output}")
    print(f"  {args.num_ue} UEs × {args.num_gnb} gNBs × {args.num_iterations} iterations")
    print(f"  = {args.num_ue * args.num_gnb * args.num_iterations} rows")
    print(f"\nSample (first 4 rows):")
    with open(args.output, 'r') as f:
        for i, line in enumerate(f):
            if i >= 4:
                break
            print(f"  {line.rstrip()}")


if __name__ == "__main__":
    main()
