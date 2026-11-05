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
  if (guestId == other.guestId) {
    return npadId < other.npadId;
  }
  return guestId < other.guestId;
}

bool GuestPadId::operator==(const GuestPadId& other) const {
  return guestId == other.guestId && npadId == other.npadId;
}

}
