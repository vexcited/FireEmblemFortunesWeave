#include "game/cmdbtl/camera_cut.hpp"

namespace game::cmdbtl {

CmdBtlCameraCutEvent::~CmdBtlCameraCutEvent() = default;

CmdBtlCameraCutEnterCombat::~CmdBtlCameraCutEnterCombat() = default;

CmdBtlCameraCutExitCombat::~CmdBtlCameraCutExitCombat() = default;

bool CmdBtlCameraCutSelfie::IsFinished() const {
  return finished_;
}

bool CmdBtlCameraCutSuccessCapture::IsFinished() const {
  return true;
}

}
