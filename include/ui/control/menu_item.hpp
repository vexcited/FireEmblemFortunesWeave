#pragma once

#include <list>
#include <memory>

#include "ui/control/element.hpp"

namespace ui::control {

#pragma GCC visibility push(hidden)

class MenuItem : public Element {
public:
  static std::shared_ptr<ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);

  ~MenuItem() override = default;

  std::shared_ptr<ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

  virtual void Unknown43();
  virtual void Unknown44();
  virtual void Unknown45();
  virtual void Unknown46();
  virtual void Unknown47();
  virtual void Unknown48();
  virtual void Unknown49();
  virtual void Unknown50();

protected:
  MenuItem(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);
  MenuItem(const MenuItem& source, nn::ui2d::Layout* layout);

  void SetMessage(const char* message_id);

private:
  uint64_t unknown_408_;
  std::list<void*> unknown_410_;
};

class GenericMenuItem : public MenuItem {
public:
  static std::shared_ptr<ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);

  ~GenericMenuItem() override = default;

  std::shared_ptr<ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

  virtual void Unknown51();

protected:
  GenericMenuItem(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, Layout* owner);
  GenericMenuItem(const GenericMenuItem& source, nn::ui2d::Layout* layout);
};

#pragma GCC visibility pop

}
