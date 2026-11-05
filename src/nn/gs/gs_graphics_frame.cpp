#include "nn/codec/video_server_context.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/gs/gs_frame_length.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::gs::sdk {

namespace {

// Frame lengths sent for the automatic, 30, 60 and 120 Hz modes.
const uint32_t FrameLengths[] = {0, 286, 316, 376};

}

void BootGraphicsFrameManagement() {
  gsv::UserSession* session = gsv::GetUserSession();
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x45d, 0x10000045d,
    [](uint8_t*) {}, [](const uint8_t*) {}));
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x45e, 0x10000045e,
    [](uint8_t*) {}, [](const uint8_t*) {}));
}

void SetGraphicsFrameLengthMode(GraphicsFrameLengthMode mode) {
  gsv::UserSession* session = gsv::GetUserSession();
  if (static_cast<uint32_t>(mode) >= 4) {
    nn::detail::UnexpectedDefaultImpl();
  }
  const uint32_t length = FrameLengths[mode];
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x100000467, 0x100000467,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, length);
    },
    [](const uint8_t*) {}));
}

void SetGraphicsFrameRestartMode(GraphicsFrameRestartMode mode) {
  gsv::UserSession* session = gsv::GetUserSession();
  if (static_cast<uint32_t>(mode) >= 3) {
    nn::detail::UnexpectedDefaultImpl();
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x100000468, 0x100000468,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, mode);
    },
    [](const uint8_t*) {}));
}

void SetGraphicsFrameGpuTimesliceMode(GraphicsFrameGpuTimesliceMode mode) {
  gsv::UserSession* session = gsv::GetUserSession();
  if (static_cast<uint32_t>(mode) >= 2) {
    nn::detail::UnexpectedDefaultImpl();
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x100000469, 0x100000469,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, mode);
    },
    [](const uint8_t*) {}));
}

}
