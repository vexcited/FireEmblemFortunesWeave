#include "nn/web/detail/web_session_impl.hpp"

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::web::detail {

namespace {

const uint32_t SendCountMax = 16;
const size_t ContentSendSizeMax = 0x8000;
const size_t SystemSendSizeMax = 0x1000;

const int32_t AckMessageKind_BrowserEngine = 0x1000;
const int32_t AckMessageKind_System = 0x1001;

int GetSendStateIndex(const WebSessionMessageHeader& header) {
  return header.kind == WebSessionSendMessageKind_BrowserEngineContent ? 0
    : 1;
}

}

WebSessionImpl::WebSessionImpl()
  : m_Mutex(false), m_LibraryAppletHandle(), m_pPopEvent(nullptr),
    m_SendStates() {}

bool WebSessionImpl::trySendContentMessage(const char* content,
  uint32_t size) {
  WebSessionMessageHeader header = {
    WebSessionSendMessageKind_BrowserEngineContent, size, 0};
  return trySend(header, content);
}

bool WebSessionImpl::trySend(const WebSessionMessageHeader& header,
  const void* data) {
  m_Mutex.Lock();

  bool isSent = false;
  if (isAvaliable()) {
    receiveStorageHandles();

    size_t size = header.size + sizeof(WebSessionMessageHeader);
    if (canSend(header, size)) {
      applet::StorageHandle storage = {};
      NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, size));
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        applet::WriteToStorage(storage, 0, &header, sizeof(header)));
      if (data != nullptr && header.size != 0) {
        NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage,
          sizeof(header), data, header.size));
      }

      applet::PushToInteractiveInChannel(m_LibraryAppletHandle, storage);

      SendState& state = m_SendStates[GetSendStateIndex(header)];
      state.count++;
      state.size += size;
      isSent = true;
    }
  }

  m_Mutex.Unlock();
  return isSent;
}

bool WebSessionImpl::tryReceiveContentMessage(size_t* pOutSize, char* buffer,
  size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(pOutSize);
  NN_ABORT_UNLESS_NOT_NULL(buffer);

  WebSessionMessageHeader header;
  while (true) {
    header = {};
    bool isReceived = tryReceive(&header, buffer, size,
      WebSessionReceiveMessageKind_BrowserEngineContent);
    if (isReceived && header.kind == 0) {
      break;
    }

    if (!isReceived) {
      return false;
    }
  }

  *pOutSize = header.size;
  buffer[(size < header.size ? size : header.size) - 1] = '\0';
  return true;
}

bool WebSessionImpl::tryReceive(WebSessionMessageHeader* pOutHeader,
  void* buffer, size_t size, WebSessionReceiveMessageKind kind) {
  NN_ABORT_UNLESS_NOT_NULL(pOutHeader);
  NN_ABORT_UNLESS_NOT_NULL(buffer);

  m_Mutex.Lock();
  receiveStorageHandles();

  int count;
  while ((count = m_Queue.getCount()) > 0) {
    applet::StorageHandle storage = *m_Queue.dequeue();

    WebSessionMessageHeader header = {};
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::ReadFromStorage(storage, 0, &header, sizeof(header)));

    int64_t storageSize = applet::GetStorageSize(storage);
    NN_ABORT_UNLESS(header.size + sizeof(header) ==
      static_cast<size_t>(storageSize));

    if (header.kind == kind) {
      pOutHeader->kind = kind;
      pOutHeader->size = header.size;
      if (header.size != 0) {
        NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage,
          sizeof(header), buffer, size < header.size ? size : header.size));
      }

      sendAck(static_cast<uint32_t>(storageSize));
      applet::ReleaseStorage(storage);
      break;
    }

    sendAck(static_cast<uint32_t>(storageSize));
    applet::ReleaseStorage(storage);
  }

  m_Mutex.Unlock();
  return count > 0;
}

bool WebSessionImpl::appear() {
  WebSessionMessageHeader header = {
    WebSessionSendMessageKind_SystemMessageAppear, 0, 0};

  bool isSent;
  do {
    isSent = trySend(header, nullptr);
  } while (!isSent &&
    applet::WaitPopFromInteractiveOutChannelEvent(m_LibraryAppletHandle));

  return isSent;
}

void WebSessionImpl::requestExit() {
  m_Mutex.Lock();

  if (isAvaliable()) {
    applet::RequestExitLibraryApplet(m_LibraryAppletHandle);
  }

  m_Mutex.Unlock();
}

bool WebSessionImpl::isAvaliable() {
  if (m_LibraryAppletHandle._p == nullptr) {
    return false;
  }

  return !os::TryWaitSystemEvent(
    applet::GetLibraryAppletExitEvent(m_LibraryAppletHandle));
}

void WebSessionImpl::setLibraryAppletHandle(
  const applet::LibraryAppletHandle& handle) {
  m_LibraryAppletHandle = handle;
  m_pPopEvent = applet::GetPopFromInteractiveOutChannelEvent(handle);
}

void WebSessionImpl::clear() {
  m_SendStates[0] = {};
  m_SendStates[1] = {};
  m_LibraryAppletHandle = {};
  m_pPopEvent = nullptr;
  m_Queue.clear();
}

void WebSessionImpl::StorageHandleQueue::clear() {
  while (getCount() > 0) {
    applet::ReleaseStorage(*dequeue());
  }

  m_Head = 0;
  m_Tail = 0;
}

bool WebSessionImpl::canSend(const WebSessionMessageHeader& header,
  size_t size) {
  const int index = GetSendStateIndex(header);
  if (m_SendStates[index].count == SendCountMax) {
    return false;
  }

  const size_t sizeMax = index == 0 ? ContentSendSizeMax : SystemSendSizeMax;
  return size + m_SendStates[index].size <= sizeMax;
}

void WebSessionImpl::sendAck(uint32_t size) {
  WebSessionAckMessage ack = {
    {AckMessageKind_BrowserEngine, 12, 0}, size, {}};

  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage,
    sizeof(ack)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, &ack, sizeof(ack)));
  applet::PushToInteractiveInChannel(m_LibraryAppletHandle, storage);
}

void WebSessionImpl::receiveStorageHandles() {
  while (hasReceiveMessage()) {
    applet::StorageHandle storage = {};
    if (!applet::TryPopFromInteractiveOutChannel(&storage,
      m_LibraryAppletHandle)) {
      return;
    }

    WebSessionMessageHeader header = {};
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::ReadFromStorage(storage, 0, &header, sizeof(header)));

    if (header.kind == AckMessageKind_System ||
      header.kind == AckMessageKind_BrowserEngine) {
      SendState& state =
        m_SendStates[header.kind == AckMessageKind_System ? 1 : 0];
      NN_ABORT_UNLESS(state.count != 0);
      state.count--;

      WebSessionAckMessage ack = {};
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        applet::ReadFromStorage(storage, 0, &ack, sizeof(ack)));
      state.size -= ack.size;
      applet::ReleaseStorage(storage);
    }
    else {
      m_Queue.enqueue(storage);
    }
  }
}

bool WebSessionImpl::hasReceiveMessage() {
  if (!isAvaliable()) {
    return false;
  }

  return os::TryWaitSystemEvent(m_pPopEvent);
}

void WebSessionImpl::StorageHandleQueue::enqueue(
  const applet::StorageHandle& handle) {
  m_Tail = (m_Tail + 1) % m_Capacity;
  m_IsFull = m_Head == m_Tail ? 1 : 0;
  *at(getCount() - 1) = handle;
}

int WebSessionImpl::StorageHandleQueue::getCount() const {
  if (m_IsFull == 1) {
    return m_Capacity;
  }

  return (m_Capacity + m_Tail - m_Head) % m_Capacity;
}

applet::StorageHandle* WebSessionImpl::StorageHandleQueue::dequeue() {
  applet::StorageHandle* handle = at(0);
  m_IsFull = 0;
  m_Head = (m_Head + 1) % m_Capacity;
  return handle;
}

WebSessionImpl::StorageHandleQueue::StorageHandleQueue()
  : m_Head(0), m_Tail(0), m_Capacity(16), m_IsFull(0), m_Handles() {}

WebSessionImpl::StorageHandleQueue::~StorageHandleQueue() {
  clear();
}

applet::StorageHandle* WebSessionImpl::StorageHandleQueue::at(int index) {
  return &m_Handles[(m_Head + index) % m_Capacity];
}

}
