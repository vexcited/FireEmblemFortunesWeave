#pragma once

#include <new>

#include "angelscript/angelscript/include/angelscript.h"
#include "angelscript/add_on/scriptany/scriptany.h"
#include "angelscript/fork/add_on/as_string.h"
#include "as/script_context.hpp"
#include "memory/heap_manager.hpp"

extern asALLOCFUNC_t userAlloc;

namespace as {

// The engine the any values of the variables are created in.
extern asIScriptEngine* g_engine;

inline void Variable::reset() {
  if (type_ == kAny) {
    any_->Release();
  }
  else if (type_ == kString) {
    string_->~string();
    fw::memory::g_heap_manager->GetAllocator(3).Free(string_);
  }
  else {
    return;
  }
  pointer_ = nullptr;
  type_ = kNone;
}

inline void Variable::setInt(int value) {
  reset();
  int_ = value;
  type_ = kInt;
}

inline void Variable::setHex(uint32_t value) {
  reset();
  hex_ = value;
  type_ = kHex;
}

inline void Variable::setFloat(float value) {
  reset();
  float_ = value;
  type_ = kFloat;
}

// The strings live in pool 3 of the game heap.
inline void Variable::setString(const string& value) {
  if (type_ != kString) {
    reset();
    string_ = new (fw::memory::g_heap_manager->Allocate(sizeof(string), 32, 3))
      string();
    *string_ = "";
  }
  type_ = kString;
  *string_ = value;
}

inline void Variable::setBool(bool value) {
  reset();
  type_ = kBool;
  bool_ = value;
}

inline Variable::Variable(int value) : pointer_(nullptr), type_(kInt) {
  int_ = value;
}

inline Variable::Variable(uint32_t value) : pointer_(nullptr), type_(kHex) {
  hex_ = value;
}

inline Variable::Variable(float value) : pointer_(nullptr), type_(kFloat) {
  float_ = value;
}

inline Variable::Variable(bool value) : pointer_(nullptr), type_(kBool) {
  bool_ = value;
}

inline Variable::Variable(const string& value)
  : pointer_(nullptr), type_(kNone) {
  setString(value);
}

inline Variable::Variable(const CScriptAny& value)
  : pointer_(nullptr), type_(kNone) {
  setAny(value);
}

inline Variable::Variable(const Variable& other)
  : pointer_(nullptr), type_(kNone) {
  setVariable(other);
}

inline Variable::Variable(void* ref, int typeId)
  : pointer_(nullptr), type_(kNone) {
  store(ref, typeId);
}

inline Variable& Variable::operator=(int value) {
  setInt(value);
  return *this;
}

inline Variable& Variable::operator=(uint32_t value) {
  setHex(value);
  return *this;
}

inline Variable& Variable::operator=(float value) {
  setFloat(value);
  return *this;
}

inline Variable& Variable::operator=(const string& value) {
  setString(value);
  return *this;
}

inline Variable& Variable::operator=(bool value) {
  setBool(value);
  return *this;
}

inline Variable& Variable::operator=(const Variable& other) {
  setVariable(other);
  return *this;
}

inline Variable& Variable::operator=(const CScriptAny& value) {
  setAny(value);
  return *this;
}

}
