#pragma once

#include "movie/movie_interfaces.hpp"

namespace movie {

class IAsyncCallbackRegistrationToken : public IMovieInterface {
};

class IAsyncCancellationToken : public IMovieInterface {
};

MovieResult CreateAsyncCallbackRegistrationToken(
  IAsyncCallbackRegistrationToken** ppOutToken, IAllocator* allocator);
MovieResult CreateAsyncCancellationToken(
  IAsyncCancellationToken** ppOutToken, IAllocator* allocator);

}
