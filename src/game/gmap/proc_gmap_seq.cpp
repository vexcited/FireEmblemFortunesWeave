#include "game/gmap/proc_gmap_seq.hpp"

#include "game/game_mode_data.hpp"
#include "game/gmap/camera.hpp"
#include "game/gmap/cursor.hpp"

namespace game::gmap {

void ProcGmapSeq::Unknown10() {
  Jump(GmapSeq::kLabelEnd);
}

void ProcGmapSeq::Unknown11() {
  Jump(GmapSeq::kLabelTitle);
}

void ProcGmapSeq::Unknown12() {
  if (GameModeData* data = GameModeData::GetInstance()) {
    data->ClearFlag(GameModeData::kFlagGmapContinue);
  }
  Jump(GmapSeq::kLabelReset);
}

void ProcGmapSeq::Unknown13() {
  if (hook_count_++ == 0) {
    GetHook().Begin();
  }
}

void ProcGmapSeq::Unknown14() {
  if (--hook_count_ == 0) {
    GetHook().End();
  }
}

const char* ProcGmapSeq::GetName() const {
  return "GmapSeq";
}

int ProcGmapSeq::GetVersion() const {
  return 2;
}

void ProcGmapSeq::Serialize(Stream& stream) const {
  if (Cursor* cursor = Cursor::GetInstance()) {
    GameSaveConst::WriteChunk(stream, *cursor);
  }
  if (Camera* camera = Camera::GetInstance()) {
    GameSaveConst::WriteChunk(stream, *camera);
  }
}

void ProcGmapSeq::Deserialize(Stream& stream, int version) {
  if (Cursor* cursor = Cursor::GetInstance()) {
    GameSaveConst::ReadChunk(stream, *cursor);
  }
  if (Camera* camera = Camera::GetInstance()) {
    GameSaveConst::ReadChunk(stream, *camera);
  }

  // Versions 1 and 2 stored a list of names here.
  if (version == 1 || version == 2) {
    const int count = stream.ReadU8();
    for (int i = 0; i < count; ++i) {
      stream.SkipString();
    }
  }
}

}
