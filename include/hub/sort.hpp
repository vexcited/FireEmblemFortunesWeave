#pragma once

#include <stddef.h>

namespace fw::hub {

#define DECLARE_SORT(Name) \
  void Sort##Name( \
    void** first, void** last, size_t count, void** buffer, ptrdiff_t capacity \
  ); \
  void Sort##Name##Buffered( \
    void** first, void** last, size_t count, void** buffer \
  ); \
  void Merge##Name( \
    void** first, void** middle, void** last, ptrdiff_t left_count, \
    ptrdiff_t right_count, void** buffer, ptrdiff_t capacity \
  );

DECLARE_SORT(Placement)
DECLARE_SORT(PlacementElements)
DECLARE_SORT(EventRange)
DECLARE_SORT(EventRangeElements)
DECLARE_SORT(Locator)
DECLARE_SORT(LocatorElements)
DECLARE_SORT(Object)
DECLARE_SORT(ObjectElements)

#undef DECLARE_SORT

}
