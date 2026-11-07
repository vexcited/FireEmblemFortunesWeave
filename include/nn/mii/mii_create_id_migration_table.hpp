#pragma once

#include "nn/mii/core_data.hpp"

namespace nn::mii {

class CreateIdMigrationTable {
 public:
  static constexpr int CountMax = 100;

  CreateIdMigrationTable();

  bool GetCreateId(CreateId* pOutId, const CreateId& id) const;
  void AddCreateId(const CreateId& from, const CreateId& to);

 private:
  CreateId m_From[CountMax];
  CreateId m_To[CountMax];
  int m_Count;
};

}
