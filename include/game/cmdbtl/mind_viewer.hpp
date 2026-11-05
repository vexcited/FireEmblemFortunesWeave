#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

struct MindEntry {
  uint64_t key;
  std::shared_ptr<void> value;
};

class MindBase {
public:
  virtual ~MindBase();

  virtual const void* Unknown02() const = 0;
  virtual const void* Unknown03() const = 0;

private:
  uint8_t unknown08_[0x18];
  std::weak_ptr<void> owner_;
  uint8_t unknown30_[0x10];
  std::vector<MindEntry> entries_;
};

// Resources shared by the mind viewers, the name is a guess.
struct MindResources {
  uint8_t unknown00_[0x2a0];
  uint8_t first[0x80];
  uint8_t second[0x80];
};

extern MindResources* g_mindResources;

class MindViewer : public MindBase {
public:
  ~MindViewer() override;

  const void* Unknown02() const override;
  const void* Unknown03() const override;
  virtual const void* Unknown04() const;
  virtual const void* Unknown05() const;
  virtual const void* Unknown06() const;
  virtual void Unknown07();

private:
  std::vector<uint32_t> values_;
};

#pragma GCC visibility pop

}
