#include <string>
#include <unordered_map>

namespace {

// Internal placeholders give the tables internal linkage, as link time
// internalization did, so the rehash called once is inlined into the node
// insertion. Only the size of the 56 byte value reaches the code.
template<unsigned N>
struct Value {
  unsigned char bytes[56];
};

template<unsigned N>
using MultiTable = std::unordered_multimap<std::string, Value<N>>;

// Two insertion paths keep the shared node insertion out of line.
template<unsigned N>
[[gnu::used]] void Insert(MultiTable<N>& table, const std::string& key,
  std::string&& other) {
  table.emplace(key, Value<N>{});
  table.emplace(std::move(other), Value<N>{});
}

template void Insert(MultiTable<0>&, const std::string&, std::string&&);
template void Insert(MultiTable<1>&, const std::string&, std::string&&);
template void Insert(MultiTable<2>&, const std::string&, std::string&&);
template void Insert(MultiTable<3>&, const std::string&, std::string&&);

}
