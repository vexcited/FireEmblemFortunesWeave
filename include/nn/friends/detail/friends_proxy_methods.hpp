#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<friends::detail::ipc::IFriendService, Kind>
  : public CmifProxyMethodsBase<friends::detail::ipc::IFriendService, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Cancel() {
    return this->template InvokeMethod<false, 1, void()>();
  }

  virtual Result GetFriendListIds(
    Out<uint32_t> argument0, const BufferArray<10, uint64_t>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3,
    const RawData<16, 8>& argument4, uint64_t argument5) {
    return this->template InvokeMethod<true, 10100, void(
      Out<uint32_t>, const BufferArray<10, uint64_t>&, const RawData<16, 8>&,
      uint32_t, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result GetFriendList(
    Out<uint32_t> argument0, const OutArray<RawData<512, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3,
    const RawData<16, 8>& argument4, uint64_t argument5) {
    return this->template InvokeMethod<true, 10101, void(
      Out<uint32_t>, const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      uint32_t, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result UpdateFriendInfo(
    const OutArray<RawData<512, 8>>& argument0, const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2, uint64_t argument3) {
    return this->template InvokeMethod<true, 10102, void(
      const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result GetFriendProfileImage(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2, const OutBuffer& argument3) {
    return this->template InvokeMethod<false, 10110, void(
      Out<uint32_t>, const RawData<16, 8>&, uint64_t, const OutBuffer&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command10111(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2, const OutBuffer& argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 10111, void(
      Out<uint32_t>, const RawData<16, 8>&, uint64_t, const OutBuffer&,
      uint32_t)>(argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result CheckFriendListAvailability(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 10120, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command10121(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 10121, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command10200(
    const RawData<16, 8>& argument0, uint64_t argument1,
    const LargeData<25, 72, 8>& argument2,
    const LargeData<25, 72, 8>& argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 10200, void(
      const RawData<16, 8>&, uint64_t, const LargeData<25, 72, 8>&,
      const LargeData<25, 72, 8>&, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result AddFacedFriendRequestForApplication(
    const RawData<16, 8>& argument0, const RawData<64, 1>& argument1,
    const RawData<33, 1>& argument2, const InBuffer& argument3,
    const LargeData<25, 72, 8>& argument4,
    const LargeData<25, 72, 8>& argument5, uint64_t argument6) {
    return this->template InvokeMethod<true, 10211, void(
      const RawData<16, 8>&, const RawData<64, 1>&, const RawData<33, 1>&,
      const InBuffer&, const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&,
      uint64_t)>(
      argument0, argument1, argument2, argument3, argument4, argument5,
      argument6);
  }

  virtual Result GetBlockedUserListIds(
    Out<uint32_t> argument0, const BufferArray<10, uint64_t>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 10400, void(
      Out<uint32_t>, const BufferArray<10, uint64_t>&, const RawData<16, 8>&,
      uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result CheckBlockedUserListAvailability(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 10420, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command10421(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 10421, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command10500(
    const OutArray<RawData<256, 8>>& argument0, const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 10500, void(
      const OutArray<RawData<256, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command10501(
    const OutArray<RawData<256, 8>>& argument0, const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 10501, void(
      const OutArray<RawData<256, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result DeclareOpenOnlinePlaySession(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 10600, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result DeclareCloseOnlinePlaySession(
    const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 10601, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result UpdateUserPresence(
    const RawData<16, 8>& argument0, const LargeData<25, 224, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<true, 10610, void(
      const RawData<16, 8>&, const LargeData<25, 224, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result GetPlayHistoryRegistrationKey(
    Out<LargeData<26, 64, 8>> argument0, const RawData<16, 8>& argument1,
    bool argument2) {
    return this->template InvokeMethod<false, 10700, void(
      Out<LargeData<26, 64, 8>>, const RawData<16, 8>&, bool)>(
      argument0, argument1, argument2);
  }

  virtual Result GetPlayHistoryRegistrationKeyWithNetworkServiceAccountId(
    Out<LargeData<26, 64, 8>> argument0, uint64_t argument1, bool argument2) {
    return this->template InvokeMethod<false, 10701, void(
      Out<LargeData<26, 64, 8>>, uint64_t, bool)>(
      argument0, argument1, argument2);
  }

  virtual Result AddPlayHistory(
    const RawData<16, 8>& argument0, const LargeData<25, 64, 8>& argument1,
    const LargeData<25, 72, 8>& argument2,
    const LargeData<25, 72, 8>& argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 10702, void(
      const RawData<16, 8>&, const LargeData<25, 64, 8>&,
      const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command11000(
    Out<RawData<160, 4>> argument0, const RawData<160, 4>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 11000, void(
      Out<RawData<160, 4>>, const RawData<160, 4>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result GetProfileImageUrl(
    Out<RawData<160, 4>> argument0, const RawData<160, 4>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 11001, void(
      Out<RawData<160, 4>>, const RawData<160, 4>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20100(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1,
    const RawData<16, 8>& argument2, uint64_t argument3) {
    return this->template InvokeMethod<true, 20100, void(
      Out<uint32_t>, const RawData<16, 8>&, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command20101(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20101, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command20102(
    Out<LargeData<26, 2048, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 20102, void(
      Out<LargeData<26, 2048, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20103(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 20103, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command20104(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 20104, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command20105(
    Out<uint32_t> argument0, const OutArray<RawData<512, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3,
    const RawData<16, 8>& argument4) {
    return this->template InvokeMethod<false, 20105, void(
      Out<uint32_t>, const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      uint32_t, const RawData<16, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command20106(
    const OutArray<RawData<512, 8>>& argument0, const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 20106, void(
      const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command20107(
    Out<LargeData<26, 2048, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 20107, void(
      Out<LargeData<26, 2048, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20108(
    Out<uint32_t> argument0, const OutArray<RawData<544, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3,
    const RawData<16, 8>& argument4) {
    return this->template InvokeMethod<false, 20108, void(
      Out<uint32_t>, const OutArray<RawData<544, 8>>&, const RawData<16, 8>&,
      uint32_t, const RawData<16, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command20109(
    const OutArray<RawData<544, 8>>& argument0, const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 20109, void(
      const OutArray<RawData<544, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command20110(
    Out<LargeData<26, 64, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 20110, void(
      Out<LargeData<26, 64, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20111(
    Out<LargeData<26, 128, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 20111, void(
      Out<LargeData<26, 128, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20200(
    Out<uint32_t> argument0, Out<uint32_t> argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 20200, void(
      Out<uint32_t>, Out<uint32_t>, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20201(
    Out<uint32_t> argument0, const OutArray<RawData<512, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 20201, void(
      Out<uint32_t>, const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      uint32_t, uint32_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command20202(
    Out<uint32_t> argument0, const OutArray<RawData<512, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 20202, void(
      Out<uint32_t>, const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      uint32_t, uint32_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command20203(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20203, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command20400(
    Out<uint32_t> argument0, const OutArray<RawData<512, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 20400, void(
      Out<uint32_t>, const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command20401(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 20401, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command20402(
    Out<uint32_t> argument0, const OutArray<RawData<512, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 20402, void(
      Out<uint32_t>, const OutArray<RawData<512, 8>>&, const RawData<16, 8>&,
      uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command20500(
    const OutArray<RawData<1024, 8>>& argument0,
    const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 20500, void(
      const OutArray<RawData<1024, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command20501(
    Out<uint64_t> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 20501, void(
      Out<uint64_t>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20502(
    const OutArray<RawData<1192, 8>>& argument0,
    const RawData<16, 8>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 20502, void(
      const OutArray<RawData<1192, 8>>&, const RawData<16, 8>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command20600(
    Out<LargeData<26, 224, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20600, void(
      Out<LargeData<26, 224, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command20601(
    Out<LargeData<26, 232, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20601, void(
      Out<LargeData<26, 232, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command20700(
    Out<uint32_t> argument0, const OutArray<RawData<256, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 20700, void(
      Out<uint32_t>, const OutArray<RawData<256, 8>>&, const RawData<16, 8>&,
      uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command20701(
    Out<RawData<16, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20701, void(
      Out<RawData<16, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command20702(
    Out<uint32_t> argument0, const OutArray<RawData<256, 8>>& argument1,
    const RawData<16, 8>& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 20702, void(
      Out<uint32_t>, const OutArray<RawData<256, 8>>&, const RawData<16, 8>&,
      uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command20800(
    Out<LargeData<26, 2048, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20800, void(
      Out<LargeData<26, 2048, 8>>, const RawData<16, 8>&)>(
      argument0, argument1);
  }

  virtual Result Command20801(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 20801, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command20802(
    Out<LargeData<26, 2048, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 20802, void(
      Out<LargeData<26, 2048, 8>>, const RawData<16, 8>&)>(
      argument0, argument1);
  }

  virtual Result Command20900() {
    return this->template InvokeMethod<false, 20900, void()>();
  }

  virtual Result Command21000(
    Out<LargeData<26, 1208, 8>> argument0, const RawData<16, 8>& argument1,
    RawData<8, 1> argument2) {
    return this->template InvokeMethod<false, 21000, void(
      Out<LargeData<26, 1208, 8>>, const RawData<16, 8>&, RawData<8, 1>)>(
      argument0, argument1, argument2);
  }

  virtual Result Command22000(
    Out<uint32_t> argument0, const OutArray<RawData<1280, 8>>& argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 22000, void(
      Out<uint32_t>, const OutArray<RawData<1280, 8>>&, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command22001(
    Out<LargeData<22, 5120, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 22001, void(
      Out<LargeData<22, 5120, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command22002(
    Out<uint32_t> argument0, const OutArray<RawData<1280, 8>>& argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 22002, void(
      Out<uint32_t>, const OutArray<RawData<1280, 8>>&, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command22003(
    Out<LargeData<22, 5120, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 22003, void(
      Out<LargeData<22, 5120, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command22004(
    Out<LargeData<22, 5120, 8>> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 22004, void(
      Out<LargeData<22, 5120, 8>>, const RawData<16, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command22010(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 22010, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command30100(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 30100, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command30101(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30101, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30110(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30110, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30120(
    const RawData<16, 8>& argument0, uint64_t argument1, bool argument2) {
    return this->template InvokeMethod<false, 30120, void(
      const RawData<16, 8>&, uint64_t, bool)>(argument0, argument1, argument2);
  }

  virtual Result Command30121(
    const RawData<16, 8>& argument0, uint64_t argument1, bool argument2) {
    return this->template InvokeMethod<false, 30121, void(
      const RawData<16, 8>&, uint64_t, bool)>(argument0, argument1, argument2);
  }

  virtual Result Command30130(
    const RawData<16, 8>& argument0, uint64_t argument1,
    const RawData<81, 1>& argument2) {
    return this->template InvokeMethod<false, 30130, void(
      const RawData<16, 8>&, uint64_t, const RawData<81, 1>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command30131(
    const RawData<16, 8>& argument0, uint64_t argument1, bool argument2) {
    return this->template InvokeMethod<false, 30131, void(
      const RawData<16, 8>&, uint64_t, bool)>(argument0, argument1, argument2);
  }

  virtual Result Command30190(
    const RawData<16, 8>& argument0, uint64_t argument1, bool argument2) {
    return this->template InvokeMethod<false, 30190, void(
      const RawData<16, 8>&, uint64_t, bool)>(argument0, argument1, argument2);
  }

  virtual Result Command30200(
    const RawData<16, 8>& argument0, uint64_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 30200, void(
      const RawData<16, 8>&, uint64_t, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command30201(
    const RawData<16, 8>& argument0, uint64_t argument1, uint32_t argument2,
    const RawData<16, 8>& argument3, const LargeData<25, 72, 8>& argument4,
    const LargeData<25, 72, 8>& argument5) {
    return this->template InvokeMethod<false, 30201, void(
      const RawData<16, 8>&, uint64_t, uint32_t, const RawData<16, 8>&,
      const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command30202(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30202, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30203(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30203, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30204(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30204, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30205(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30205, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result GetFacedFriendRequestRegistrationKey(
    Out<RawData<64, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 30210, void(
      Out<RawData<64, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command30211(
    const RawData<16, 8>& argument0, const RawData<64, 1>& argument1,
    const RawData<33, 1>& argument2, const InBuffer& argument3) {
    return this->template InvokeMethod<false, 30211, void(
      const RawData<16, 8>&, const RawData<64, 1>&, const RawData<33, 1>&,
      const InBuffer&)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command30212(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30212, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30213(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1,
    uint64_t argument2, const OutBuffer& argument3) {
    return this->template InvokeMethod<false, 30213, void(
      Out<uint32_t>, const RawData<16, 8>&, uint64_t, const OutBuffer&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command30214(
    Out<uint32_t> argument0, const BufferArray<9, uint8_t>& argument1,
    const OutBuffer& argument2) {
    return this->template InvokeMethod<false, 30214, void(
      Out<uint32_t>, const BufferArray<9, uint8_t>&, const OutBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command30216(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30216, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30218(
    const RawData<16, 8>& argument0, uint64_t argument1, uint32_t argument2,
    const RawData<24, 8>& argument3, const LargeData<25, 72, 8>& argument4,
    const LargeData<25, 72, 8>& argument5) {
    return this->template InvokeMethod<false, 30218, void(
      const RawData<16, 8>&, uint64_t, uint32_t, const RawData<24, 8>&,
      const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command30400(
    const RawData<16, 8>& argument0, uint64_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 30400, void(
      const RawData<16, 8>&, uint64_t, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command30401(
    const RawData<16, 8>& argument0, uint64_t argument1, uint32_t argument2,
    const RawData<16, 8>& argument3, const LargeData<25, 72, 8>& argument4) {
    return this->template InvokeMethod<false, 30401, void(
      const RawData<16, 8>&, uint64_t, uint32_t, const RawData<16, 8>&,
      const LargeData<25, 72, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command30402(
    const RawData<16, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 30402, void(
      const RawData<16, 8>&, uint64_t)>(argument0, argument1);
  }

  virtual Result Command30403(
    const RawData<16, 8>& argument0, uint64_t argument1, uint32_t argument2,
    const RawData<24, 8>& argument3, const LargeData<25, 72, 8>& argument4) {
    return this->template InvokeMethod<false, 30403, void(
      const RawData<16, 8>&, uint64_t, uint32_t, const RawData<24, 8>&,
      const LargeData<25, 72, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command30500(
    Out<LargeData<26, 1024, 8>> argument0, const RawData<16, 8>& argument1,
    const RawData<32, 4>& argument2) {
    return this->template InvokeMethod<false, 30500, void(
      Out<LargeData<26, 1024, 8>>, const RawData<16, 8>&,
      const RawData<32, 4>&)>(argument0, argument1, argument2);
  }

  virtual Result Command30501(
    Out<LargeData<26, 1192, 8>> argument0, const RawData<16, 8>& argument1,
    const RawData<32, 4>& argument2) {
    return this->template InvokeMethod<false, 30501, void(
      Out<LargeData<26, 1192, 8>>, const RawData<16, 8>&,
      const RawData<32, 4>&)>(argument0, argument1, argument2);
  }

  virtual Result Command30700(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 30700, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command30701(
    const RawData<16, 8>& argument0, const LargeData<25, 64, 8>& argument1,
    const RawData<24, 8>& argument2, const LargeData<25, 72, 8>& argument3,
    const LargeData<25, 72, 8>& argument4) {
    return this->template InvokeMethod<false, 30701, void(
      const RawData<16, 8>&, const LargeData<25, 64, 8>&, const RawData<24, 8>&,
      const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command30702(
    const RawData<16, 8>& argument0, const LargeData<25, 64, 8>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 30702, void(
      const RawData<16, 8>&, const LargeData<25, 64, 8>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command30810(
    const RawData<16, 8>& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 30810, void(
      const RawData<16, 8>&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command30811(const RawData<16, 8>& argument0, bool argument1) {
    return this->template InvokeMethod<false, 30811, void(
      const RawData<16, 8>&, bool)>(argument0, argument1);
  }

  virtual Result Command30812(
    const RawData<16, 8>& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 30812, void(
      const RawData<16, 8>&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command30820(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 30820, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command30830(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 30830, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command30900(
    const RawData<16, 8>& argument0, const BufferArray<9, uint64_t>& argument1,
    const LargeData<21, 3072, 8>& argument2, const RawData<16, 8>& argument3,
    const InBuffer& argument4, bool argument5) {
    return this->template InvokeMethod<false, 30900, void(
      const RawData<16, 8>&, const BufferArray<9, uint64_t>&,
      const LargeData<21, 3072, 8>&, const RawData<16, 8>&, const InBuffer&,
      bool)>(argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command30901(
    const RawData<16, 8>& argument0, const BufferArray<9, uint64_t>& argument1,
    const LargeData<21, 3072, 8>& argument2, const RawData<24, 8>& argument3,
    const InBuffer& argument4, bool argument5) {
    return this->template InvokeMethod<false, 30901, void(
      const RawData<16, 8>&, const BufferArray<9, uint64_t>&,
      const LargeData<21, 3072, 8>&, const RawData<24, 8>&, const InBuffer&,
      bool)>(argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command30902(
    const RawData<16, 8>& argument0, const RawData<48, 1>& argument1,
    const BufferArray<9, uint64_t>& argument2,
    const LargeData<21, 3072, 8>& argument3, const RawData<24, 8>& argument4,
    const InBuffer& argument5, bool argument6) {
    return this->template InvokeMethod<false, 30902, void(
      const RawData<16, 8>&, const RawData<48, 1>&,
      const BufferArray<9, uint64_t>&, const LargeData<21, 3072, 8>&,
      const RawData<24, 8>&, const InBuffer&, bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5,
      argument6);
  }

  virtual Result Command30903(
    const RawData<16, 8>& argument0, const BufferArray<9, uint64_t>& argument1,
    const LargeData<21, 3456, 8>& argument2, const RawData<24, 8>& argument3,
    const InBuffer& argument4, bool argument5) {
    return this->template InvokeMethod<false, 30903, void(
      const RawData<16, 8>&, const BufferArray<9, uint64_t>&,
      const LargeData<21, 3456, 8>&, const RawData<24, 8>&, const InBuffer&,
      bool)>(argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command30904(
    const RawData<16, 8>& argument0, const RawData<48, 1>& argument1,
    const BufferArray<9, uint64_t>& argument2,
    const LargeData<21, 3456, 8>& argument3, const RawData<24, 8>& argument4,
    const InBuffer& argument5, bool argument6) {
    return this->template InvokeMethod<false, 30904, void(
      const RawData<16, 8>&, const RawData<48, 1>&,
      const BufferArray<9, uint64_t>&, const LargeData<21, 3456, 8>&,
      const RawData<24, 8>&, const InBuffer&, bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5,
      argument6);
  }

  virtual Result Command30910(
    const RawData<16, 8>& argument0,
    const BufferArray<9, uint64_t>& argument1) {
    return this->template InvokeMethod<false, 30910, void(
      const RawData<16, 8>&, const BufferArray<9, uint64_t>&)>(
      argument0, argument1);
  }

  virtual Result Command30911(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 30911, void(
      const RawData<16, 8>&)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(104)

  virtual Result Command31100(
    const RawData<16, 8>& argument0, bool argument1, bool argument2) {
    return this->template InvokeMethod<false, 31100, void(
      const RawData<16, 8>&, bool, bool)>(argument0, argument1, argument2);
  }

  virtual Result Command31101(const RawData<16, 8>& argument0, bool argument1) {
    return this->template InvokeMethod<false, 31101, void(
      const RawData<16, 8>&, bool)>(argument0, argument1);
  }

  virtual Result Command31102(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 31102, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command31104(const RawData<16, 8>& argument0, bool argument1) {
    return this->template InvokeMethod<false, 31104, void(
      const RawData<16, 8>&, bool)>(argument0, argument1);
  }

  virtual Result Command31105(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 31105, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command40100(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 40100, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command40400(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 40400, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command41000(
    const RawData<16, 8>& argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 41000, void(
      const RawData<16, 8>&, uint32_t, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command41001() {
    return this->template InvokeMethod<false, 41001, void()>();
  }

  virtual Result Command49900(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 49900, void(
      const RawData<16, 8>&)>(argument0);
  }
};

}
