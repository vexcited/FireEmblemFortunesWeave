#include <algorithm>

#include "game/data/data_files.hpp"

namespace game {

// Rows with an order are kept sorted by it, the others are never supplied.
void Part2SuppliedLegionFile::OnBuild() {
  for (Part2SuppliedLegionData* data : GetInstance()->GetItems()) {
    if (data->order != 0) {
      [[clang::always_inline]] ordered_.push_back(data);
    }
  }

  std::stable_sort(ordered_.begin(), ordered_.end(), [](
    const Part2SuppliedLegionData* left,
    const Part2SuppliedLegionData* right
  ) {
    return left->order < right->order;
  });
}

template Part2SuppliedLegionFile* Singleton<Part2SuppliedLegionFile>::Create();

}
