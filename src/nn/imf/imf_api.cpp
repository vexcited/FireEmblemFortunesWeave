#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/imf/imf_types.hpp"

namespace nn::imf {

void CreateSession(SessionHandle* pOutHandle, const ServiceId& id,
  void* pBuffer, size_t bufferSize) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::CreateSession(pOutHandle, id, pBuffer, bufferSize));
}

void DeleteSession(const SessionHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::DeleteSession(handle));
}

bool IsSessionInUse(const SessionHandle& handle) {
  bool isInUse = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetSessionInUseFlag(&isInUse, handle));
  return isInUse;
}

bool ReadMessage(Message* pOutMessage, const SessionHandle& handle) {
  bool isRead = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ReadMessage(&isRead, pOutMessage, handle));
  return isRead;
}

void PassHidStateSet(HidStateSet* pOutSet, const SessionHandle& handle,
  const HidStateSet& set) {
  if (pOutSet == nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      detail::PassHidStateSet(nullptr, handle, set.GetUnit()));
    return;
  }

  // The service writes into the work half, which is then moved to the front.
  detail::HidStateSetUnit& work = pOutSet->GetWorkUnit();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::PassHidStateSet(&work, handle, set.GetUnit()));
  memcpy(&pOutSet->GetUnit(), &work, sizeof(work));
  memset(&work, 0, sizeof(work));
}

void SetSelection(const SessionHandle& handle, int start, int end) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSelection(handle, start, end));
}

int ReadText(char* pOutText, int size, const SessionHandle& handle) {
  int readSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ReadText(&readSize, pOutText, size, handle));
  return readSize;
}

int ReadText(char* pOutText, int size, int start,
  const SessionHandle& handle) {
  int readSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ReadText(&readSize, pOutText, size, start, handle));
  return readSize;
}

int WriteText(const SessionHandle& handle, const char* pText, int size) {
  int writtenSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::WriteText(&writtenSize, handle, pText, size));
  return writtenSize;
}

void TerminateComposition(const SessionHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::TerminateComposition(handle));
}

void EnableUserWords(const SessionHandle& handle, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::EnableUserWords(handle, count));
}

void DisableUserWords(const SessionHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::DisableUserWords(handle));
}

void SetUserWords(const SessionHandle& handle, const UserWord* pWords,
  int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetUserWords(handle, pWords, count));
}

void EnableAdditionalDictionaries(const SessionHandle& handle,
  uint64_t mask) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::EnableAdditionalDictionaries(handle, mask));
}

void DisableAdditionalDictionaries(const SessionHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::DisableAdditionalDictionaries(handle));
}

void SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, const void* pData,
  size_t dataSize) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAdditionalDictionaries(handle,
    pDictionaries, count, pData, dataSize));
}

bool ReadMessage(PrivateMessage* pOutMessage, const SessionHandle& handle) {
  bool isRead = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ReadMessage(&isRead,
    reinterpret_cast<Message*>(pOutMessage), handle));
  return isRead;
}

void SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, uint64_t size,
  uint32_t transferMemoryHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAdditionalDictionaries(handle,
    pDictionaries, count, size, transferMemoryHandle));
}

}
