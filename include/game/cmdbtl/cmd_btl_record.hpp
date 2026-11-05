#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

// A command battle result kept for the rewind of the battle.
class CmdBtlRecord {
public:
  virtual ~CmdBtlRecord() = default;

private:
  uint64_t unknown08_;
  std::shared_ptr<void> unknown10_;
  std::shared_ptr<void> unknown20_;
};

class CmdBtlRecordManager {
public:
  virtual ~CmdBtlRecordManager();

private:
  std::vector<CmdBtlRecord> records_;
};

#pragma GCC visibility pop

}
