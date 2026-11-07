#include <cstdio>

#include "angelscript/fork/angelscript/include/angelscript.h"

namespace as {

class ScriptManager;
struct ContextSlot;

// The run natives read the manager and the slots through the global offset
// table, so they are declared with default visibility before the header.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;
[[gnu::visibility("default")]] extern ContextSlot g_context_slots[];

}

#include "as/script_context.hpp"
#include "game/script/script_string.hpp"

namespace as {

// The any type of the scripts, reference counted.
class Any {
public:
  int Release() const;
};

namespace {

[[gnu::always_inline]] inline uint32_t GetThreadIndex() {
  return g_thread_info->GetIndex();
}

// Looks the function up with no thread running, the module would see the
// current one otherwise.
[[gnu::always_inline]] inline asIScriptFunction* FindFunction(
  asIScriptModule* module, const char* declaration) {
  g_script_manager->PushThread(GetThreadIndex(), nullptr);
  asIScriptFunction* function = module->GetFunctionByDecl(declaration);
  g_script_manager->PopThread(GetThreadIndex());
  return function;
}

// The owner of the calling context when it has the function, else the
// context running the module of the calling function. Gives the function
// found in the owner.
[[gnu::always_inline]] inline asIScriptFunction* FindTarget(
  ContextHandle& target, const char* declaration) {
  ScriptContext* owner = target.Get();
  if (owner != nullptr && owner->GetModule() != nullptr) {
    asIScriptFunction* function =
      FindFunction(owner->GetModule(), declaration);
    if (function != nullptr) {
      return function;
    }
  }
  const char* module =
    GetRunningContext()->GetRunner()->GetFunction()->GetModuleName();
  target.Assign(g_script_manager->FindContext(module));
  return nullptr;
}

enum class RunKind {
  kRun,
  kPost,
  kRunBrother,
  kPostBrother,
};

// The new context takes the variables of the calling one and the argument,
// the calling one becomes its parent, and its brother for the brother runs.
template<RunKind kind, bool hasArgument>
[[gnu::always_inline]] inline ContextHandle Start(const string& func,
  Any* arg) {
  ContextHandle target(GetRunningContext()->GetOwner().Get());
  ContextHandle result;
  char declaration[0x100];
  sprintf(declaration, hasArgument ? "void %s(any@ arg)" : "void %s(void)",
    func.c_str());
  asIScriptFunction* function = FindTarget(target, declaration);
  if (ScriptContext* owner = target.Get()) {
    const int priority = GetRunningContext()->GetPriority();
    if constexpr (kind == RunKind::kRunBrother) {
      result.Assign(g_script_manager->RunBrother(owner->GetOwner(), target,
        declaration, function, priority, GetRunningContext()->GetRunCtrl(),
        2));
    }
    else {
      result.Assign(g_script_manager->Run(owner->GetOwner(), target,
        declaration, priority, GetRunningContext()->GetRunCtrl(),
        kind == RunKind::kRun ? 2 : 3));
    }
    GetCurrentContext();
    for (int i = 0; i < ScriptContext::kVariableCount; i++) {
      result.GetSlotContext()->GetVariable(i).setVariable(
        GetRunningContext()->GetVariable(i));
    }
    ScriptContext* context = result.GetSlotContext();
    if (hasArgument && kind != RunKind::kRunBrother) {
      context->GetRunner()->SetArgObject(0, arg);
    }
    context->GetParent().Assign(ContextHandle(GetCurrentContext()));
    if (kind == RunKind::kRunBrother || kind == RunKind::kPostBrother) {
      context->GetBrother().Assign(ContextHandle(GetCurrentContext()));
    }
    if (hasArgument && kind == RunKind::kRunBrother) {
      context->GetRunner()->SetArgObject(0, arg);
    }
  }
  if (hasArgument) {
    arg->Release();
  }
  ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
  return result;
}

}

ContextHandle run(const string& func, Any* arg) {
  return Start<RunKind::kRun, true>(func, arg);
}

ContextHandle post_run(const string& func, Any* arg) {
  return Start<RunKind::kPost, true>(func, arg);
}

ContextHandle run_brother(const string& func, Any* arg) {
  return Start<RunKind::kRunBrother, true>(func, arg);
}

ContextHandle post_run_brother(const string& func) {
  return Start<RunKind::kPostBrother, false>(func, nullptr);
}

ContextHandle post_run_brother(const string& func, Any* arg) {
  return Start<RunKind::kPostBrother, true>(func, arg);
}

}
