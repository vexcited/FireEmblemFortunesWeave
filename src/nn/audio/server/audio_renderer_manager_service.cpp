#include "nn/audio/common/revision.hpp"
#include "nn/audio/server/audio_device_interface_info.hpp"
#include "nn/audio/server/audio_render_system.hpp"
#include "nn/sf/sf_object_impl_factory.hpp"

namespace nn::audio::server {

namespace {

using AudioDeviceInterfaceInfo = sf::InterfaceInfo<audio::detail::IAudioDevice>;
using AudioDeviceObject = AudioDeviceInterfaceInfo::_tAB<
  AudioDeviceInterfaceInfo::_tO2N<
    AudioRendererManagerImpl::AudioDeviceImpl>::type,
  audio::detail::IAudioDevice>::type;
using AudioDeviceFactory = sf::detail::ObjectImplFactoryWithStatefulAllocator<
  AudioDeviceObject, sf::StatefulAllocationPolicy<sf::ExpHeapAllocator>>;

}

Result AudioRendererManagerImpl::GetAudioDeviceService(
  sf::Out<sf::SharedPointer<audio::detail::IAudioDevice>> pOutDevice,
  applet::AppletResourceUserId& id) {
  sf::SharedPointer<audio::detail::IAudioDevice> device(
    AudioDeviceFactory::Create(&m_Allocator, this, id,
      common::GetInitialReleaseRevision()), false);
  pOutDevice->Swap(device);
  return {0};
}

Result AudioRendererManagerImpl::GetAudioDeviceServiceWithRevisionInfo(
  sf::Out<sf::SharedPointer<audio::detail::IAudioDevice>> pOutDevice,
  applet::AppletResourceUserId& id, uint32_t revision) {
  sf::SharedPointer<audio::detail::IAudioDevice> device(
    AudioDeviceFactory::Create(&m_Allocator, this, id, revision), false);
  pOutDevice->Swap(device);
  return {0};
}

}
