#pragma once

#include "movie/detail/movie_ref_base.hpp"
#include "nn/os/system_event.hpp"

namespace movie::detail {

class SystemEvent : public MovieRefBase<IMovieInterface> {
public:
  SystemEvent(IAllocator* allocator, nn::os::EventClearMode clearMode);
  ~SystemEvent() override;

  MovieResult Initialize();
  void Finalize();
  void Signal();
  void Wait();
  bool TryWait();
  bool TimedWait(nn::TimeSpan timeout);
  void Clear();

private:
  nn::os::SystemEventType m_Event;
  MovieResult m_Status;
};

}
