#include "nn/fs/detail/fs_file_system_accessor.hpp"

#include <string.h>

#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs::detail {

namespace {

bool MatchesName(util::IntrusiveListNode* node, const char* name) {
  return strncmp(FileSystemAccessor::FromPoolNode(node)->GetName(), name,
    MountNameLengthMax + 1) == 0;
}

}

MountTable::MountTable() : m_FileSystemList(), m_Mutex() {}

bool MountTable::CanAcceptMountName(const char* name) {
  for (util::IntrusiveListNode* node = m_FileSystemList.GetNext();
    node != &m_FileSystemList; node = node->GetNext()) {
    if (MatchesName(node, name)) {
      return false;
    }
  }
  return true;
}

Result MountTable::Mount(std::unique_ptr<FileSystemAccessor>&& accessor) {
  m_Mutex.Lock();

  Result result = ResultSuccess();
  if (!CanAcceptMountName(accessor->GetName())) {
    result = ResultMountNameAlreadyExists();
  }
  else {
    m_FileSystemList.LinkPrev(&accessor.release()->m_PoolNode);
  }

  m_Mutex.Unlock();
  return result;
}

Result MountTable::Find(FileSystemAccessor** out, const char* name) {
  NN_FS_RESULT_THROW_UNLESS(name != nullptr, ResultNullptrArgument());

  m_Mutex.Lock();

  Result result = ResultNotMounted();
  for (util::IntrusiveListNode* node = m_FileSystemList.GetNext();
    node != &m_FileSystemList; node = node->GetNext()) {
    if (MatchesName(node, name)) {
      *out = FileSystemAccessor::FromPoolNode(node);
      result = ResultSuccess();
      break;
    }
  }

  m_Mutex.Unlock();
  return result;
}

void MountTable::Unmount(const char* name) {
  m_Mutex.Lock();

  for (util::IntrusiveListNode* node = m_FileSystemList.GetNext();;
    node = node->GetNext()) {
    if (node == &m_FileSystemList) {
      LogErrorMessage(ResultNotMounted(),
        "Error: Unmount failed because the mount name was not mounted. "
        "The mount name is \"%s\".\n", name);
      NN_FS_ABORT_UNLESS_RESULT_SUCCESS(ResultNotMounted());
    }
    if (MatchesName(node, name)) {
      node->Unlink();
      delete FileSystemAccessor::FromPoolNode(node);
      break;
    }
  }

  m_Mutex.Unlock();
}

}
