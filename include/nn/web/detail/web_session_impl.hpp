#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::web::detail {

enum WebSessionSendMessageKind : int32_t {
  WebSessionSendMessageKind_BrowserEngineContent = 0,
  WebSessionSendMessageKind_SystemMessageAppear = 0x100,
};

enum WebSessionSendMessageGroupKind : int32_t {
  WebSessionSendMessageGroupKind_BrowserEngine,
  WebSessionSendMessageGroupKind_System,
  WebSessionSendMessageGroupKind_Unknown,
};

WebSessionSendMessageGroupKind GetWebSessionSendMessageGroupKind(
  WebSessionSendMessageKind kind);
bool WebSessionSendBrowserEngineMessageGroupIncludes(
  WebSessionSendMessageKind kind);
bool WebSessionSendSystemMessageGroupIncludes(WebSessionSendMessageKind kind);

enum WebSessionReceiveMessageKind : int32_t {
  WebSessionReceiveMessageKind_BrowserEngineContent = 0,
};

struct WebSessionMessageHeader {
  int32_t kind;
  uint32_t size;
  uint64_t reserved;
};

struct WebSessionAckMessage {
  WebSessionMessageHeader header;
  uint32_t size;
  uint32_t reserved[3];
};

class WebSessionImpl {
 public:
  class StorageHandleQueue {
   public:
    StorageHandleQueue();
    ~StorageHandleQueue();

    void clear();
    void enqueue(const applet::StorageHandle& handle);
    int getCount() const;
    applet::StorageHandle* dequeue();
    applet::StorageHandle* at(int index);

   private:
    int m_Head;
    int m_Tail;
    int m_Capacity;
    uint8_t m_IsFull;
    applet::StorageHandle m_Handles[16];
  };

  WebSessionImpl();

  bool appear();
  void requestExit();
  bool trySendContentMessage(const char* content, uint32_t size);
  bool tryReceiveContentMessage(size_t* pOutSize, char* buffer, size_t size);
  bool trySend(const WebSessionMessageHeader& header, const void* data);
  bool tryReceive(WebSessionMessageHeader* pOutHeader, void* buffer,
    size_t size, WebSessionReceiveMessageKind kind);
  bool isAvaliable();
  void setLibraryAppletHandle(const applet::LibraryAppletHandle& handle);
  void clear();
  bool canSend(const WebSessionMessageHeader& header, size_t size);
  void sendAck(uint32_t size);
  void receiveStorageHandles();
  bool hasReceiveMessage();

  bool HasLibraryApplet() const {
    return m_LibraryAppletHandle._p != nullptr;
  }

  applet::LibraryAppletHandle GetLibraryAppletHandle() const {
    return m_LibraryAppletHandle;
  }

 private:
  struct SendState {
    uint32_t count;
    uint32_t size;
  };

  os::Mutex m_Mutex;
  applet::LibraryAppletHandle m_LibraryAppletHandle;
  os::SystemEventType* m_pPopEvent;
  SendState m_SendStates[2];
  StorageHandleQueue m_Queue;
};
}
