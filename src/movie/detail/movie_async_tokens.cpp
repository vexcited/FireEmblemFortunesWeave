#include <new>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/movie_async_tokens.hpp"

namespace movie::detail {

class AsyncCallbackRegistrationToken
  : public MovieRefBase<IAsyncCallbackRegistrationToken> {
public:
  explicit AsyncCallbackRegistrationToken(IAllocator* allocator)
    : MovieRefBase(allocator) {}
};

class AsyncCancellationToken : public MovieRefBase<IAsyncCancellationToken> {
public:
  explicit AsyncCancellationToken(IAllocator* allocator)
    : MovieRefBase(allocator) {}
};

}

namespace movie {

namespace {

template <typename T, typename I>
MovieResult CreateToken(I** ppOutToken, IAllocator* allocator) {
  *ppOutToken = nullptr;
  void* storage = allocator->Allocate(sizeof(T));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  T* token = new (storage) T(allocator);
  *ppOutToken = token;
  token->AddRef();
  return MovieResult_Success;
}

}

MovieResult CreateAsyncCallbackRegistrationToken(
  IAsyncCallbackRegistrationToken** ppOutToken, IAllocator* allocator) {
  return CreateToken<detail::AsyncCallbackRegistrationToken>(ppOutToken,
    allocator);
}

MovieResult CreateAsyncCancellationToken(
  IAsyncCancellationToken** ppOutToken, IAllocator* allocator) {
  return CreateToken<detail::AsyncCancellationToken>(ppOutToken, allocator);
}

}
