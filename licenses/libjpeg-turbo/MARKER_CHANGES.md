This component is based in part on the work of the Independent JPEG Group.

The marker reader adapts libjpeg-turbo 1.5.0 jdmarker.c and jerror.h, with the natural-order table from jutils.c.

- SDK export names and observed structure offsets replace upstream ABI declarations.
- Configuration enables saved markers with 8-bit samples and 16-bit quantization entries. DAC markers are skipped as observed in the SDK.
- Huffman-value and APP marker workspaces are cleared as observed in the SDK.
- The quantization-table allocator is reconstructed from the SDK callback and field store.
- The component reuses the recovered Huffman-table allocator.
- Source fragments are combined into one C++ file with repository formatting. Original authorship notices remain in the source.

The original distribution conditions are preserved in README.ijg.
