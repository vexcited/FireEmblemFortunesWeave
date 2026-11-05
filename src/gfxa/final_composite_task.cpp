#include "gfxa/final_composite_task.hpp"

namespace gfxa {

FinalCompositeTask::~FinalCompositeTask() {
  binding_.Detach(g_renderer->compositeTargets);
}

}
