#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace game::gameui {

class GaugeUtil {
public:
  // An animated experience gauge with its labels.
  class ExpChange {
  public:
    virtual void Unknown00();
    virtual void Unknown01();
    virtual void Unknown02() = 0;
    virtual ~ExpChange() = default;
    virtual void Unknown05() = 0;
    virtual void Unknown06() = 0;

  private:
    uint8_t unknown_08_[0x30];
    std::string unknown_38_;
    std::string unknown_50_;
    std::string unknown_68_;
  };

  class RelianceExpChange : public ExpChange {
  public:
    void SetState(int state);

    void Unknown00() override;
    void Unknown02() override;
    void Unknown05() override;
    void Unknown06() override;

  private:
    uint8_t unknown_80_[0x10];
    std::weak_ptr<void> unknown_90_;
    std::weak_ptr<void> unknown_a0_;
    uint8_t unknown_b0_[0x8];
  };

  class HonorExpChange : public ExpChange {
  public:
    void SetState(int state);

    void Unknown00() override;
    void Unknown02() override;
    void Unknown05() override;
    void Unknown06() override;

  private:
    std::weak_ptr<void> unknown_80_;
  };

  class MiracleExpChange : public ExpChange {
  public:
    // Returns true while the given phase still runs.
    bool Update(int phase);

    void Unknown00() override;
    void Unknown02() override;
    void Unknown05() override;
    void Unknown06() override;

  private:
    std::weak_ptr<void> unknown_80_;
  };
};

static_assert(sizeof(GaugeUtil::RelianceExpChange) == 0xb8);
static_assert(sizeof(GaugeUtil::HonorExpChange) == 0x90);
static_assert(sizeof(GaugeUtil::MiracleExpChange) == 0x90);

}
