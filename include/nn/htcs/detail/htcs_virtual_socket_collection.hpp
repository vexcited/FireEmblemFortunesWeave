#pragma once

#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#include "nn/htcs/detail/htcs_tma.hpp"
#include "nn/htcs/htcs_types.hpp"
#include "nn/os/mutex.hpp"

namespace nn::htcs::detail {

struct virtual_socket {
  int id;
  sf::SharedPointer<tma::ISocket> socket;
  int primitive;
  bool doBind;
  SockAddrHtcs address;
  int listenBacklogCount;
  int fcntlCommand;
  int fcntlValue;
  bool blocking;
  int type;
  uint64_t eventFdInitialValue;
  int eventFdFlags;

  virtual_socket()
    : id(-1), primitive(-1), doBind(false), address(),
      listenBacklogCount(-1), fcntlCommand(-1), fcntlValue(0),
      blocking(true), type(0), eventFdInitialValue(0), eventFdFlags(0) {}

  int SetSocket(sf::SharedPointer<tma::ISocket> socket, int& lastError);
};

class virtual_socket_collection {
 public:
  virtual_socket_collection();
  ~virtual_socket_collection();

  static size_t GetWorkingMemorySize(int socketCount);

  void Init(void* buffer, size_t bufferSize);
  void Clear();
  void SetSize(int size);

  int Socket(int& lastError);
  int Close(int id, int& lastError);
  int Bind(int id, const SockAddrHtcs* address, int& lastError);
  int Listen(int id, int backlogCount, int& lastError);
  int Accept(int id, SockAddrHtcs* address, int& lastError);
  int Fcntl(int id, int command, int value, int& lastError);
  int Shutdown(int id, int how, int& lastError);
  ssize_t Recv(int id, void* buffer, size_t size, int flags, int& lastError);
  ssize_t Send(int id, const void* buffer, size_t size, int flags,
    int& lastError);
  int Connect(int id, const SockAddrHtcs* address, int& lastError);
  int Select(FdSet* read, FdSet* write, FdSet* exception, TimeVal* timeout,
    int& lastError);
  int GetBoundTcpPortNumber(int id, int& portNumber, int& lastError);
  int EventFd(uint64_t initialValue, int flags, int& lastError);
  int EventFdRead(int id, uint64_t* pOutValue, int& lastError);
  int EventFdWrite(int id, uint64_t value, int& lastError);

  int CreateSocket(sf::SharedPointer<tma::ISocket> socket, int& lastError);
  int CreateEventFd(sf::SharedPointer<tma::ISocket> socket, int& lastError,
    uint64_t initialValue, int flags);
  int Add(sf::SharedPointer<tma::ISocket> socket);
  int CreateId();
  void Insert(int id, sf::SharedPointer<tma::ISocket> socket);
  int Find(int id, int* pOutError);
  int FindByPrimitive(int primitive);
  bool HasAddr(const SockAddrHtcs* address);
  sf::SharedPointer<tma::ISocket> GetSocket(int id, int* pOutError);
  sf::SharedPointer<tma::ISocket> RealizeSocket(int id);
  sf::SharedPointer<tma::ISocket> FetchSocket(int id, int& lastError);
  int GetSockets(int* primitives, FdSet* set, int& lastError,
    bool& isClosed);
  void SetSockets(FdSet* set, int* primitives, int count);
  int doAccept(sf::SharedPointer<tma::ISocket> socket, int id,
    SockAddrHtcs* address, int& lastError);

 private:
  void* m_Buffer;
  size_t m_BufferSize;
  virtual_socket* m_List;
  int m_ListCount;
  int m_ListSize;
  int m_NextId;
  os::MutexType m_Mutex;
};

}
