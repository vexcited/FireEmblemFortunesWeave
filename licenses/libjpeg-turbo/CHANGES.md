This component is based in part on the work of the Independent JPEG Group.

The transform implementations adapt libjpeg-turbo 1.5.0. The original source files are jfdctint.c, jfdctfst.c, jfdctflt.c, jidctint.c, jidctfst.c, jidctflt.c, and jidctred.c.

- Export names use the SDK's nndetailImageJpeg prefix.
- The configuration retains scalar transforms for 8-bit samples and scaled inverse transforms.
- ABI declarations use observed SDK offsets and explicit integer widths. Unknown structure fields remain unnamed byte storage.
- Workspace arrays are explicitly cleared to match the SDK instructions.
- The sources use C++ declarations and the repository's formatting.
- Unused configuration branches and explanatory comments were removed. Authorship notices remain with each implementation.

The original distribution conditions are preserved in README.ijg.
