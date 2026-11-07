#include "nn/diag/diag_abort.hpp"
#include "nn/sf/exp_heap_proxy.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/streamplay/detail/streamplay_user_service.hpp"

namespace nn::streamplay::detail {

extern sf::ExpHeapAllocator g_UserServiceProxyHeap;

extern uintptr_t UserServiceProxyVtable[];

sf::SharedPointer<IUserService> CreateUserServiceByHipc() {
  sf::SharedPointer<IUserService> service;
  uint32_t handle = 0;
  sf::hipc::InitializeHipcServiceResolution();
  const Result result{sf::hipc::ConnectToHipcService(&handle, "stpl:u")};
  sf::hipc::FinalizeHipcServiceResolution();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  sf::SharedPointer<IUserService>(sf::detail::CreateExpHeapProxy<IUserService>(
    g_UserServiceProxyHeap, handle, UserServiceProxyVtable, 8), false)
    .Swap(service);
  return service;
}

}
