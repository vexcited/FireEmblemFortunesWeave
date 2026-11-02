This component is based in part on the work of the Independent JPEG Group.

The color deconverter adapts libjpeg-turbo 1.5.0 jdcolor.c, jdcolext.c, and jdcol565.c.

- SDK export names and observed structure offsets replace the upstream ABI declarations.
- The color conversion include fragments are combined into one C++ source file.
- Configuration selects 8-bit samples and the target's little-endian byte order.
- Original authorship notices remain with the source. The source uses the repository's formatting.
- The row-copy dependency is reconstructed from the SDK loop and imported memcpy calls.

The original distribution conditions are preserved in README.ijg.

Unused big-endian implementations and runtime endian selection were removed. The recovered target uses little-endian RGB565 packing.
