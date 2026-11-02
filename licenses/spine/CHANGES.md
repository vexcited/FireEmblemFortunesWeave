The JSON reader in `src/spine/json.cpp` adapts the Spine C++ 4.1 reader.
Its original permissive license is retained in `JSON_LICENSE`.
The class declarations and allocation interface are adapted from Spine C++ 4.1.
Their license is retained in `LICENSE`.

The reconstruction uses the observed 56-byte JSON layout and extension callbacks.
Allocation diagnostics retain the original file names and line numbers.
Number conversion uses the observed AArch64 signed conversion instruction.
Unused platform paths and optional sibling links are omitted.
