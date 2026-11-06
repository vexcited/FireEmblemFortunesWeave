#include "as/variable.hpp"

// The behaviors and methods of the as::Variable script type. The script
// passes the object last to the constructors and first to the methods.
namespace as::variable {

void Construct(void* memory) {
  new (memory) Variable();
}

void ConstructInt8(int8_t value, void* memory) {
  new (memory) Variable(static_cast<int>(value));
}

void ConstructUint8(uint8_t value, void* memory) {
  new (memory) Variable(static_cast<uint32_t>(value));
}

void ConstructInt16(int16_t value, void* memory) {
  new (memory) Variable(static_cast<int>(value));
}

void ConstructUint16(uint16_t value, void* memory) {
  new (memory) Variable(static_cast<uint32_t>(value));
}

void ConstructInt(int value, void* memory) {
  new (memory) Variable(value);
}

void ConstructUint(uint32_t value, void* memory) {
  new (memory) Variable(value);
}

void ConstructFloat(float value, void* memory) {
  new (memory) Variable(value);
}

void ConstructString(const string& value, void* memory) {
  new (memory) Variable(value);
}

void ConstructBool(bool value, void* memory) {
  new (memory) Variable(value);
}

void ConstructCopy(const Variable& other, void* memory) {
  new (memory) Variable(other);
}

void ConstructAny(const CScriptAny& value, void* memory) {
  new (memory) Variable(value);
}

void ConstructRef(void* ref, int typeId, void* memory) {
  new (memory) Variable(ref, typeId);
}

void ConstructHandle(void* memory) {
  new (memory) ContextHandle;
}

void ConstructHandleCopy(void* memory, const ContextHandle& other) {
  (new (memory) ContextHandle)->Assign(other);
}

void Destruct(Variable* self) {
  self->~Variable();
}

void SetInt(Variable* self, int value) {
  self->setInt(value);
}

void SetHex(Variable* self, uint32_t value) {
  self->setHex(value);
}

void SetFloat(Variable* self, float value) {
  self->setFloat(value);
}

void SetString(Variable* self, const string& value) {
  self->setString(value);
}

void SetBool(Variable* self, bool value) {
  self->setBool(value);
}

Variable& AssignInt(Variable* self, int value) {
  return *self = value;
}

Variable& AssignHex(Variable* self, uint32_t value) {
  return *self = value;
}

Variable& AssignFloat(Variable* self, float value) {
  return *self = value;
}

Variable& AssignString(Variable* self, const string& value) {
  self->setString(value);
  return *self;
}

Variable& AssignBool(Variable* self, bool value) {
  return *self = value;
}

Variable& AssignVariable(Variable* self, const Variable& other) {
  return *self = other;
}

Variable& AssignAny(Variable* self, const CScriptAny& value) {
  return *self = value;
}

}
