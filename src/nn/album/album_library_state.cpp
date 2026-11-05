#include "nn/album/album_types.hpp"
#include "nn/hid/detail/hid_abort.hpp"

namespace nn::capsrv {

Result InitializeForApplication();
void FinalizeForApplication();
Result InitializeAlbumAccessForApplication();
void FinalizeAlbumAccessForApplication();

}

namespace nn::album {

LibraryState::LibraryState() :
  m_InitializeCount(0), m_IsAlbumAvailable(false), m_IsShareAvailable(false) {}

bool LibraryState::IsInitialized() const {
  return m_InitializeCount > 0;
}

bool LibraryState::IsAlbumAvailable() const {
  return m_IsAlbumAvailable;
}

bool LibraryState::IsShareAvailable() const {
  return m_IsShareAvailable;
}

void LibraryState::Initialize() {
  if (m_InitializeCount > 0) {
    ++m_InitializeCount;
    return;
  }
  m_Mutex.Initialize();
  ++m_InitializeCount;
}

void LibraryState::Finalize() {
  if (--m_InitializeCount > 0) {
    return;
  }
  if (m_InitializeCount != 0) {
    m_InitializeCount = 0;
    return;
  }
  if (m_IsAlbumAvailable) {
    capsrv::FinalizeAlbumAccessForApplication();
    capsrv::FinalizeForApplication();
    m_IsAlbumAvailable = false;
  }
  if (m_IsShareAvailable) {
    m_IsShareAvailable = false;
  }
}

os::SdkRecursiveMutexType& LibraryState::GetLibraryMutex() {
  return m_Mutex;
}

void LibraryState::EnsureAlbumAvailable() {
  if (m_IsAlbumAvailable) {
    return;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(capsrv::InitializeForApplication());
  NN_ABORT_UNLESS_RESULT_SUCCESS(capsrv::InitializeAlbumAccessForApplication());
  m_IsAlbumAvailable = true;
}

void LibraryState::EnsureShareAvailable() {
  if (m_IsShareAvailable) {
    return;
  }
  m_IsShareAvailable = true;
}

}
