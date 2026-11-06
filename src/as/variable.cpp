#include "as/variable.hpp"

namespace as {

Variable::~Variable() {
  reset();
}

int Variable::getInt() const {
  if (type_ == kBool) {
    return bool_;
  }
  if (type_ == kFloat) {
    return static_cast<int>(float_);
  }
  return int_;
}

uint32_t Variable::getHex() const {
  if (type_ == kBool) {
    return bool_;
  }
  if (type_ == kFloat) {
    return static_cast<uint32_t>(float_);
  }
  return hex_;
}

float Variable::getFloat() const {
  switch (type_) {
    case kBool:
      return bool_;
    case kHex:
      return static_cast<float>(hex_);
    case kInt:
      return static_cast<float>(int_);
    default:
      return float_;
  }
}

string& Variable::getString() const {
  return *string_;
}

bool Variable::getBool() const {
  switch (type_) {
    case kFloat:
      return float_ != 0.0f;
    case kInt:
    case kHex:
      return int_ != 0;
    default:
      return bool_;
  }
}

CScriptAny& Variable::getAny() const {
  return *any_;
}

ContextHandle Variable::getHandle() const {
  return ContextHandle(handle_.Get());
}

void*& Variable::pointerRef() {
  reset();
  type_ = kPointer;
  return pointer_;
}

bool Variable::isInt() const {
  return type_ == kInt;
}

bool Variable::isHex() const {
  return type_ == kHex;
}

bool Variable::isFloat() const {
  return type_ == kFloat;
}

bool Variable::isString() const {
  return type_ == kString;
}

bool Variable::isBool() const {
  return type_ == kBool;
}

bool Variable::isAny() const {
  return type_ == kAny;
}

void Variable::setAny(const CScriptAny& value) {
  if (type_ != kAny) {
    reset();
    any_ = new (userAlloc(sizeof(CScriptAny))) CScriptAny(g_engine);
  }
  type_ = kAny;
  *any_ = value;
}

void Variable::store(void* ref, int typeId) {
  if (type_ != kAny) {
    reset();
    any_ = new (userAlloc(sizeof(CScriptAny))) CScriptAny(g_engine);
  }
  type_ = kAny;
  any_->Store(ref, typeId);
}

}
