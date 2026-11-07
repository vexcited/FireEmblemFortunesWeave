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
  int GetTypeId() const;

  // The object held, for the class types.
  void* GetObject() const;
};

[[gnu::visibility("default")]] extern asIScriptEngine* g_engine;

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

// The context running the module of the calling function.
[[gnu::always_inline]] inline ContextHandle FindModuleContext() {
  const char* module =
    GetRunningContext()->GetRunner()->GetFunction()->GetModuleName();
  return g_script_manager->FindContext(module);
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
  target.Assign(FindModuleContext());
  return nullptr;
}

[[gnu::always_inline]] inline void EndBlock() {
  ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The new context takes the variables of the calling one.
[[gnu::always_inline]] inline ScriptContext* Inherit(
  const ContextHandle& result) {
  GetCurrentContext();
  for (int i = 0; i < ScriptContext::kVariableCount; i++) {
    result.GetSlotContext()->GetVariable(i).setVariable(
      GetRunningContext()->GetVariable(i));
  }
  return result.GetSlotContext();
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
    ScriptContext* context = Inherit(result);
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
  EndBlock();
  return result;
}

// Runs the method of the class object when the target has it, else the
// function as the runs without one. The brother runs start as plain runs.
template<RunKind kind>
[[gnu::always_inline]] inline ContextHandle StartMethod(const Any* classObj,
  const string& func) {
  ContextHandle target(GetRunningContext()->GetOwner().Get());
  ContextHandle result;
  char declaration[0x100];
  sprintf(declaration, "void %s(void)", func.c_str());
  const int runKind = kind == RunKind::kPost ? 3 : 2;
  ScriptContext* owner;
  if (classObj != nullptr) {
    // The original passes the type id to the lookup by index.
    const int typeId = classObj->GetTypeId();
    asITypeInfo* type = g_engine->GetObjectTypeByIndex(typeId);
    const char* ns = type->GetNamespace();
    const char* name = type->GetName();
    if (g_script_manager->FindMethod(target.Get(), ns, name,
      declaration) == nullptr) {
      target.Assign(FindModuleContext());
    }
    owner = target.Get();
    if (owner == nullptr) {
      EndBlock();
      return result;
    }
    result.Assign(g_script_manager->RunMethod(owner->GetOwner(), target,
      classObj->GetObject(), type->GetNamespace(), type->GetName(),
      declaration, GetRunningContext()->GetPriority(),
      GetRunningContext()->GetRunCtrl(), runKind));
  }
  else {
    FindTarget(target, declaration);
    owner = target.Get();
    if (owner == nullptr) {
      EndBlock();
      return result;
    }
    const int priority = GetRunningContext()->GetPriority();
    result.Assign(g_script_manager->Run(owner->GetOwner(), target,
      declaration, priority, GetRunningContext()->GetRunCtrl(), runKind));
  }
  ScriptContext* context = Inherit(result);
  context->GetParent().Assign(ContextHandle(GetCurrentContext()));
  if (kind == RunKind::kRunBrother) {
    context->GetBrother().Assign(ContextHandle(GetCurrentContext()));
  }
  EndBlock();
  return result;
}

}

ContextHandle run(const Any* classObj, const string& func) {
  return StartMethod<RunKind::kRun>(classObj, func);
}

ContextHandle post_run(const Any* classObj, const string& func) {
  return StartMethod<RunKind::kPost>(classObj, func);
}

ContextHandle run_brother(const Any* classObj, const string& func) {
  return StartMethod<RunKind::kRunBrother>(classObj, func);
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
