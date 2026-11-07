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
  virtual void setLatency(int latency);
  virtual int getLatency() const;
  virtual void enable();
  virtual void disable();
  virtual bool isRemovable() const;

  size_t getBufferSize() const {
    return bufferSize_;
  }

  void* getBuffer() const {
    return buffer_;
  }

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
  static void** registry();

  FxReverb(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuReverb : public FxBase {
public:
  static void** registry();

  FxCpuReverb(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxI3dl2Reverb : public FxBase {
public:
  static void** registry();

  FxI3dl2Reverb(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuI3dl2Reverb : public FxBase {
public:
  static void** registry();

  FxCpuI3dl2Reverb(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxDelay : public FxBase {
public:
  static void** registry();

  FxDelay(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuDelay : public FxBase {
public:
  static void** registry();

  FxCpuDelay(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxLightLimiter : public FxBase {
public:
  static void** registry();

  FxLightLimiter(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxCpuLightLimiter : public FxBase {
public:
  static void** registry();

  FxCpuLightLimiter(Manager* manager, const char* name, int index,
    const void* param, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxFFT : public FxBase {
public:
  static void** registry();

  FxFFT(Manager* manager, const char* name, fnd::WeakHandle target,
    int index, int count);
  FxFFT(Manager* manager, const char* name, fnd::WeakHandle target,
    fnd::WeakHandle source, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1630_[0x20];
};

class FxEQ : public FxBase {
public:
  static void** registry();

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
  static void** registry();

  FxMS(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(float);
  virtual float unknown25();
  virtual void unknown26(int);
  virtual void unknown27(int, float, int);

private:
  bool unknown_1630_ = false;
};

class FxMSCtrl : public FxBase {
public:
  static void** registry();

  FxMSCtrl(Manager* manager, const char* name, fnd::WeakHandle target,
    int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(int);
  virtual int unknown25();
  virtual int unknown26();
  virtual float unknown27();
};

class FxMSEQ : public FxBase {
public:
  static void** registry();

  FxMSEQ(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(float);
  virtual float unknown25();
  virtual void unknown26(int);
  virtual void unknown27(int, float, int);

private:
  bool unknown_1630_ = false;
};

class FxSpectrum : public FxBase {
public:
  static void** registry();

  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(void* data);
};

class FxVib : public FxBase {
public:
  static void** registry();

  FxVib(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(float);
  virtual void unknown25(float);
  virtual void unknown26(float);
  virtual float unknown27();
  virtual float unknown28();
  virtual float unknown29();
  virtual void unknown30(int, float, int);
  virtual void unknown31(int, float, int);
  virtual int unknown32(int);
  virtual float unknown33(int);
  virtual float unknown34(int);
  virtual float unknown35(int);
  virtual void unknown36(int value);
};

class FxFinalMix : public FxBase {
public:
  static void** registry();

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
  static void** registry();

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
  static void** registry();

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
  static void** registry();

  FxSurround(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24();
  virtual void unknown25();
  virtual void unknown26(int);
  virtual void unknown27(int);
  virtual void unknown28(int);
  virtual void unknown29(int);
  virtual void unknown30(int);
  virtual void unknown31(int);
  virtual int unknown32();
  virtual int unknown33();
  virtual int unknown34();
  virtual int unknown35();
  virtual int unknown36();
  virtual int unknown37();
  virtual void unknown38(int, float);
  virtual void unknown39(int, int);
  virtual void unknown40(int, float);
  virtual float unknown41(int);
  virtual int unknown42(int);
  virtual float unknown43(int);
  virtual void unknown44(int);
  virtual int unknown45();
};

class FxLFE : public FxBase {
public:
  static void** registry();

  FxLFE(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(float);
  virtual float unknown25();
  virtual void unknown26(float);
  virtual float unknown27();
  virtual void unknown28(int);
  virtual void unknown29(int, float, int);
  virtual void unknown30(bool);
};

class FxSimpleLimiter : public FxBase {
public:
  static void** registry();

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
  static void** registry();

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
  static void** registry();

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
  static void** registry();

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
  static void** registry();

  FxCompressor(Manager* manager, const char* name, int index);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  virtual void setParam(const void* param, float scale);
};

class FxPCMPlayer : public FxBase {
public:
  static void** registry();

  FxPCMPlayer(Manager* manager, const char* name, int index, int count);
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  virtual void unknown24(int);
  virtual void unknown25(const void*, int);
  virtual int unknown26();
  virtual int unknown27();
  virtual int unknown28();
  virtual uint64_t unknown29();
  virtual int unknown30();
  virtual void unknown31();
};

}
