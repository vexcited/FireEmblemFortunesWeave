#pragma once

#include <utility>

namespace nn::util::detail {

template<typename F>
class ScopeExitHolder {
public:
  explicit ScopeExitHolder(F&& function)
    : m_Function(std::move(function)), m_IsActive(true) {}

  ScopeExitHolder(const ScopeExitHolder&) = delete;
  ScopeExitHolder& operator=(const ScopeExitHolder&) = delete;

  ~ScopeExitHolder() {
    if (m_IsActive) {
      m_Function();
    }
  }

private:
  F m_Function;
  bool m_IsActive;
};

struct ScopeExitHolderMaker {
  template<typename F>
  ScopeExitHolder<F> operator+(F&& function) {
    return ScopeExitHolder<F>(std::forward<F>(function));
  }
};

}

#define NN_UTIL_SCOPE_EXIT_CONCAT_IMPL(a, b) a##b
#define NN_UTIL_SCOPE_EXIT_CONCAT(a, b) NN_UTIL_SCOPE_EXIT_CONCAT_IMPL(a, b)

#define NN_UTIL_SCOPE_EXIT \
  auto NN_UTIL_SCOPE_EXIT_CONCAT(nnUtilScopeExit, __LINE__) = \
    ::nn::util::detail::ScopeExitHolderMaker() + [&]() -> void
