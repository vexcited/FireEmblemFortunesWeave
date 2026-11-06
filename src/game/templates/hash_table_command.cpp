#include <functional>
#include <string>
#include <unordered_map>

namespace {

// Internal placeholders for the command owners give the tables internal
// linkage, as link time internalization did. The rehash called once is then
// inlined into the insertion.
template <unsigned N>
struct Owner;

template <unsigned N>
using CommandTable =
  std::unordered_map<std::string, std::function<bool(Owner<N>&)>>;

// Two insertion paths keep the shared insertion out of line.
template <unsigned N>
[[gnu::used]] void Register(CommandTable<N>& table, std::string& first,
  std::string& second) {
  table[std::move(first)];
  table.try_emplace(std::move(second));
}

template void Register(CommandTable<0>&, std::string&, std::string&);
template void Register(CommandTable<1>&, std::string&, std::string&);
template void Register(CommandTable<2>&, std::string&, std::string&);
template void Register(CommandTable<3>&, std::string&, std::string&);

}
