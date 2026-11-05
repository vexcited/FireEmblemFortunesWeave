#include "nn/audio/common/node_states.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::audio::common {

EdgeMatrix::EdgeMatrix() : m_pBuffer(nullptr), m_BitCount(0), m_NodeCount(0) {}

size_t EdgeMatrix::GetWorkBufferSize(int nodeCount) {
  return BitArray<uint64_t>::CalcBufferSize(
    static_cast<int>(static_cast<uint32_t>(nodeCount) * nodeCount));
}

void EdgeMatrix::Initialize(void* buffer, size_t size, int nodeCount) {
  m_pBuffer = static_cast<uint64_t*>(buffer);
  m_BitCount =
    static_cast<int>(static_cast<uint32_t>(nodeCount) * nodeCount);
  m_NodeCount = nodeCount;
  if (nodeCount != 0 && (m_BitCount + 63) >> 6 > 0) {
    memset(m_pBuffer, 0, sizeof(uint64_t) * ((m_BitCount + 63) >> 6));
  }
  for (int i = 0; i < (m_BitCount + 63) >> 6; ++i) {
    m_pBuffer[i] = 0;
  }
}

bool EdgeMatrix::Connected(int source, int destination) const {
  int index = m_NodeCount * source + destination;
  return (m_pBuffer[index >> 6] >> (index & 63)) & 1;
}

void EdgeMatrix::Connect(int source, int destination) {
  int index = m_NodeCount * source + destination;
  m_pBuffer[index >> 6] |= uint64_t{1} << (index & 63);
}

void EdgeMatrix::Disconnect(int source, int destination) {
  int index = m_NodeCount * source + destination;
  m_pBuffer[index >> 6] &= ~(uint64_t{1} << (index & 63));
}

void EdgeMatrix::RemoveEdges(int source) {
  for (int i = 0; i < m_NodeCount; ++i) {
    Disconnect(source, i);
  }
}

int EdgeMatrix::GetNodeCount() const {
  return m_NodeCount;
}

size_t NodeStates::Stack::CalcBufferSize(int count) {
  return sizeof(int) * count;
}

NodeStates::Stack::Stack()
  : m_pBuffer(nullptr), m_Size(0), m_Count(0), m_Capacity(0) {}

void NodeStates::Stack::Reset(int* buffer, size_t size, int count) {
  m_pBuffer = buffer;
  m_Size = count;
  m_Count = 0;
  m_Capacity = count;
}

int NodeStates::Stack::Count() const {
  return m_Count;
}

void NodeStates::Stack::push(int value) {
  m_pBuffer[m_Count] = value;
  ++m_Count;
}

int NodeStates::Stack::top() const {
  return m_pBuffer[m_Count - 1];
}

int NodeStates::Stack::pop() {
  --m_Count;
  return m_pBuffer[m_Count];
}

size_t NodeStates::GetWorkBufferSize(int nodeCount) {
  return BitArray<uint64_t>::CalcBufferSize(nodeCount) * 2 +
    sizeof(int) * static_cast<uint32_t>(nodeCount * nodeCount) +
    static_cast<int64_t>(nodeCount) * 12;
}

NodeStates::NodeStates()
  : m_NodeCount(0), m_ResultCount(0), m_pResults(nullptr),
    m_ResultCapacity(0) {}

void NodeStates::Initialize(void* buffer, size_t size, int nodeCount) {
  uint8_t* cursor = static_cast<uint8_t*>(buffer);
  size_t bitArraySize = BitArray<uint64_t>::CalcBufferSize(nodeCount);
  m_NodeCount = nodeCount;
  m_Discovered.Initialize(cursor, nodeCount);
  m_Discovered.Reset();
  cursor += bitArraySize;
  m_Finished.Initialize(cursor, nodeCount);
  m_Finished.Reset();
  cursor += bitArraySize;
  m_pResults = reinterpret_cast<int*>(cursor);
  m_ResultCapacity = nodeCount;
  m_Stack.Reset(m_pResults + nodeCount, 0,
    static_cast<int>(static_cast<uint32_t>(nodeCount) * nodeCount));
}

bool NodeStates::Tsort(EdgeMatrix& edges) {
  return DepthFirstSearch(*this, edges, m_Stack);
}

bool NodeStates::DepthFirstSearch(NodeStates& states, EdgeMatrix& edges,
  Stack& stack) {
  states.ResetState();
  for (int node = 0; node < states.m_NodeCount; ++node) {
    if (states.GetState(node) == SearchState_Unknown) {
      stack.push(node);
    }
    while (stack.Count() > 0) {
      int current = stack.top();
      switch (states.GetState(current)) {
        case SearchState_Unknown:
          states.SetState(current, SearchState_Found);
          break;
        case SearchState_Found:
          states.SetState(current, SearchState_Complete);
          states.PushTsortResult(current);
          stack.pop();
          continue;
        case SearchState_Complete:
          stack.pop();
          continue;
      }
      int count = edges.GetNodeCount();
      for (int edge = 0; edge < count; ++edge) {
        if (!edges.Connected(current, edge)) {
          continue;
        }
        switch (states.GetState(edge)) {
          case SearchState_Unknown:
            stack.push(edge);
            break;
          case SearchState_Found:
            states.ResetState();
            return false;
          case SearchState_Complete:
            break;
        }
      }
    }
  }
  return true;
}

NodeStates::SearchState NodeStates::GetState(int node) const {
  if (m_Discovered.Test(node)) {
    return SearchState_Found;
  }
  if (m_Finished.Test(node)) {
    return SearchState_Complete;
  }
  return SearchState_Unknown;
}

void NodeStates::PushTsortResult(int node) {
  m_pResults[m_ResultCount++] = node;
}

void NodeStates::SetState(int node, SearchState state) {
  switch (state) {
    case SearchState_Unknown:
      m_Discovered.Clear(node);
      m_Finished.Clear(node);
      break;
    case SearchState_Found:
      m_Discovered.Set(node);
      m_Finished.Clear(node);
      break;
    case SearchState_Complete:
      m_Discovered.Clear(node);
      m_Finished.Set(node);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void NodeStates::ResetState() {
  m_Discovered.Reset();
  m_Finished.Reset();
  m_ResultCount = 0;
  for (int* it = m_pResults; it != m_pResults + m_ResultCapacity; ++it) {
    *it = -1;
  }
}

NodeStates::ResultIterator NodeStates::ResultBegin() const {
  return ResultIterator(m_pResults + m_ResultCapacity);
}

NodeStates::ResultIterator NodeStates::ResultEnd() const {
  return ResultIterator(m_pResults);
}

int NodeStates::GetNodeCount() const {
  return m_NodeCount;
}

}
