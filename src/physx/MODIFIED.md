# Modifications

The middleware build in the game passes different `__LINE__` values to the PhysX error reporting in four files. Aligned instructions of paired functions give the original line for each reporting call, so blank lines were inserted or removed to reproduce them. No code changed.

| File | Before upstream line | Lines |
| --- | --- | --- |
| `source/physx/src/NpScene.cpp` | 295 | 2 inserted |
| `source/physx/src/NpScene.cpp` | 3210 | 11 inserted |
| `source/physx/src/NpScene.cpp` | 4288 | 5 blank lines removed |
| `source/simulationcontroller/src/ScScene.cpp` | 1757 | 7 blank lines removed |
| `source/physx/src/NpArticulationJointReducedCoordinate.cpp` | 82 | 1 blank line removed |
| `source/physx/src/NpSceneFetchResults.cpp` | 132 | 8 blank lines removed |
| `source/physx/src/NpSceneFetchResults.cpp` | 487 | 6 inserted |

The exact places of these changes inside each gap between observed lines are not known. Each edit sits just before the first reporting call whose line moves. See `Private/docs/library-lto.md`.
