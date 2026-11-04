#pragma once

#include <memory>

namespace ui {

class Layout : public std::enable_shared_from_this<Layout> {
public:
  virtual ~Layout();
};

}
