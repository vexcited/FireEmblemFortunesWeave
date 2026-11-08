#include <stddef.h>
#include <stdint.h>

#include <utility>
#include <vector>

namespace wld {

uint32_t Crc32(uint32_t seed, const char* data, size_t size);

namespace search {

template <typename T>
uint32_t GetModuleType() {
  static const uint32_t type =
    Crc32(0, T::kTypeName, sizeof(T::kTypeName) - 1);
  return type;
}

class Module {};

class Node {
public:
  template <typename T>
  T* GetModule() const {
    const uint32_t type = GetModuleType<T>();
    for (auto it = modules_.rbegin(); it != modules_.rend(); ++it) {
      if (it->first == type) {
        return static_cast<T*>(it->second);
      }
    }

    return nullptr;
  }

  const std::vector<Node*>& GetChildren() const {
    return children_;
  }

private:
  uint8_t unknown_000_[0x1f8];
  std::vector<std::pair<uint32_t, Module*>> modules_;
  uint8_t unknown_210_[0xd8];
  std::vector<Node*> children_;
};

// Walks a node tree depth first and keeps the first module of type T.
template <typename T>
struct ModuleFinder {
  T** found;

  void operator()(const ModuleFinder& self, const Node* node) const {
    if (node == nullptr) {
      return;
    }

    if (*found == nullptr) {
      if (T* module = node->GetModule<T>()) {
        *found = module;
      }
    }

    for (const Node* child : node->GetChildren()) {
      self(self, child);
    }
  }
};

#define WLD_SEARCH_MODULE(Name) \
  class Name : public Module { \
  public: \
    static constexpr char kTypeName[] = #Name; \
  }; \
  \
  template struct ModuleFinder<Name>;

WLD_SEARCH_MODULE(MapObjectModule)
WLD_SEARCH_MODULE(ModelModule)
WLD_SEARCH_MODULE(CharacterFacialController)
WLD_SEARCH_MODULE(CharacterAnimator)
WLD_SEARCH_MODULE(CharacterLookAt)
WLD_SEARCH_MODULE(CharacterIK)
WLD_SEARCH_MODULE(LocatorModule)
WLD_SEARCH_MODULE(LODModule)
WLD_SEARCH_MODULE(CharacterBuilder)
WLD_SEARCH_MODULE(CharacterEffect)
WLD_SEARCH_MODULE(EffectModule)

}

}
