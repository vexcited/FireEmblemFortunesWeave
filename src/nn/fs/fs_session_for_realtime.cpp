#include <stdint.h>

namespace nn::fs::detail {

enum SessionForRealtimeMode : int32_t {
  SessionForRealtimeMode_None,
  SessionForRealtimeMode_Enabled,
  SessionForRealtimeMode_Disabled,
};

[[gnu::visibility("hidden")]] extern SessionForRealtimeMode
  g_SessionForRealtimeMode;

bool IsSessionForRealtimeOnlyEnabled() {
  return g_SessionForRealtimeMode == SessionForRealtimeMode_Enabled;
}

}
