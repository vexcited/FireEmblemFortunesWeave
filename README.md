## Disclaimer

No game files are included, and none ever will be. You need your own copy of Fire Emblem Fortune's Weave, dumped from your own console. Instructions for obtaining those files will not be provided.

## Progress

Progress counts behavior-verified bytes, not byte-matching ones: nothing is byte matched yet. Each rebuilt function runs side by side with the original in an emulator, and only the instructions of the original those runs exercised, with identical results, earn credit.

Verification needs the game files, so it only runs locally. The committed ledger under `data/` lists each function by module, address, credited size, status, source and name, next to the text size and function count of each module.

## 3rd party libraries

The game and its SDK statically link open-source libraries. Their upstream sources are kept unmodified under `src` with their own licenses, except where a `MODIFIED.md` file describes the changes needed to reproduce the shipped build.

| Directory              | Library                                     | License                         |
| ---------------------- | ------------------------------------------- | ------------------------------- |
| `src/physx`            | NVIDIA PhysX 5.6.0                          | BSD 3-Clause                    |
| `src/angelscript`      | AngelScript 2.35.0                          | zlib                            |
| `src/spine-cpp`        | Spine C++ runtime 4.1                       | Spine Runtimes License          |
| `src/recastnavigation` | Recast Navigation 1.6.0                     | zlib                            |
| `src/fdk-aac`          | Fraunhofer FDK AAC, AOSP 7.1.1, modified    | FDK AAC license                 |
| `src/opus`             | Opus 1.3.1                                  | BSD 3-Clause                    |
| `src/libpng`           | libpng 1.6.37                               | libpng license                  |
| `src/libjpeg-turbo`    | libjpeg-turbo 1.5.0                         | IJG and BSD                     |
| `src/zlib`             | zlib 1.3.1                                  | zlib                            |
| `src/ne10`             | Ne10 1.2.1                                  | BSD 3-Clause                    |
| `src/musl`             | musl 1.1.19                                 | MIT                             |
| `src/llvm-libcxx`      | LLVM libc++, libc++abi and libunwind 18.1.8 | Apache 2.0 with LLVM exceptions |
| `src/llvm-libcxx-21`   | LLVM libc++ 21.1.8 template headers         | Apache 2.0 with LLVM exceptions |
| `src/libwebm`          | libwebm 1.0.0.29 Matroska parser            | BSD 3-Clause                    |
| `src/nandroid`         | AOSP `android-10.0.0_r47` media, modified   | Apache 2.0                      |
