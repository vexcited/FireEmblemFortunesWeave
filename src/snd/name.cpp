#include "snd/obj.hpp"

namespace snd {

Name::Name(const char* name) : name_("") {
  setName(name);
}

Name::~Name() = default;

void Name::setName(const char* name) {
  name_ = name != nullptr ? name : "";
}

const char* Name::getName() const {
  return name_.c_str();
}

fnd::String Name::getNameString() const {
  return name_;
}

}
