#include "game/data/data_files.hpp"

namespace game {

// Link time optimization dropped the store to the unread registered word.
template<>
Singleton<GrowthListFile>::~Singleton() {
  if (instance_ == this) {
    instance_ = nullptr;
  }
}

// The arrays own a buffer at 0x18 that the unload does not free.
GrowthListFile::~GrowthListFile() {
  const int count = GetInstance()->GetItemCount();

  for (int i = 0; i < count; i++) {
    GrowthListArray* array = GetInstance()->At(i);

    if (array->unknown_18 != nullptr) {
      operator delete(array->unknown_18);
      array->unknown_18 = nullptr;
    }
  }

  GetInstance()->Unload();
}

template GrowthListFile* Singleton<GrowthListFile>::Create();

}
