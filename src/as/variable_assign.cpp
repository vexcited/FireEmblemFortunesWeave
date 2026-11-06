#include "as/variable.hpp"

namespace as {

void Variable::setVariable(const Variable& other) {
  switch (other.type_) {
    case kInt:
      setInt(other.int_);
      break;
    case kHex:
      setHex(other.hex_);
      break;
    case kFloat:
      setFloat(other.float_);
      break;
    case kString:
      setString(*other.string_);
      break;
    case kBool:
      setBool(other.bool_);
      break;
    case kPointer:
      pointerRef() = other.pointer_;
      break;
    case kAny:
      setAny(*other.any_);
      break;
    case kHandle:
      setHandle(other.getHandle());
      break;
    default:
      break;
  }
}

void Variable::setHandle(const ContextHandle& handle) {
  reset();
  type_ = kHandle;
  handle_.Assign(handle);
}

}
