#include <stdint.h>

#include <string>
#include <vector>

#include "game/facility/scene_base.hpp"
#include "game/game_mode_data.hpp"
#include "game/map/map_singletons.hpp"
#include "game/map/situation.hpp"
#include "game/map/stream.hpp"
#include "game/map/unit.hpp"

namespace game {

namespace map::history {

class PoolBase {
public:
  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual uint8_t GetVersion() const;
  virtual void Unknown05();
  virtual void Unknown06();
  virtual void Serialize(Stream& stream) const;
};

extern PoolBase* g_transporter;
extern PoolBase* g_ride_pool;
extern PoolBase* g_legion_pool;

}

#pragma GCC visibility push(hidden)

int HashName(const char* name);

class AIHistory : public Singleton<AIHistory> {
public:
  void Serialize(Stream& stream) const;
};

class Random {
public:
  void Serialize(Stream& stream) const;
};

class AIValueFlags : public Singleton<AIValueFlags> {
public:
  void Serialize(Stream& stream) const;
};

class AIValuePosLists : public Singleton<AIValuePosLists> {
public:
  void Serialize(Stream& stream) const;
};

namespace map {

class Trick : public SerializeSingleton<Trick> {};

class Image : public SerializeSingleton<Image> {};

class UnitFlags {
public:
  static UnitFlags* instance_;

  bool IsEnabled(int index) const {
    return units_[index].enabled;
  }

private:
  struct Entry {
    bool enabled : 1;
  };

  uint8_t unknown_00_[0x8];
  Entry units_[256];
};

class MapRandom {
public:
  static MapRandom instance_;

  const Random& GetRandom() const {
    return random_;
  }

private:
  uint8_t unknown_00_[0x10];
  Random random_;
};

namespace history {

void SerializeUnit(Stream& stream, const Unit* unit);
void SerializeVariables(Stream& stream, uint8_t index);
void SerializeReliances(Stream& stream);
void SerializeMapObjects(Stream& stream);
void SerializeEffects(Stream& stream);

struct RecordKey {
  uint32_t turn;
  uint32_t step;
  uint8_t kind;
  uint8_t index;
};

class RecordSerializer {
public:
  class IOperator {
  public:
    virtual void Serialize(Stream& stream) const = 0;
    virtual RecordKey GetKey(uint32_t turn, uint32_t step) const = 0;
  };

  class Unit;
  class UnitMgr;
  class Trick;
  class Variable;
  class AI;
  class Random;
  class Reliance;
  class Transporter;
  class BonusExp;
  class UserData;
  class Rule;
  class Terrain;
  class Miracle;
  class MapObj;
  class Rain;
  class Effect;
  class Sound;
  class AIValue;
  class RidePool;
  class LegionPool;
  class HonorExp;
};

// Writes a singleton stream as a named chunk with its version.
void WriteChunk(Stream& stream, const ISingletonStream& singleton) {
  int name = HashName(singleton.GetName());
  if (stream.Unknown00(&name)) {
    stream.WriteU8(singleton.GetVersion());
    singleton.Serialize(stream);
  }
  stream.Unknown01(0);
}

class RecordSerializer::Unit : public IOperator {
public:
  [[gnu::used]] explicit Unit(const game::Unit* unit) : unit_(unit) {}

  void Serialize(Stream& stream) const override {
    SerializeUnit(stream, unit_);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 0, unit_->GetIndex()};
  }

private:
  const game::Unit* unit_;
};

class RecordSerializer::UnitMgr : public IOperator {
public:
  [[gnu::used]] UnitMgr() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    const UnitFlags* flags = UnitFlags::instance_;
    if (flags == nullptr) {
      return;
    }

    stream.WriteU8(0);
    for (int i = 0; i < 256; ++i) {
      stream.WriteU8(flags->IsEnabled(i));
    }
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 1, 0};
  }
};

class RecordSerializer::Trick : public IOperator {
public:
  [[gnu::used]] Trick() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    if (map::Trick* trick = map::Trick::GetInstance()) {
      WriteChunk(stream, *trick);
    }
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 2, 0};
  }
};

class RecordSerializer::Variable : public IOperator {
public:
  [[gnu::used]] explicit Variable(uint8_t index) : index_(index) {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(1);
    SerializeVariables(stream, index_);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 3, index_};
  }

private:
  uint8_t index_;
};

class RecordSerializer::AI : public IOperator {
public:
  [[gnu::used]] AI() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    AIHistory::GetInstance()->Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 4, 0};
  }
};

class RecordSerializer::Random : public IOperator {
public:
  [[gnu::used]] Random() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    MapRandom::instance_.GetRandom().Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 5, 0};
  }
};

class RecordSerializer::Reliance : public IOperator {
public:
  [[gnu::used]] Reliance() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    SerializeReliances(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 6, 0};
  }
};

class RecordSerializer::Transporter : public IOperator {
public:
  [[gnu::used]] Transporter() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    stream.WriteU8(g_transporter->GetVersion());
    g_transporter->Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 7, 0};
  }
};

class RecordSerializer::BonusExp : public IOperator {
public:
  [[gnu::used]] BonusExp() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(1);
    Situation::GetInstance()->GetBonusExps().Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 8, 0};
  }
};

class RecordSerializer::UserData : public IOperator {
public:
  [[gnu::used]] UserData() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    const GameModeData* data = GameModeData::GetInstance();
    stream.WriteU32(data != nullptr ? data->GetUserData() : 0);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 9, 0};
  }
};

class RecordSerializer::Rule : public IOperator {
public:
  [[gnu::used]] Rule() {}

  void Serialize(Stream& stream) const override {
    const Situation* situation = Situation::GetInstance();
    stream.WriteU8(1);
    stream.WriteU8(situation->GetRuleFlags());
    stream.WriteU8(0);
    stream.WriteU8(0);
    stream.WriteU8(0);
    stream.WriteU8(situation->GetUnknown26());
    stream.WriteU8(situation->GetUnknown27());
    situation->GetRecord(0).Serialize(stream);
    situation->GetRecord(1).Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 10, 0};
  }
};

class RecordSerializer::Terrain : public IOperator {
public:
  [[gnu::used]] Terrain() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    if (Image* image = Image::GetInstance()) {
      WriteChunk(stream, *image);
    }
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 11, 0};
  }
};

class RecordSerializer::Miracle : public IOperator {
public:
  [[gnu::used]] Miracle() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    stream.WriteU8(Situation::GetInstance()->GetMiracleCount());
    stream.WriteU16(GameModeData::GetInstance()->GetMiracleCount());
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 12, 0};
  }
};

class RecordSerializer::MapObj : public IOperator {
public:
  [[gnu::used]] MapObj() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    SerializeMapObjects(stream);
  }


  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 13, 0};
  }
};

class RecordSerializer::Rain : public IOperator {
public:
  [[gnu::used]] Rain() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    stream.WriteU8(Situation::GetInstance()->IsRaining());
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 14, 0};
  }
};

class RecordSerializer::Effect : public IOperator {
public:
  [[gnu::used]] Effect() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    SerializeEffects(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 15, 0};
  }
};

class RecordSerializer::Sound : public IOperator {
public:
  [[gnu::used]] Sound() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    if (g_bgm_player != nullptr) {
      g_bgm_player->Serialize(stream);
    }
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 16, 0};
  }
};

class RecordSerializer::AIValue : public IOperator {
public:
  [[gnu::used]] AIValue() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    AIValueFlags::GetInstance()->Serialize(stream);
    AIValuePosLists::GetInstance()->Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 17, 0};
  }
};

class RecordSerializer::RidePool : public IOperator {
public:
  [[gnu::used]] RidePool() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    stream.WriteU8(g_ride_pool->GetVersion());
    g_ride_pool->Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 18, 0};
  }
};

class RecordSerializer::LegionPool : public IOperator {
public:
  [[gnu::used]] LegionPool() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    stream.WriteU8(g_legion_pool->GetVersion());
    g_legion_pool->Serialize(stream);
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 19, 0};
  }
};

class RecordSerializer::HonorExp : public IOperator {
public:
  [[gnu::used]] HonorExp() {}

  void Serialize(Stream& stream) const override {
    stream.WriteU8(0);
    stream.WriteU32(Situation::GetInstance()->GetHonorExp());
  }

  RecordKey GetKey(uint32_t turn, uint32_t step) const override {
    return {turn, step, 20, 0};
  }
};

}

}

#pragma GCC visibility pop

}
