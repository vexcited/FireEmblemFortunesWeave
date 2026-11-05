#include "snd/obj.hpp"

namespace snd {

Obj::Obj(Manager* manager, const char* name) : Name(name), manager_(manager) {}

Obj::~Obj() = default;

void Obj::onMain() {}

}
