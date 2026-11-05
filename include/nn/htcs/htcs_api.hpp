#pragma once

#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#include "nn/htcs/htcs_types.hpp"

namespace nn::htcs {

void Initialize(AllocateFunction allocate, DeallocateFunction deallocate);
void Initialize(void* buffer, size_t bufferSize);
void Initialize(AllocateFunction allocate, DeallocateFunction deallocate,
  int sessionCount);
void InitializeForDisableDisconnectionEmulation(AllocateFunction allocate,
  DeallocateFunction deallocate, int sessionCount);
void InitializeForSystem(void* buffer, size_t bufferSize, int sessionCount);
void InitializeForDisableDisconnectionEmulation(void* buffer,
  size_t bufferSize, int sessionCount);
bool IsInitialized();
void Finalize();
size_t GetWorkingMemorySize(int socketCount);

int GetBoundTcpPortNumber(int* pOutPortNumber, int descriptor);
int Socket();
int Close(int descriptor);
int Accept(int descriptor, SockAddrHtcs* address);
int Bind(int descriptor, const SockAddrHtcs* address);
int Connect(int descriptor, const SockAddrHtcs* address);
int Listen(int descriptor, int backlogCount);
ssize_t Recv(int descriptor, void* buffer, size_t size, int flags);
ssize_t Send(int descriptor, const void* buffer, size_t size, int flags);
int Shutdown(int descriptor, int how);
int Fcntl(int descriptor, int command, int value);
int Select(int count, FdSet* read, FdSet* write, FdSet* exception,
  TimeVal* timeout);
void FdSetZero(FdSet* set);
void FdSetSet(int descriptor, FdSet* set);
void FdSetClr(int descriptor, FdSet* set);
bool FdSetIsSet(int descriptor, const FdSet* set);
int EventFd(uint64_t initialValue, int flags);
int EventFdRead(int descriptor, uint64_t* pOutValue);
int EventFdWrite(int descriptor, uint64_t value);
int GetLastError();
const HtcsPeerName GetPeerNameAny();
const HtcsPeerName GetDefaultHostName();

}
