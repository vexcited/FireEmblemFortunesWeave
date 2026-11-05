#pragma once

#include "nn/fs/fs_save_data_types.hpp"
#include "nn/result.hpp"

namespace nn::fs::fsa {

class ISaveDataAttributeGetter {
public:
  virtual Result GetSaveDataAttribute(SaveDataAttribute* outAttribute) = 0;
  virtual ~ISaveDataAttributeGetter() {}
};

}
