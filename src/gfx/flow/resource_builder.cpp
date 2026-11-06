#include "gfx/flow/render_graph.hpp"
#include "gfx/flow/resource.hpp"

namespace gfx::flow {

// Stand in for the resource types of the builder helpers, which were not
// recovered. Each index is one copy of a helper, sorted by address.
template<unsigned N>
class UnrecoveredResource : public ResourceBase {};

template<unsigned N>
struct UnrecoveredDesc;

}

#define USE(n) \
  template gfx::flow::UnrecoveredResource<n>* \
  gfx::flow::ResourceBuilder::Use(gfx::flow::UnrecoveredResource<n>*);

#define CREATE(n) \
  template gfx::flow::UnrecoveredResource<n>* \
  gfx::flow::ResourceBuilder::Create<gfx::flow::UnrecoveredResource<n>>( \
    const char*, const gfx::flow::UnrecoveredDesc<n>&);

USE(0)
USE(1)
USE(2)
USE(3)
USE(4)
USE(5)
USE(6)
USE(7)
USE(8)

CREATE(100)
CREATE(101)
CREATE(102)
CREATE(103)
CREATE(104)
CREATE(105)
CREATE(106)
CREATE(107)
CREATE(108)
CREATE(109)
CREATE(110)
CREATE(111)
CREATE(112)
CREATE(113)
CREATE(114)
CREATE(115)
CREATE(116)
CREATE(117)
CREATE(118)
CREATE(119)
CREATE(120)
CREATE(121)
CREATE(122)
CREATE(123)
