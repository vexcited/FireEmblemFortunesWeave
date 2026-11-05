#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"

#include "nn/fs/detail/fs_file_system_accessor.hpp"

namespace nn::fs::detail {

FileServiceObjectAdapter::FileServiceObjectAdapter(
  nn::sf::SharedPointer<fssrv::sf::IFile>&& file) : m_File(file) {}

FileServiceObjectAdapter::~FileServiceObjectAdapter() {}

Result FileServiceObjectAdapter::DoRead(size_t* outSize, int64_t offset,
  void* buffer, size_t size, const ReadOption& option) {
  int64_t readSize = 0;
  const Result result = m_File->Read(nn::sf::Out<int64_t>(&readSize), offset,
    nn::sf::OutBuffer(buffer, size), static_cast<int64_t>(size),
    option.value);
  if (IsFailure(result)) {
    return result;
  }
  *outSize = static_cast<size_t>(readSize);
  return ResultSuccess();
}

Result FileServiceObjectAdapter::DoWrite(int64_t offset, const void* buffer,
  size_t size, const WriteOption& option) {
  return m_File->Write(offset, nn::sf::InBuffer(buffer, size),
    static_cast<int64_t>(size), option.flags);
}

Result FileServiceObjectAdapter::DoFlush() {
  return m_File->Flush();
}

Result FileServiceObjectAdapter::DoSetSize(int64_t size) {
  return m_File->SetSize(size);
}

Result FileServiceObjectAdapter::DoGetSize(int64_t* outSize) {
  return m_File->GetSize(nn::sf::Out<int64_t>(outSize));
}

Result FileServiceObjectAdapter::DoOperateRange(void* outBuffer,
  size_t outBufferSize, OperationId operationId, int64_t offset,
  int64_t size, const void* inBuffer, size_t inBufferSize) {
  switch (operationId) {
    case OperationId_Invalidate: {
      QueryRangeInfo info = {};
      return m_File->OperateRange(nn::sf::Out<QueryRangeInfo>(&info),
        operationId, offset, size);
    }
    case OperationId_QueryRange:
      if (outBuffer == nullptr) {
        return ResultNullptrArgument();
      }
      if (outBufferSize != sizeof(QueryRangeInfo)) {
        return ResultInvalidSize();
      }
      return m_File->OperateRange(
        nn::sf::Out<QueryRangeInfo>(static_cast<QueryRangeInfo*>(outBuffer)),
        operationId, offset, size);
    default:
      return m_File->OperateRangeWithBuffer(
        nn::sf::OutBuffer(outBuffer, outBufferSize),
        nn::sf::InBuffer(inBuffer, inBufferSize), operationId, offset, size);
  }
}

}
