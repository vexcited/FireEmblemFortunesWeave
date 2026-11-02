This component is based in part on the work of the Independent JPEG Group.

The baseline Huffman decoder adapts libjpeg-turbo 1.5.0 jdhuff.c, jdhuff.h, jstdhuff.c, and the natural-order table from jutils.c.

- ABI declarations use observed SDK offsets and integer widths.
- Export declarations retain the SDK symbol names.
- Configuration selects 8-bit samples and a 64-bit bit buffer.
- Huffman derivation workspaces are cleared as observed in the SDK.
- The Huffman-table allocator is reconstructed from the SDK callback and field store.
- Source fragments are combined into one C++ file with repository formatting. Original authorship notices remain in the source.

The original distribution conditions are preserved in README.ijg.
