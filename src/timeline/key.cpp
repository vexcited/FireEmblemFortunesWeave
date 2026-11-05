#include "timeline/key.hpp"
#include "timeline/key_io.hpp"

namespace timeline {

// Both signal roots share this body, it serializes the frame of the key.
void IKey::Serialize(KeyReader* reader, KeyWriter* writer) {
  timeline::Serialize(reader, writer, "Frame", frame_);
}

}
