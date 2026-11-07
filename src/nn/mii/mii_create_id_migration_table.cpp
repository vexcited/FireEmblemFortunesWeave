#include "nn/mii/mii_create_id_migration_table.hpp"

#include "nn/mii/mii_utility.hpp"

namespace nn::mii {

CreateIdMigrationTable::CreateIdMigrationTable() {
  detail::UtilityImpl utility;
  for (int i = 0; i < CountMax; i++) {
    utility.MakeInvalidCreateId(&m_From[i]);
    utility.MakeInvalidCreateId(&m_To[i]);
  }
  m_Count = 0;
}

bool CreateIdMigrationTable::GetCreateId(CreateId* pOutId,
  const CreateId& id) const {
  for (int i = 0; i < m_Count; i++) {
    if (id == m_From[i]) {
      *pOutId = m_To[i];
      return true;
    }
  }
  return false;
}

void CreateIdMigrationTable::AddCreateId(const CreateId& from,
  const CreateId& to) {
  m_From[m_Count] = from;
  m_To[m_Count] = to;
  m_Count++;
}

}
