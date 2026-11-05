#pragma once

namespace nn::os {

enum MemoryPermission {
  MemoryPermission_None = 0,
  MemoryPermission_ReadOnly = 1,
  MemoryPermission_WriteOnly = 2,
  MemoryPermission_ReadWrite = 3,
};

}
