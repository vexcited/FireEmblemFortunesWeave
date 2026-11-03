The routines in `src/nn/codec/aac_huffman.cpp` adapt the Fraunhofer FDK AAC encoder's spectral Huffman coding and bit counting.

The reference is Android's `external/aac` at commit `203e3f28fbebec7011342017fafc2a0bda0ce530`, from `libAACenc/src/bit_cnt.cpp`, `bit_cnt.h`, `aacEnc_rom.cpp`, and `libFDK/include/FDK_bitstream.h`.

This modified version uses the recovered SDK namespace, integer widths, bitstream layout, and bit-buffer writer. It preserves the observed unsigned scalefactor range check. Assertions and unused platform definitions are omitted. The original license is retained in `LICENSE.txt`.
