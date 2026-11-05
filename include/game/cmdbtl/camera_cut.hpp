#pragma once

#include <stdint.h>

#include <memory>

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

class CmdBtlCameraCutBase {
public:
  virtual ~CmdBtlCameraCutBase() = default;

  virtual void Start() = 0;

  virtual bool IsFinished() const {
    return false;
  }

  virtual void Update() = 0;

private:
  std::shared_ptr<void> camera_;
};

class CmdBtlCameraCutEvent : public CmdBtlCameraCutBase {
public:
  ~CmdBtlCameraCutEvent() override;

  void Start() override {}

  bool IsFinished() const override {
    return true;
  }

  void Update() override;
};

class CmdBtlCameraCutEnterCombat : public CmdBtlCameraCutBase {
public:
  ~CmdBtlCameraCutEnterCombat() override;

  void Start() override {}

  void Update() override;
};

class CmdBtlCameraCutExitCombat : public CmdBtlCameraCutBase {
public:
  ~CmdBtlCameraCutExitCombat() override;

  void Start() override {}

  void Update() override;
};

class CmdBtlCameraCutSelfie : public CmdBtlCameraCutBase {
public:
  ~CmdBtlCameraCutSelfie() override;

  void Start() override;
  bool IsFinished() const override;
  void Update() override;

private:
  uint8_t unknown18_[0x68];
  bool finished_;
};

class CmdBtlCameraCutSuccessCapture : public CmdBtlCameraCutBase {
public:
  ~CmdBtlCameraCutSuccessCapture() override;

  void Start() override;
  bool IsFinished() const override;
  void Update() override;
};

#pragma GCC visibility pop

}
