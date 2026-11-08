#include "nn/async/async_detail.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::async::detail {

FutureStateBase::FutureStateBase() : m_IsRetrieved(false) {}

GroupWaitHolderOne::~GroupWaitHolderOne() {
  Finalize();
}

[[gnu::noinline]] void GroupWaitHolderOne::Finalize() {
  if (m_Inner.owner == nullptr) {
    return;
  }

  NN_ABORT_UNLESS(m_Inner.owner == this);
  GroupWait* groupWait = m_Inner.groupWait;
  if (groupWait != nullptr) {
    groupWait->UnlinkGroupWaitHolder(this);
    m_Inner.groupWait = nullptr;
  }

  os::FinalizeMultiWaitHolder(&m_Inner.holder);
  m_Inner.owner = nullptr;
}

void GroupWait::UnlinkGroupWaitHolder(GroupWaitHolder* holder) {
  const int count = holder->GetCount();
  for (int i = 0; i < count; ++i) {
    GroupWaitHolder::InnerHolder* inner = holder->GetHolder(i);
    if (inner->groupWait != nullptr) {
      NN_ABORT_UNLESS(inner->groupWait == this);
      UnlinkMultiWaitHolder(inner);
    }
  }

  const HolderList::iterator it = m_Holders.iterator_to(*holder);
  if (it != m_Holders.end()) {
    m_Holders.erase(it);
  }
}

int GroupWaitHolderOne::GetCount() const {
  return 1;
}

GroupWaitHolder::InnerHolder* GroupWaitHolderOne::GetHolder(int index) {
  return &m_Inner;
}

int GroupWaitHolderOne::GetIndex(InnerHolder* holder) {
  return 0;
}

GroupWaitHolder::WaitTarget GroupWaitHolderOne::GetWaitTarget() const {
  return WaitTarget_All;
}

GroupWait::GroupWait() {
  os::InitializeMultiWait(&m_MultiWait);
}

GroupWait::~GroupWait() {
  UnlinkAllGroupWaitHolders();
  os::FinalizeMultiWait(&m_MultiWait);
}

void GroupWait::UnlinkAllGroupWaitHolders() {
  while (!m_Holders.empty()) {
    GroupWaitHolder& holder = m_Holders.front();
    const int count = holder.GetCount();
    for (int i = 0; i < count; ++i) {
      GroupWaitHolder::InnerHolder* inner = holder.GetHolder(i);
      if (inner->groupWait != nullptr) {
        NN_ABORT_UNLESS(inner->groupWait == this);
        UnlinkMultiWaitHolder(inner);
      }
    }

    HolderList::erase(holder);
  }
}

void GroupWait::LinkGroupWaitHolder(GroupWaitHolder* holder) {
  const int count = holder->GetCount();
  for (int i = 0; i < count; ++i) {
    GroupWaitHolder::InnerHolder* inner = holder->GetHolder(i);
    NN_ABORT_UNLESS(inner->groupWait == nullptr);
    LinkMultiWaitHolder(inner);
  }

  m_Holders.push_back(*holder);
}

void GroupWait::LinkMultiWaitHolder(GroupWaitHolder::InnerHolder* holder) {
  os::LinkMultiWaitHolder(&m_MultiWait, &holder->holder);
  os::SetMultiWaitHolderUserData(&holder->holder,
    reinterpret_cast<uintptr_t>(holder));
  holder->groupWait = this;
}

void GroupWait::UnlinkMultiWaitHolder(GroupWaitHolder::InnerHolder* holder) {
  holder->groupWait = nullptr;
  os::SetMultiWaitHolderUserData(&holder->holder, 0);
  os::UnlinkMultiWaitHolder(&holder->holder);
}

GroupWait::SignaledObject GroupWait::Wait() {
  SignaledObject signaled;
  os::MultiWaitHolderType* holder;
  do {
    holder = os::WaitAny(&m_MultiWait);
    signaled = {};
  } while (CheckIfWaitRetryIsNeeded(&signaled, holder));

  return signaled;
}

bool GroupWait::CheckIfWaitRetryIsNeeded(SignaledObject* pOut,
  os::MultiWaitHolderType* signaled) {
  auto* inner = reinterpret_cast<GroupWaitHolder::InnerHolder*>(
    os::GetMultiWaitHolderUserData(signaled));
  GroupWaitHolder* holder = inner->owner;
  UnlinkMultiWaitHolder(inner);
  int index;
  switch (holder->GetWaitTarget()) {
    case GroupWaitHolder::WaitTarget_All: {
      const int count = holder->GetCount();
      for (int i = 0; i < count; ++i) {
        GroupWait* groupWait = holder->GetHolder(i)->groupWait;
        if (groupWait != nullptr) {
          NN_ABORT_UNLESS(groupWait == this);
          return true;
        }
      }

      index = -1;
      break;
    }
    case GroupWaitHolder::WaitTarget_Any:
      index = holder->GetIndex(inner);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  pOut->holder = holder;
  pOut->index = index;
  return false;
}

bool GroupWait::TryWait(SignaledObject* pOut) {
  for (os::MultiWaitHolderType* holder = os::TryWaitAny(&m_MultiWait);
    holder != nullptr; holder = os::TryWaitAny(&m_MultiWait)) {
    SignaledObject signaled = {};
    if (!CheckIfWaitRetryIsNeeded(&signaled, holder)) {
      if (pOut != nullptr) {
        *pOut = signaled;
      }

      return true;
    }
  }

  return false;
}

}
