#pragma once

#include <cstdint>

#include "game/proc/proc_inst.hpp"
#include "game/sound/se.hpp"

namespace game::gameui {

// Base of the small information windows, with their layout and input slots.
class BasicInfo : public ProcInst {
public:
  ~BasicInfo() override;

  void Unknown02() override;
  void Unknown05() override;

  virtual const char* GetLayoutArchive() = 0;
  virtual const char* GetLayoutName() = 0;
  virtual int Unknown20() { return 0; }
  virtual int Unknown21() { return 80; }
  virtual int Unknown22() { return 4; }
  virtual int Unknown23() { return 5; }
  virtual int Unknown24() { return 1; }
  virtual int Unknown25() { return 1; }
  virtual int Unknown26() { return 0; }
  virtual int Unknown27() { return 1; }
  virtual void Unknown28() = 0;
  virtual void Unknown29() {}
  virtual int Unknown30() { return 0; }
  virtual int Unknown31() { return 0; }
  virtual int Unknown32() { return 0; }
  virtual void PlayDecideSe() { sound::PlaySe("SE_SYS_Decide_M"); }
  virtual void PlayCancelSe() { sound::PlaySe("SE_SYS_Cancel_M"); }
  virtual void PlayNgSe() { sound::PlaySe("SE_SYS_NG"); }
  virtual void Unknown36() {}
  virtual void Unknown37() {}
  virtual void Unknown38() {}
  virtual void Unknown39() {}

protected:
  uint8_t unknown_98_[0x38];
};

static_assert(sizeof(BasicInfo) == 0xd0);

}
