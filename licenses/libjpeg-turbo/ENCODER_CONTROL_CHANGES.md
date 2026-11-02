This component is based in part on the work of the Independent JPEG Group.

The encoder control routines adapt libjpeg-turbo 1.5.0 jchuff.c and jerror.h, with the natural-order table from jutils.c.

- SDK symbol names and observed structure offsets replace upstream ABI declarations.
- The block encoder and Huffman-table allocator use the recovered components.
- Output staging uses the observed 512-byte buffers and initialization.
- The derived-table size workspace is cleared as observed in the SDK.
- SIMD capability and SIMD block encoding remain external interfaces.
- Source fragments are combined into one C++ file with repository formatting.

Original authorship notices remain in the source. The original distribution conditions are preserved in README.ijg.
