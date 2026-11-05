#include "nn/diag/diag_abort.hpp"
#include "nn/streamplay/streamplay_types.hpp"
#include "nn/util/string_util.hpp"

namespace nn::streamplay {

bool StreamId::operator<(const StreamId& other) const {
  NN_ABORT_UNLESS(type == other.type);
  if (type == Type_Name) {
    return util::Strncmp(name, other.name, NameLengthMax) < 0;
  }
  return number < other.number;
}

bool StreamId::operator==(const StreamId& other) const {
  if (type != other.type) {
    return false;
  }
  if (type == Type_Name) {
    return util::Strncmp(name, other.name, NameLengthMax) == 0;
  }
  return number == other.number;
}

bool GuestPadId::operator<(const GuestPadId& other) const {
  if (padIndex == other.padIndex) {
    return guestId < other.guestId;
  }
  return padIndex < other.padIndex;
}

bool GuestPadId::operator==(const GuestPadId& other) const {
  return padIndex == other.padIndex && guestId == other.guestId;
}

}
