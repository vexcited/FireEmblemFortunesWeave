This component is based in part on the work of the Independent JPEG Group.

The block encoder adapts libjpeg-turbo 1.5.0 jchuff.c.

- The coefficient traversal uses a loop in place of repeated macro expansions.
- Bit emission uses local C++ helpers with the observed 64-bit accumulator.
- The staging buffer is enlarged to 512 bytes and cleared as observed in the SDK.
- ABI declarations describe the observed working state and destination callbacks.
- Table derivation and whole-MCU transaction management remain outside this component.

Original authorship notices remain in the source. The original distribution conditions are preserved in README.ijg.
