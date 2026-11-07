#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <string>

namespace game::facility {

class SceneCharacterAnimator {
public:
  void Play(const std::string& name);
};

class SceneObjectHolder {
public:
  virtual ~SceneObjectHolder();
};

class SceneCharacterConst {};

class SceneCharacter : public SceneCharacterConst, public SceneObjectHolder {
public:
  virtual void Unknown02();

  const std::shared_ptr<SceneCharacterAnimator>& GetAnimator() const {
    return animator_;
  }

private:
  uint8_t unknown_08_[0x68];
  std::shared_ptr<SceneCharacterAnimator> animator_;
};

class SceneTimer {
public:
  ~SceneTimer();

  void Start(const void* unknown, std::function<void()> callback);

  bool IsFinished() const { return elapsed_ >= duration_; }

private:
  uint8_t unknown_00_[0x20];
  float duration_;
  float elapsed_;
};

// Members whose body is not reconstructed are declared inline so that the
// vtables are emitted without a key function.
class SceneCharacterBehaviorBase {
public:
  virtual ~SceneCharacterBehaviorBase() = default;
  virtual int GetType() = 0;
  virtual void Start() = 0;
  virtual void Update() {}
  virtual void Unknown05() = 0;
  virtual bool IsFinished() = 0;
  virtual void Stop() { active_ = false; }

protected:
  uint64_t unknown_08_;
  SceneCharacter* character_;
  bool active_;
};

class SceneCharacterBehaviorTurn : public SceneCharacterBehaviorBase {
public:
  SceneCharacterBehaviorTurn();

  // The original keeps the vtable store, so the body is not empty.
  ~SceneCharacterBehaviorTurn() override {
    static_cast<void>(0);
  }

  int GetType() override { return 0; }
  inline void Start() override;
  inline void Update() override;
  inline void Unknown05() override;
  bool IsFinished() override { return elapsed_ >= duration_; }

protected:
  float angle_;
  uint8_t unknown_20_[0x8];
  float duration_;
  float elapsed_;
  float start_angle_;
  float end_angle_;
  float current_angle_;
  uint32_t ease_type_;
  uint32_t ease_kind_;
};

class SceneCharacterBehaviorTurnTarget : public SceneCharacterBehaviorTurn {
public:
  SceneCharacterBehaviorTurnTarget();

  inline void Start() override;
};

class SceneCharacterBehaviorMove : public SceneCharacterBehaviorBase {
public:
  SceneCharacterBehaviorMove();

  int GetType() override { return 1; }
  inline void Start() override;
  inline void Update() override;
  inline void Unknown05() override;
  inline bool IsFinished() override;
  inline void Stop() override;

private:
  std::string name_;
};

class SceneCharacterBehaviorAnim : public SceneCharacterBehaviorBase {
public:
  SceneCharacterBehaviorAnim();

  int GetType() override { return 2; }

  void Start() override {
    std::shared_ptr<SceneCharacterAnimator> animator =
      character_->GetAnimator();
    animator->Play(name_);
  }

  void Unknown05() override {}
  inline bool IsFinished() override;
  inline void Stop() override;

protected:
  std::string name_;
};

class SceneCharacterBehaviorFade : public SceneCharacterBehaviorBase {
public:
  SceneCharacterBehaviorFade();

  int GetType() override { return 3; }
  inline void Start() override;
  void Unknown05() override {}
  bool IsFinished() override { return true; }
};

class SceneCharacterBehaviorBlank : public SceneCharacterBehaviorBase {
public:
  SceneCharacterBehaviorBlank();

  int GetType() override { return 4; }
  void Start() override { timer_->Start(nullptr, {}); }
  inline void Update() override;
  void Unknown05() override {}
  bool IsFinished() override { return timer_->IsFinished(); }
  inline void Stop() override;

private:
  std::unique_ptr<SceneTimer> timer_;
};

}
