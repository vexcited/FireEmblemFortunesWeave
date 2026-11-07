#pragma once

#include <stddef.h>
#include <stdint.h>

#include <string.h>

#include <iterator>

#include "nn/audio/common/bit_array.hpp"

namespace nn::audio::common {

template <>
class BitArray<uint64_t> {
public:
  BitArray() : m_pBuffer(nullptr), m_Count(0) {}

  static int CalcBufferSize(int count) {
    return static_cast<int>(static_cast<uint32_t>(count) + 63) >> 3 & ~7;
  }

  void Initialize(void* buffer, int count) {
    m_pBuffer = static_cast<uint64_t*>(buffer);
    m_Count = count;
    if (GetWordCount() > 0) {
      memset(m_pBuffer, 0, sizeof(uint64_t) * GetWordCount());
    }
  }

  void Reset() {
    if (GetWordCount() > 0) {
      memset(m_pBuffer, 0, sizeof(uint64_t) * GetWordCount());
    }
  }

  bool Test(int index) const {
    return (m_pBuffer[index >> 6] >> (index & 63)) & 1;
  }

  void Set(int index) {
    m_pBuffer[index >> 6] |= uint64_t{1} << (index & 63);
  }

  void Clear(int index) {
    m_pBuffer[index >> 6] &= ~(uint64_t{1} << (index & 63));
  }

private:
  int GetWordCount() const {
    return (m_Count + 63) >> 6;
  }

  uint64_t* m_pBuffer;
  int m_Count;
};

class EdgeMatrix {
public:
  EdgeMatrix();
  static size_t GetWorkBufferSize(int nodeCount);
  void Initialize(void* buffer, size_t size, int nodeCount);
  bool Connected(int source, int destination) const;
  void Connect(int source, int destination);
  void Disconnect(int source, int destination);
  void RemoveEdges(int source);
  int GetNodeCount() const;

private:
  uint64_t* m_pBuffer;
  int m_BitCount;
  int m_NodeCount;
};

class NodeStates {
public:
  enum SearchState {
    SearchState_Unknown,
    SearchState_Found,
    SearchState_Complete,
  };

  class Stack {
  public:
    Stack();
    static size_t CalcBufferSize(int count);
    void Reset(int* buffer, size_t size, int count);
    int Count() const;
    void push(int value);
    int top() const;
    int pop();

  private:
    int* m_pBuffer;
    int m_Size;
    int m_Count;
    int m_Capacity;
  };

  using ResultIterator = std::reverse_iterator<const int*>;

  NodeStates();
  static size_t GetWorkBufferSize(int nodeCount);
  void Initialize(void* buffer, size_t size, int nodeCount);
  bool Tsort(EdgeMatrix& edges);
  static bool DepthFirstSearch(NodeStates& states, EdgeMatrix& edges,
    Stack& stack);
  SearchState GetState(int node) const;
  void PushTsortResult(int node);
  void SetState(int node, SearchState state);
  void ResetState();
  ResultIterator ResultBegin() const;
  ResultIterator ResultEnd() const;
  int GetNodeCount() const;

private:
  int m_NodeCount;
  int m_ResultCount;
  BitArray<uint64_t> m_Discovered;
  BitArray<uint64_t> m_Finished;
  int* m_pResults;
  int m_ResultCapacity;
  Stack m_Stack;
};

static_assert(sizeof(NodeStates) == 0x50);

}
