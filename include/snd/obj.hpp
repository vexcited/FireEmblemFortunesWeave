#pragma once

#include "snd/fnd/string.hpp"

namespace snd {

class Manager;

class Name {
public:
  Name();
  explicit Name(const char* name);
  virtual ~Name();

  virtual void setName(const char* name);
  virtual const char* getName() const;
  virtual fnd::String getNameString() const;

protected:
  fnd::String name_;
};

// Every sound object: a name, the manager that owns it, and the two pure
// lifetime hooks that the slots call.
class Obj : public Name {
public:
  Obj(Manager* manager, const char* name);
  ~Obj() override;

  virtual void destroy() = 0;
  virtual void mainUnlocked() = 0;
  virtual void onMain();

  Manager* getManager() const {
    return manager_;
  }

protected:
  Manager* manager_;
};

}
