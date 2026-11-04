#pragma GCC visibility push(hidden)
#include "game/facility/scene_spline.hpp"
#pragma GCC visibility pop

namespace game::facility {

template<typename T>
SceneSplineBase<T>::SceneSplineBase() = default;

template class SceneSplineBase<float>;
template class SceneSplineBase<math::Vec3>;

}
