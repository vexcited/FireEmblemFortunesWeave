#include <stddef.h>
#include <stdint.h>

#include <functional>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "game/interpolator.hpp"
#include "game/map/map_object.hpp"
#include "game/map/map_singletons.hpp"
#include "game/proc/proc_inst.hpp"
#include "game/singleton.hpp"

namespace wld {

uint32_t Crc32(uint32_t seed, const char* data, size_t size);

template<typename T>
uint32_t GetModuleType() {
  static const uint32_t type =
    Crc32(0, T::kTypeName, sizeof(T::kTypeName) - 1);
  return type;
}

class Module {};

class Collision {
public:
  void SetEnable(bool enable) {
    enable_ = enable;
  }

private:
  uint8_t unknown_00_[0xb8];
  bool enable_;
};

class Node {
public:
  bool IsActive() const {
    return enabled_ && visible_;
  }

  // Hidden nodes and nodes under a kind 1 or 3 node are not drawn.
  bool IsDrawable() const {
    if (!IsActive()) {
      return false;
    }
    for (const Node* node = this;;) {
      if ((node->kind_ & ~2) == 1) {
        return false;
      }
      node = node->parent_;
      if (node == nullptr) {
        return true;
      }
      if (!node->IsActive()) {
        return false;
      }
    }
  }

  void SetVisible(bool visible) {
    if (visible_ != visible) {
      visible_ = visible;
    }
  }

  template<typename T>
  T* GetModule() const {
    const uint32_t type = GetModuleType<T>();
    for (auto it = modules_.rbegin(); it != modules_.rend(); ++it) {
      if (it->first == type) {
        return static_cast<T*>(it->second);
      }
    }
    return nullptr;
  }

private:
  uint8_t unknown_000_[0x120];
  bool visible_;
  bool enabled_;
  uint8_t unknown_122_[0xa];
  uint8_t kind_;
  uint8_t unknown_12d_[0xcb];
  std::vector<std::pair<uint32_t, Module*>> modules_;
  uint8_t unknown_210_[0xd0];
  Node* parent_;
};

class Model : public Node {
public:
  std::weak_ptr<Collision> GetCollision() const;
};

class MapAnimModule : public Module {
public:
  static constexpr char kTypeName[] = "MapAnimModule";

  bool IsPlaying(int layer) const;
  void Play(const char* name, size_t length, int layer, float blend);
  void SetSpeed(int layer, float speed);
  void SetFrame(int layer, float frame);
  void PlayFirst();
  void PlayLast();
};

class EffectModule : public Module {
public:
  static constexpr char kTypeName[] = "EffectModule";

  void Request(int request, float fade) {
    request_ = request;
    requested_ = true;
    fade_in_ = fade;
    fade_out_ = fade;
  }

  const Node* GetNode() const {
    return node_;
  }

  void Apply(int state);

private:
  void* unknown_00_;
  Node* node_;
  uint8_t unknown_10_[0x38];
  bool requested_;
  float fade_in_;
  float fade_out_;
  int request_;
};

}

namespace game {

namespace graphics {

class ObjectTransparentModule : public wld::Module {
public:
  static constexpr char kTypeName[] = "ObjectTransparentModule";

  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();
  virtual void Unknown05();
  virtual void Unknown06();
  virtual void Unknown07();
  virtual void Unknown08();
  virtual void Unknown09();
  virtual void SetAlpha(float alpha);
};

}

#pragma GCC visibility push(hidden)

namespace graphics {

class ObjectTransparentEntry {
public:
  void Activate() {
    if (enabled_ == 0 || !active_) {
      active_ = true;
      enabled_ = 1;
      Refresh();
    }
  }

  void Refresh();

private:
  uint8_t unknown_00_[0x32];
  bool active_;
  uint8_t enabled_;
};

class ObjectTransparent : public Singleton<ObjectTransparent> {
public:
  ObjectTransparentEntry* Find(const wld::Model* model) const;
};

}

namespace map {

class MapObjectModule : public wld::Module {
public:
  static constexpr char kTypeName[] = "MapObjectModule";

  bool HasParts() const {
    return static_cast<int>(parts_.size()) > 0;
  }

private:
  uint8_t unknown_00_[0x80];
  std::vector<std::string> parts_;
};

class ObjectInfo {
public:
  void Play(ObjectInfoState state, wld::Model* model) const;
  void Apply(ObjectInfoState state, wld::Model* model) const;

  const void* Find(int key) const {
    const auto it = table_->find(key);
    return it != table_->end() ? it->second : nullptr;
  }

private:
  uint8_t unknown_00_[0x18];
  const std::unordered_map<int, const void*>* table_;
};

namespace {

template<typename T>
bool CallModule(wld::Model* model,
    const std::function<bool(T*)>& function) {
  if (model != nullptr) {
    if (T* module = model->GetModule<T>()) {
      return function(module);
    }
  }
  return false;
}

template<typename T>
void CallModule(wld::Model* model,
    const std::function<void(T*)>& function) {
  if (model != nullptr) {
    if (T* module = model->GetModule<T>()) {
      function(module);
    }
  }
}

void ActivateTransparent(const wld::Model* model) {
  if (model != nullptr) {
    if (graphics::ObjectTransparent* transparent =
        graphics::ObjectTransparent::GetInstance()) {
      if (graphics::ObjectTransparentEntry* entry =
          transparent->Find(model)) {
        entry->Activate();
      }
    }
  }
}

class NullObject : public MapObject {
public:
  int GetId() const override {
    return -1;
  }

  const char* GetName() const override {
    return "";
  }

  const char* GetModelName() const override {
    return "";
  }

  bool IsValid() const override {
    return false;
  }

  bool IsPlaying() const override {
    return false;
  }

  bool HasFlag(uint8_t flag) const override {
    return false;
  }

  ObjectInfoState GetState() const override {
    return ObjectInfoState(0);
  }

  int GetX() const override {
    return -1;
  }

  int GetZ() const override {
    return -1;
  }

  int GetLeft() const override {
    return -1;
  }

  int GetTop() const override {
    return -1;
  }

  int GetRight() const override {
    return -1;
  }

  int GetBottom() const override {
    return -1;
  }

  wld::Model* GetModel() const override {
    return nullptr;
  }

  wld::Model* GetSubModel() const override {
    return nullptr;
  }

  const ObjectInfo* GetInfo() const override {
    return nullptr;
  }

  const void* Unknown19(int key) const override {
    return nullptr;
  }

  MapObject& SetFlag(uint8_t flag, bool enable) override {
    return *this;
  }

  MapObject& SetEnable(bool enable) override {
    return *this;
  }

  MapObject& SetState(ObjectInfoState state) override {
    return *this;
  }

  ProcInst* CreateProc(ProcInst* parent) override {
    return nullptr;
  }

  void PlayAnim(ObjectInfoState state) override {}

  MapObject& Immediate() override {
    return *this;
  }

  float GetAlpha() const override {
    return 1.0f;
  }

  void SetAlpha(float alpha) override {}

  MapObject* GetParent() const override {
    return nullptr;
  }

  bool Unknown30() const override {
    return false;
  }
};

class EntityObject : public MapObject {
public:
  class ProcState;

  ~EntityObject() override = default;

  int GetId() const override {
    return id_;
  }

  const char* GetName() const override {
    return name_.c_str();
  }

  const char* GetModelName() const override {
    return model_name_.c_str();
  }

  bool IsValid() const override {
    return model_ != nullptr;
  }

  bool IsPlaying() const override {
    if (!IsValid() || !HasFlag(0) || !HasFlag(1)) {
      return false;
    }

    const std::function<bool(wld::MapAnimModule*)> function =
      [](wld::MapAnimModule* module) {
        return module->IsPlaying(0);
      };
    const bool playing = CallModule(model_, function);
    return playing | CallModule(sub_model_, function);
  }

  bool HasFlag(uint8_t flag) const override {
    return IsValid() && flags_[flag];
  }

  ObjectInfoState GetState() const override {
    return state_;
  }

  int GetX() const override {
    return x_;
  }

  int GetZ() const override {
    return z_;
  }

  int GetLeft() const override {
    return left_;
  }

  int GetTop() const override {
    return top_;
  }

  int GetRight() const override {
    return right_;
  }

  int GetBottom() const override {
    return bottom_;
  }

  wld::Model* GetModel() const override {
    return model_;
  }

  wld::Model* GetSubModel() const override {
    return sub_model_;
  }

  const ObjectInfo* GetInfo() const override {
    return info_;
  }

  const void* Unknown19(int key) const override {
    return info_ != nullptr ? info_->Find(key) : nullptr;
  }

  MapObject& SetFlag(uint8_t flag, bool enable) override {
    UpdateFlag(flag, enable);
    return *this;
  }

  MapObject& SetEnable(bool enable) override {
    if (!IsValid() || flags_[3] == enable) {
      return *this;
    }

    const std::function<void(wld::EffectModule*)> function =
      [enable](wld::EffectModule* module) {
        if (module->GetNode()->IsDrawable()) {
          module->Request(enable ? 1 : 2, 30.0f);
        }
      };
    CallModule(model_, function);
    CallModule(sub_model_, function);
    flags_[3] = enable;
    return *this;
  }

  MapObject& SetState(ObjectInfoState state) override {
    state_ = state;
    return *this;
  }

  ProcInst* CreateProc(ProcInst* parent) override;

  void PlayAnim(ObjectInfoState state) override {
    info_->Play(state, model_);

    const std::function<bool(wld::MapAnimModule*)> function =
      [state](wld::MapAnimModule* module) {
        switch (state) {
          case 0:
            module->PlayFirst();
            return true;
          case 1:
          case 3:
            module->PlayLast();
            return true;
          default:
            return false;
        }
      };
    CallModule(model_, function);
    CallModule(sub_model_, function);
  }

  MapObject& Immediate() override {
    if (!IsValid()) {
      return *this;
    }

    {
      const std::function<void(wld::MapAnimModule*)> function =
        [this](wld::MapAnimModule* module) {
          switch (state_) {
            case 0:
            case 4:
            case 5:
            case 6:
              module->PlayFirst();
              break;
            case 1:
            case 3:
              module->PlayLast();
              break;
            case 7:
              module->Play("Color1", 6, 0, 0.0f);
              module->SetSpeed(0, 1.0f);
              module->SetFrame(0, 0.0f);
              break;
            case 8:
              module->Play("Color2", 6, 0, 0.0f);
              module->SetSpeed(0, 1.0f);
              module->SetFrame(0, 0.0f);
              break;
            case 9:
              module->Play("Color3", 6, 0, 0.0f);
              module->SetSpeed(0, 1.0f);
              module->SetFrame(0, 0.0f);
              break;
            default:
              break;
          }
        };
      CallModule(model_, function);
      CallModule(sub_model_, function);
    }

    {
      const std::function<void(wld::EffectModule*)> function =
        [this](wld::EffectModule* module) {
          module->Apply(state_);
        };
      CallModule(model_, function);
      CallModule(sub_model_, function);
    }

    if (parent_ != nullptr) {
      const bool hidden = state_ == 1 || state_ == 2;
      SetFlag(0, !hidden);
      parent_->SetFlag(0, hidden);
    }
    else {
      SetFlag(0, state_ != 2);
    }

    float alpha;
    if (state_ == 2) {
      alpha = 0.0f;
    }
    else if (state_ == 1) {
      alpha = parent_ == nullptr ? 1.0f : 0.0f;
    }
    else {
      alpha = 1.0f;
    }
    SetAlpha(alpha);

    info_->Apply(state_, model_);
    info_->Apply(state_, sub_model_);
    return *this;
  }

  float GetAlpha() const override {
    return alpha_.Get();
  }

  void SetAlpha(float alpha) override {
    if (alpha == alpha_.Get()) {
      return;
    }

    if (alpha_.IsImmediate()) {
      alpha_.Start(alpha, alpha);
    }
    else if (alpha_.IsRunning()) {
      alpha_.Start(alpha_.Get(), alpha);
    }
    else if (alpha_.IsChanged(alpha)) {
      alpha_.Start(alpha_.Get(), alpha);
    }
    CommitAlpha();
  }

  MapObject* GetParent() const override {
    return parent_;
  }

  bool Unknown30() const override {
    if (model_ == nullptr) {
      return false;
    }
    const MapObjectModule* module = model_->GetModule<MapObjectModule>();
    return module != nullptr && module->HasParts();
  }

private:
  [[gnu::noinline]] void UpdateFlag(uint8_t flag, bool enable) {
    if (!IsValid() || flags_[flag] == enable) {
      return;
    }
    flags_[flag] = enable;

    const bool visible = HasFlag(0) && HasFlag(1);
    if (model_ != nullptr) {
      model_->SetVisible(visible);
    }
    if (sub_model_ != nullptr) {
      sub_model_->SetVisible(visible);
    }

    const bool collision = HasFlag(0) && HasFlag(1) && HasFlag(2);
    if (model_ != nullptr) {
      if (std::shared_ptr<wld::Collision> shape =
          model_->GetCollision().lock()) {
        shape->SetEnable(collision);
      }
    }
    UpdateCollision();
  }

  void UpdateCollision() {
    Height* height = Singleton<Height>::GetInstance();
    if (height == nullptr) {
      return;
    }

    height->BeginUpdate();
    const std::function<void(int, int)> function = [height](int x, int z) {
      height->MarkDirty(x, z);
    };
    if (left_ >= 0 && top_ >= 0) {
      for (int z = top_; z <= bottom_; ++z) {
        for (int x = left_; x <= right_; ++x) {
          function(x, z);
        }
      }
    }
    height->EndUpdate();
  }

  [[gnu::noinline]] void CommitAlpha() {
    if (parent_ != nullptr) {
      ActivateTransparent(model_);
      ActivateTransparent(sub_model_);
      {
        const std::function<void(graphics::ObjectTransparentModule*)>
          function = [this](graphics::ObjectTransparentModule* module) {
            module->SetAlpha(alpha_.Get());
          };
        CallModule(model_, function);
        CallModule(sub_model_, function);
      }

      ActivateTransparent(parent_->model_);
      ActivateTransparent(parent_->sub_model_);
      const std::function<void(graphics::ObjectTransparentModule*)>
        function = [this](graphics::ObjectTransparentModule* module) {
          module->SetAlpha(1.0f - alpha_.Get());
        };
      CallModule(parent_->model_, function);
      CallModule(parent_->sub_model_, function);
    }
    else {
      ActivateTransparent(model_);
      ActivateTransparent(sub_model_);
      const std::function<void(graphics::ObjectTransparentModule*)>
        function = [this](graphics::ObjectTransparentModule* module) {
          module->SetAlpha(alpha_.Get());
        };
      CallModule(model_, function);
      CallModule(sub_model_, function);
    }
  }


  std::string name_;
  std::string model_name_;
  const ObjectInfo* info_ = nullptr;
  wld::Model* model_ = nullptr;
  wld::Model* sub_model_ = nullptr;
  EntityObject* parent_ = nullptr;
  int unknown_58_ = 0;
  bool flags_[4] = {true, true, true, true};
  ObjectInfoState state_ = ObjectInfoState(0);
  int16_t id_ = -1;
  int16_t x_ = -1;
  int16_t z_ = -1;
  int16_t left_ = -1;
  int16_t top_ = -1;
  int16_t right_ = -1;
  int16_t bottom_ = -1;
  InterpolatorFloat alpha_;
  int unknown_a0_ = 0;
  uint32_t name_hash_ = 0;
  uint64_t unknown_a8_ = 0;
};

class EntityObject::ProcState : public ProcInst {
public:
  explicit ProcState(EntityObject* object) : object_(object) {}

private:
  EntityObject* object_;
};

ProcInst* EntityObject::CreateProc(ProcInst* parent) {
  if (parent == nullptr) {
    Immediate();
    return nullptr;
  }
  return new ProcState(this);
}

}

[[gnu::used]] MapObject* CreateNullObject() {
  return new NullObject();
}

[[gnu::used]] MapObject* CreateEntityObject() {
  return new EntityObject();
}

}

#pragma GCC visibility pop

}
