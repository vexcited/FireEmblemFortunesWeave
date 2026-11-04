#include "game/map/situation.hpp"

#include "game/data/data_file.hpp"
#include "game/map/stream.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

extern const HashedString kVariableSituation1000;
extern const HashedString kVariableSituation800;
extern const HashedString kVariableSituation200;

#pragma GCC visibility pop

Situation::~Situation() {
  Clear();
}

void Situation::UpdateVariables() {
  VariableManager::SetFlag(kVariableSituation1000, (flags_ & 0x1000) != 0);
  VariableManager::SetFlag(kVariableSituation800, (flags_ & 0x800) != 0);
  VariableManager::SetFlag(kVariableSituation200, (flags_ & 0x200) != 0);
}

void Situation::Clear() {
  unknown_18_ = 0;
  unknown_26_ = 0;
  unknown_27_ = 0;
  unknown_10_ = 1;
  unknown_11_ = 2;
  unknown_12_ = 2;
  unknown_13_ = 2;
  unknown_1a_ = 1;
  records_[0].Clear();
  records_[1].Clear();
  flags_ = 0;
  unknown_19_ = 0;
  unknown_1e_ = 0;
  unknown_20_ = 0;
  unknown_21_ = 0;
  unknown_22_ = 0;
  unknown_24_ = 0;
  unknown_25_ = 0;
  unknown_140_ = 0;
  bonus_exps_.Clear();
  unknown_1c_ = 0xff;
  UpdateVariables();
}

void Situation::Serialize(Stream& stream) const {
  stream.WriteU8(unknown_10_);
  stream.WriteU8(unknown_11_);
  stream.WriteU8(unknown_12_);
  stream.WriteU8(unknown_13_);
  stream.WriteU32(flags_);
  stream.WriteU8(unknown_18_);
  stream.WriteU8(unknown_19_);
  stream.WriteU16(unknown_1a_);
  stream.WriteU8(unknown_1c_);
  stream.WriteU8(unknown_26_);
  stream.WriteU8(unknown_27_);

  for (const SituationRecord& record : records_) {
    stream.WriteString(record.name);
    for (int i = 0; i < 4; ++i) {
      stream.WriteString(record.details[i]);
      stream.WriteU16(record.values[i]);
    }
  }

  stream.WriteU16(unknown_1e_);
  stream.WriteU8(unknown_20_);
  stream.WriteU8(unknown_21_);
  stream.WriteU16(unknown_22_);
  stream.WriteU8(unknown_24_);
  stream.WriteU8(unknown_25_);
  bonus_exps_.Serialize(stream);
  stream.WriteU32(unknown_140_);
}

void Situation::Deserialize(Stream& stream, int version) {
  unknown_10_ = stream.ReadU8();
  unknown_11_ = stream.ReadU8();
  unknown_12_ = stream.ReadU8();
  unknown_13_ = stream.ReadU8();
  flags_ = stream.ReadU32();
  unknown_18_ = stream.ReadU8();
  unknown_19_ = stream.ReadU8();
  unknown_1a_ = stream.ReadU16();

  // Versions 1 to 5 stored a removed 16-bit field here.
  if (version >= 1 && version <= 5) {
    stream.Skip(2);
  }

  if (version <= 3) {
    unknown_1c_ = 0xff;
    unknown_26_ = stream.ReadU8();
    if (version == 3) {
      unknown_27_ = stream.ReadU8();
    }
  }
  else {
    unknown_1c_ = stream.ReadU8();
    unknown_26_ = stream.ReadU8();
    unknown_27_ = stream.ReadU8();
  }

  if (version >= 12) {
    for (SituationRecord& record : records_) {
      stream.ReadString(record.name);
      for (int i = 0; i < 4; ++i) {
        stream.ReadString(record.details[i]);
        record.values[i] = stream.ReadU16();
      }
    }
  }
  else {
    records_[0].Clear();
    records_[1].Clear();
    stream.SkipString();
    stream.SkipString();

    if (version >= 5 && version <= 9) {
      stream.Skip(14);
    }

    if (version <= 7) {
      unknown_1e_ = 0;
      unknown_20_ = 0;
      unknown_21_ = 0;
      unknown_22_ = 0;
      unknown_24_ = 0;
      unknown_25_ = 0;
      if (version == 7) {
        bonus_exps_.Deserialize(stream);
      }
      else {
        bonus_exps_.Clear();
      }
      unknown_140_ = 0;

      if (SituationObserver* observer = SituationObserver::GetInstance()) {
        observer->Refresh();
      }
      UpdateVariables();
      return;
    }
  }

  unknown_1e_ = stream.ReadU16();
  unknown_20_ = stream.ReadU8();
  unknown_21_ = stream.ReadU8();
  unknown_22_ = stream.ReadU16();
  unknown_24_ = stream.ReadU8();
  unknown_25_ = stream.ReadU8();
  bonus_exps_.Deserialize(stream);
  unknown_140_ = version >= 9 ? stream.ReadU32() : 0;

  if (SituationObserver* observer = SituationObserver::GetInstance()) {
    observer->Refresh();
  }
  UpdateVariables();
}

}
