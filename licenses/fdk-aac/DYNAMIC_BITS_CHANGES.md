The routines in `src/nn/codec/dynamic_bits.cpp` adapt the Fraunhofer FDK AAC encoder's section selection and dynamic bit counting.

The reference is Android's `external/aac` at commit `203e3f28fbebec7011342017fafc2a0bda0ce530`, from `libAACenc/src/dyn_bits.cpp`, `dyn_bits.h`, `aacEnc_rom.cpp`, and `bit_cnt.h`.

This modified version uses the recovered SDK namespace, section layout, lookup storage, and existing Huffman counters. It preserves greedy section merging, noise and intensity codebooks, scalefactor costs, and the syntax flag controlling escape-book side information. Allocation wrappers, assertions, and unused platform definitions are omitted. The original license is retained in `LICENSE.txt`.
