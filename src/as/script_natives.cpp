#include <cstdio>
#include <cstring>

#include "as/script_context.hpp"
#include "as/script_time.hpp"
#include "game/script/script_string.hpp"

namespace as {

// The any type of the scripts, reference counted.
class Any {
public:
  int Release() const;
};

ContextHandle run(const Any* classObj, const string& func);
ContextHandle post_run(const Any* classObj, const string& func);
ContextHandle run_brother(const Any* classObj, const string& func);

namespace {

// 1 ends the block of the native, 0 runs it again next frame and 2 waits for
// the next frame.
[[gnu::always_inline]] inline void SetBlockState(int state) {
  ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(state);
  context->ClearCallback();
}

[[gnu::always_inline]] inline void SetBlockResult(bool done) {
  ScriptContext* context = GetCurrentContext();
  if (done) {
    context->GetRunner()->SetBlockState(1);
    context->ClearCallback();
  }
  else {
    context->GetRunner()->SetBlockState(0);
  }
}

}

// The texts of print, sprint, warning and assertmsg are formatted into the
// static buffers of the script printer, which release builds never show.
void FormatMessage(const string& fmt, const string& p0, const string& p1,
  const string& p2, const string& p3, const string& p4, const string& p5,
  const string& p6, const string& p7, const string& p8, const string& p9);

#pragma GCC visibility push(hidden)

extern char g_format_result[0x100];
extern char g_format[0x100];
extern char g_format_args[10][0x100];

#pragma GCC visibility pop

void put_msg(const string&) {}
void put_val(int) {}
void put_val(uint32_t) {}
void put_val(uint64_t) {}
void put_val(float) {}
void put_val(bool) {}
void put_val(const string&) {}

void print(const string& fmt, string p0, string p1, string p2, string p3,
  string p4, string p5, string p6, string p7, string p8, string p9) {
  FormatMessage(fmt, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void assert(bool) {}

void warning(bool exp, const string& fmt, string p0, string p1,
  string p2, string p3, string p4, string p5, string p6, string p7,
  string p8, string p9) {
  if (exp) {
    return;
  }
  FormatMessage(fmt, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void assertmsg(bool exp, const string& fmt, string p0, string p1,
  string p2, string p3, string p4, string p5, string p6, string p7,
  string p8, string p9) {
  if (exp) {
    return;
  }
  FormatMessage(fmt, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

int sprint(string& str, const string& fmt, string p0, string p1,
  string p2, string p3, string p4, string p5, string p6, string p7,
  string p8, string p9) {
  FormatMessage(fmt, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
  int length = sprintf(g_format_result, g_format, g_format_args[0],
    g_format_args[1], g_format_args[2], g_format_args[3], g_format_args[4],
    g_format_args[5], g_format_args[6], g_format_args[7], g_format_args[8],
    g_format_args[9]);
  str = g_format_result;
  return length;
}

ContextHandle run(const string& func) {
  return run(nullptr, func);
}

ContextHandle post_run(const string& func) {
  return post_run(nullptr, func);
}

ContextHandle run_brother(const string& func) {
  return run_brother(nullptr, func);
}

uint32_t get_tick_count() {
  SetBlockState(1);
  return g_tick_count;
}

float get_base_frame_count() {
  SetBlockState(1);
  return g_base_frame_counter->GetFrameCount();
}

float get_base_msec_count() {
  SetBlockState(1);
  return g_base_frame_counter->GetMsecCount();
}

// The counter is read once the context of the caller was looked up again.
float get_frame_count() {
  SetBlockState(1);
  GetCurrentContext();
  return g_frame_counter->GetFrameCount();
}

float get_msec_count() {
  SetBlockState(1);
  GetCurrentContext();
  return g_frame_counter->GetMsecCount();
}

// Waits for the next frame while the counter runs.
void next_frame() {
  GetCurrentContext();
  float frame = g_frame_counter->GetFrameCount();
  ScriptContext* context = GetCurrentContext();
  if (frame > 0.0f) {
    context->GetRunner()->SetBlockState(2);
    context->ClearCallback();
  }
  else {
    context->GetRunner()->SetBlockState(0);
  }
}

void exit_on() {
  GetRunningContext()->SetExitEnabled(true);
  SetBlockState(1);
}

void exit_off() {
  GetRunningContext()->SetExitEnabled(false);
  SetBlockState(1);
}

void clear_my_parent() {
  GetRunningContext()->GetParent().Clear();
  SetBlockState(1);
}

void enable_thread_build() {
  SetBlockResult(g_script_manager->EnableThreadBuild());
}

void disable_thread_build() {
  SetBlockResult(g_script_manager->DisableThreadBuild());
}

void stop(ContextHandle handle) {
  g_script_manager->Stop(handle, true);
  SetBlockState(1);
}

void stop_with_all_child(ContextHandle handle) {
  g_script_manager->StopWithAllChild(handle, true);
  SetBlockState(1);
}

void stop_my_all_child() {
  ContextHandle handle(GetCurrentContext());
  g_script_manager->StopAllChild(handle, true);
  SetBlockState(1);
}

// Waits until the context ends.
void wait(ContextHandle handle) {
  ScriptContext* context = handle.Get();
  SetBlockResult(!(context != nullptr && context->IsRunning()));
}

bool busy(ContextHandle handle) {
  ScriptContext* context = handle.Get();
  bool running = context != nullptr && context->IsRunning();
  SetBlockState(1);
  return running;
}

void clear_parent(ContextHandle handle) {
  ScriptContext* context = handle.Get();
  if (context != nullptr && context->GetParent().Get() != nullptr) {
    context->GetParent().Clear();
  }
  SetBlockState(1);
}

int run_ctrl(int flg) {
  int previous = GetRunningContext()->GetRunCtrl();
  GetRunningContext()->SetRunCtrl(flg);
  SetBlockState(1);
  return previous;
}

void set_skip_counter(uint32_t mask, uint32_t counter) {
  GetRunningContext()->SetSkipMask(mask);
  GetRunningContext()->SetSkipCounter(counter);
  SetBlockState(1);
}

// Only the first exit function set is kept.
void exit(const string& func) {
  char declaration[0x100];
  sprintf(declaration, "void %s(void)", func.c_str());
  ScriptContext* context = GetCurrentContext();
  if (context->GetExitFunction()[0] == '\0') {
    strcpy(context->GetExitFunction(), declaration);
  }
  SetBlockState(1);
}

// The argument is only kept with the first exit function, its reference
// is dropped either way.
void exit(const string& func, Any* arg) {
  char declaration[0x100];
  sprintf(declaration, "void %s(any@ arg)", func.c_str());
  ScriptContext* context = GetCurrentContext();
  if (context->GetExitFunction()[0] == '\0') {
    strcpy(context->GetExitFunction(), declaration);
    context->GetExitArgument().SetAny(arg);
  }
  arg->Release();
  SetBlockState(1);
}

}
