#pragma GCC visibility push(hidden)
#include "game/proc/proc_singleton.hpp"
#include "ui/animation_accessor.hpp"
#include "ui/layout.hpp"
#include "ui/layout_accessor.hpp"
#pragma GCC visibility pop

#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace game::gameui {

// Key animations the footer still has to bring to their end.
[[gnu::visibility("hidden")]] extern std::vector<const char*>
  footer_animations_;
std::vector<const char*> footer_animations_;

namespace {

// The layout texts are narrow strings although the helpers declare them as
// wide ones.
const char16_t* Text(const char* text) {
  return reinterpret_cast<const char16_t*>(text);
}

// A process showing one layout of the common archive.
template<typename T>
class ProcImpl : public ProcSingleton<T> {
public:
  ~ProcImpl() override {
    CloseLayout();
  }

  [[gnu::used]] void LoadLayout() {
    layout_ = ui::Layout::Load(Unknown18(), Unknown19());
  }

  [[gnu::used]] void CloseLayout() {
    if (layout_ != nullptr) {
      layout_->SetReleased();
    }
    layout_.reset();
    accessor_.Reset();
  }

  void Unknown02() override {
    if (!accessor_.IsVisible()) {
      return;
    }
    if (animation_.GetName() == "Out" && animation_.IsFinished()) {
      Unknown22();
      animation_.Stop();
      accessor_.SetVisible(false);
    }
    else {
      Unknown21();
    }
  }

  virtual const char* Unknown18() = 0;
  virtual const char* Unknown19() = 0;
  virtual void Unknown20() = 0;
  virtual void Unknown21() = 0;
  virtual void Unknown22() = 0;

protected:
  std::shared_ptr<ui::Layout> layout_;
  ui::LayoutAccessor accessor_;
  ui::AnimationAccessor animation_;
  std::function<void()> callback_;
};

class ProcHeader : public ProcImpl<ProcHeader> {
public:
  ProcHeader();

  const char* Unknown18() override { return "Layout/Common.arc"; }
  const char* Unknown19() override { return "Common_Header"; }

  void Unknown20() override {
    if (nn::ui2d::TextBox* box = accessor_.FindTextBox("T_Title")) {
      ui::SetTextBoxString(box, Text(" "), false);
    }
    if (nn::ui2d::TextBox* box = accessor_.FindTextBox("T_Help")) {
      ui::SetTextBoxString(box, Text(" "), false);
    }
  }

  void Unknown21() override;
  void Unknown22() override {}

private:
  struct Key {
    uint64_t unknown_00_;
    std::weak_ptr<ui::LayoutAccessor> part;
    uint64_t unknown_18_;
    std::function<void()> callback;
    uint8_t unknown_50_[0x10];
  };

  std::string title_;
  std::string help_;
  uint8_t unknown_220_[0x10];
  Key keys_[8];
};

static_assert(sizeof(ProcHeader) == 0x530);

[[gnu::used]] ProcHeader::ProcHeader() = default;

template class ProcImpl<ProcHeader>;

class ProcFooter : public ProcImpl<ProcFooter> {
public:
  ProcFooter();

  const char* Unknown18() override { return "Layout/Common.arc"; }
  const char* Unknown19() override { return "Common_Footer"; }
  void Unknown20() override {}
  void Unknown21() override {}
  void Unknown22() override;

private:
  // Part names of the shown keys.
  std::unordered_map<std::string, std::string> keys_;
};

[[gnu::used]] ProcFooter::ProcFooter() = default;

template class ProcImpl<ProcFooter>;

void ProcFooter::Unknown22() {
  for (auto& [key, name] : keys_) {
    std::shared_ptr<ui::LayoutAccessor> part =
      accessor_.GetPart(name.c_str()).lock();
    if (!part) {
      continue;
    }
    for (auto it = footer_animations_.begin();
      it != footer_animations_.end();) {
      if (!part->IsAnimationPlaying(*it, true)) {
        ++it;
        continue;
      }
      const char* animation = *it;
      part->SetAnimationFrame(animation, false,
        part->GetAnimationEndFrame(animation, false));
      part->StopAnimation(*it, false);
      it = footer_animations_.erase(it);
    }
  }
}

}

}
