#pragma once

#include <cstdint>

#include "snd/fnd/weak_handle.hpp"
#include "snd/handle_ptr.hpp"
#include "snd/obj.hpp"
#include "snd/param.hpp"

namespace snd::target {

class FxBase;

}

namespace snd::fx {

// The platform independent part of an effect. The target classes derive
// from the effect kinds and override the stubs below.
class FxBase : public Obj, public Param, public HandlePtr {
public:
  // The count is at least five.
  FxBase(Manager* manager, const char* name, int index, int count);
  ~FxBase() override;

  void destroy() override;
  void mainUnlocked() override;

  // The root of the effect registries, out of line in the game part.
  static void** registry();

  [[gnu::used]] virtual void** getRegistry() {
    static void* base = fnd::rootRegistry();
    return &base;
  }

  virtual void updateFx(float ms);
  virtual void apply();
  virtual bool isActive() const;
  virtual void stop(int bus, int index);
  virtual void start(int bus, int index);
  virtual int getBus() const;
  virtual int getBusIndex() const;
  virtual int getIndex() const;
  virtual int getChannel() const;
  virtual target::FxBase* getImpl() const;
  virtual void reset();
  virtual int getLatency() const;
  virtual void enable();
  virtual void disable();
  virtual bool isRemovable() const;

protected:
  uint8_t unknown_15e8_[0x10];
  target::FxBase* impl_;
  bool active_;
  int bus_;
  int index_;
  int channel_;
  int count_;
  size_t bufferSize_;
  void* buffer_;
  uint64_t unknown_1628_;
};

static_assert(sizeof(FxBase) == 0x1630);

class FxReverb : public FxBase {
public:
  FxReverb(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuReverb : public FxBase {
public:
  FxCpuReverb(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxI3dl2Reverb : public FxBase {
public:
  FxI3dl2Reverb(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuI3dl2Reverb : public FxBase {
public:
  FxCpuI3dl2Reverb(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxDelay : public FxBase {
public:
  FxDelay(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuDelay : public FxBase {
public:
  FxCpuDelay(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxLightLimiter : public FxBase {
public:
  FxLightLimiter(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuLightLimiter : public FxBase {
public:
  FxCpuLightLimiter(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxFFT : public FxBase {
public:
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxEQ : public FxBase {
public:
  FxEQ(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
};

class FxMS : public FxBase {
public:
  FxMS(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual float unknown25();
  virtual void unknown26();
  virtual void unknown27();

private:
  bool unknown_1630_ = false;
};

class FxMSCtrl : public FxBase {
public:
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual int unknown25();
  virtual void unknown26();
  virtual float unknown27();
};

class FxMSEQ : public FxBase {
public:
  FxMSEQ(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual float unknown25();
  virtual void unknown26();
  virtual void unknown27();

private:
  bool unknown_1630_ = false;
};

class FxSpectrum : public FxBase {
public:
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
};

class FxVib : public FxBase {
public:
  FxVib(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
  virtual void unknown26();
  virtual float unknown27();
  virtual float unknown28();
  virtual float unknown29();
  virtual void unknown30();
  virtual void unknown31();
  virtual int unknown32();
  virtual float unknown33();
  virtual float unknown34();
  virtual float unknown35();
  virtual void unknown36();
};

class FxFinalMix : public FxBase {
public:
  FxFinalMix(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
  virtual void unknown26();
};

class FxMute : public FxBase {
public:
  FxMute(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxNone : public FxBase {
public:
  FxNone(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxSurround : public FxBase {
public:
  FxSurround(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
  virtual void unknown26();
  virtual void unknown27();
  virtual void unknown28();
  virtual void unknown29();
  virtual void unknown30();
  virtual void unknown31();
  virtual int unknown32();
  virtual int unknown33();
  virtual int unknown34();
  virtual int unknown35();
  virtual int unknown36();
  virtual int unknown37();
  virtual void unknown38();
  virtual void unknown39();
  virtual void unknown40();
  virtual float unknown41();
  virtual int unknown42();
  virtual float unknown43();
  virtual void unknown44();
  virtual int unknown45();
};

class FxLFE : public FxBase {
public:
  FxLFE(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual float unknown25();
  virtual void unknown26();
  virtual float unknown27();
  virtual void unknown28();
  virtual void unknown29();
  virtual void unknown30();
};

class FxSimpleLimiter : public FxBase {
public:
  FxSimpleLimiter(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
  virtual float unknown26();
  virtual int unknown27();
};

class FxWaveform : public FxBase {
public:
  FxWaveform(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual int unknown24();
};

class FxSpeaker : public FxBase {
public:
  FxSpeaker(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual float unknown24();
};

class FxMultiBridge : public FxBase {
public:
  FxMultiBridge(Manager* manager, const char* name, int index, int count,
    int bridges);
  ~FxMultiBridge() override;

  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
};

class FxCompressor : public FxBase {
public:
  FxCompressor(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxPCMPlayer : public FxBase {
public:
  FxPCMPlayer(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
  virtual int unknown26();
  virtual int unknown27();
  virtual void unknown28();
  virtual void unknown29();
  virtual int unknown30();
  virtual void unknown31();
};

}
