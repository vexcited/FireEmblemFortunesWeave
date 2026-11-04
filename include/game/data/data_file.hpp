#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <algorithm>
#include <deque>
#include <string>
#include <unordered_map>
#include <vector>

namespace game {

uint64_t HashString(const char* text);

struct HashedString {
  explicit HashedString(const char* value)
    : hash(HashString(value)), text(value) {}

  operator uint64_t() const {
    return hash;
  }

  uint64_t hash;
  const char* text;
};

struct DataHeader {
  uint32_t magic;
  uint8_t version;
  unsigned char unknown_05[11];
  uint32_t item_size;
};

class DataSheet {
public:
  static constexpr uint32_t kMagic = 0x20251201;

  const char* GetName() const {
    return key_.text;
  }

  bool IsValid(size_t item_size) const {
    return header_ != nullptr && header_->magic == kMagic &&
      header_->item_size == item_size;
  }

  bool IsPatch() const {
    return header_->version == 2;
  }

  size_t GetCount() const {
    return count_;
  }

  template<typename T>
  T* GetItem(size_t index) const {
    return static_cast<T*>(items_) + index;
  }

private:
  HashedString key_;
  uint16_t unknown_10;
  uint16_t count_;
  uint32_t unknown_14;
  void* unknown_18;
  const DataHeader* header_;
  void* items_;
};

struct DataSheetTable {
  virtual ~DataSheetTable();

  std::unordered_map<uint64_t, DataSheet*> sheets;
};

class ResourceManager;

class Resource {
public:
  virtual ~Resource();

  ResourceManager* GetManager() const {
    return manager_;
  }

  const void* GetBody() const {
    return body_;
  }

  [[gnu::always_inline]] DataSheet* FindSheet(const char* name) const {
    const HashedString key(name);

    if (key.hash == 0) {
      return nullptr;
    }

    const auto found = sheets_->sheets.find(key);
    return found == sheets_->sheets.end() ? nullptr : found->second;
  }

private:
  ResourceManager* manager_;
  unsigned char body_[0x318];
  DataSheetTable* sheets_;
};

class ResourceManager {
public:
  void Release(Resource* resource);
};

std::vector<std::string> ExpandDataPaths(const std::string& path);
const char* GetDataVariant(const std::string& path);

// Link time optimization internalized these so they are addressed directly.
#pragma GCC visibility push(hidden)
extern std::deque<const void*> g_resource_stack;
extern std::deque<const void*> g_sheet_stack;
extern std::deque<void*> g_data_stack;
#pragma GCC visibility pop

// Keeps the data being linked reachable by nested lookups.
class DataScope {
public:
  explicit DataScope(void* data) {
    g_data_stack.push_back(data);
  }

  ~DataScope() {
    g_data_stack.pop_back();
  }
};

inline const char* StripPrefix(const char* name) {
  if (name != nullptr) {
    if (const char* separator = strchr(name, '_')) {
      return separator + 1;
    }
  }

  return name;
}

struct Data {
  HashedString key;
  uint16_t index;
  uint16_t unknown_12;
  uint16_t unknown_14;
  uint16_t id;

  void Link() {}
  void Unlink() {}
  void Relink() {}
};

namespace {

// Internal linkage lets the libc++ helpers instantiated for these be inlined
// or trimmed, as link time optimization did in the original.
template<typename Iterator>
struct LocalIterator : Iterator {
  LocalIterator() = default;
  LocalIterator(Iterator iterator) : Iterator(iterator) {}
};

template<typename T>
struct Local {
  operator T() const {
    return value;
  }

  T value;
};

struct CompareId {
  template<typename T>
  bool operator()(const T* left, const T* right) const {
    return left->id < right->id;
  }
};

}

const char* FindAlias(const HashedString& key);
const char* FindAliasSuffix(const HashedString& key);

template<typename U>
struct DataGroup : Data {
  void* unknown_18;
  void* unknown_20;
  std::vector<U*>* children;

  [[gnu::always_inline]] void Link() {
    for (U* child : *children) {
      DataScope scope(child);
      child->Link();
    }
  }

  [[gnu::always_inline]] void Unlink() {
    for (U* child : *children) {
      DataScope scope(child);
      child->Unlink();
    }
  }
};

class IDataFile {
public:
  virtual ~IDataFile();

  virtual void Link() = 0;
  virtual void Unlink() = 0;
  virtual void Relink() = 0;

protected:
  Resource* AcquireResource(const char* name);

  void ReleaseResources() {
    for (Resource* resource : resources_) {
      resource->GetManager()->Release(resource);
    }

    resources_.clear();
  }

  std::vector<Resource*> resources_;
};

template<typename T, typename U>
class DataFile : public IDataFile {
public:
  ~DataFile() override {
    Unload();
  }

  void Link() override {
    if (linked_) {
      return;
    }

    PushContext();

    for (T* item : items_) {
      DataScope scope(item);
      item->Link();
    }

    OnLinked();
    linked_ = true;
    PopContext();
  }

  void Unlink() override {
    if (!linked_) {
      return;
    }

    PushContext();
    OnUnlinking();

    for (T* item : items_) {
      DataScope scope(item);
      item->Unlink();
    }

    linked_ = false;
    PopContext();
  }

  void Relink() override {
    if (!linked_) {
      return;
    }

    PushContext();
    OnRelinking();

    for (T* item : items_) {
      DataScope scope(item);
      item->Relink();
    }

    PopContext();
  }

  bool Load(const char* path, const char* sheet_name, bool sort) {
    const std::string path_string(path);
    const std::vector<std::string> files = ExpandDataPaths(path_string);
    Unload();
    std::unordered_map<uint32_t, size_t> indices;
    int file_index = 0;

    for (const std::string& file : files) {
      Resource* resource = AcquireResource(file.c_str());

      if (resource == nullptr) {
        continue;
      }

      DataSheet* sheet = resource->FindSheet(sheet_name);

      if (sheet == nullptr || !sheet->IsValid(sizeof(T))) {
        continue;
      }

      [[clang::always_inline]] sheets_.push_back(sheet);

      for (size_t i = 0; i < sheet->GetCount(); ++i) {
        T* item = sheet->GetItem<T>(i);

        if (item == nullptr) {
          continue;
        }

        [[clang::always_inline]] sheets_by_index_.emplace(
          item->id + 1, file_index
        );

        // A later file replaces items unless it is a patch.
        if (file_index > 0 && item->key.hash != 0) {
          const auto found = items_by_hash_.find(item->key);

          if (found != items_by_hash_.end() && !sheet->IsPatch()) {
            const auto index = indices.find(found->second->id + 1);

            if (index != indices.end()) {
              items_[index->second] = item;

              if (item->key.text != nullptr) {
                items_by_hash_.insert_or_assign(
                  HashedString(item->key.text), item
                );
                items_by_hash_.insert_or_assign(
                  HashedString(StripPrefix(item->key.text)), item
                );
              }

              if (FindAlias(item->key) != nullptr) {
                items_by_hash_.insert_or_assign(
                  HashedString(FindAlias(item->key)), item
                );
                items_by_hash_.insert_or_assign(
                  HashedString(FindAliasSuffix(item->key)), item
                );
              }

              continue;
            }
          }
        }

        const uint32_t id = item->id + 1;
        indices.emplace(id, items_.size());
        [[clang::always_inline]] items_.push_back(item);

        if (const char* name = item->key.text) {
          [[clang::always_inline]] names_.push_back(name);
          AddKey(HashedString(name), item);
          AddKey(HashedString(StripPrefix(item->key.text)), item);
        }

        if (const char* alias = FindAlias(item->key)) {
          AddKey(HashedString(alias), item);
          AddKey(HashedString(FindAliasSuffix(item->key)), item);
        }
      }

      [[clang::always_inline]] variants_.push_back(GetDataVariant(file));
      ++file_index;
    }

    if (file_index > 1) {
      const bool patched = std::any_of(
        sheets_.begin(), sheets_.end(),
        [](const DataSheet* sheet) { return sheet->IsPatch(); }
      );

      if (!patched) {
        if (sort) {
          std::stable_sort(
            LocalIterator(items_.begin()), LocalIterator(items_.end()),
            CompareId()
          );
        }
      }
      else if (sort) {
        std::unordered_map<uint64_t, T*> first;

        for (T* item : items_) {
          if (!first.contains(item->key)) {
            first.emplace(item->key, Local<T*>{item});
          }
        }

        std::vector<T*> unique;

        for (T* item : items_) {
          if (first.find(item->key)->second == item) {
            [[clang::always_inline]] unique.push_back(item);
          }
        }

        std::stable_sort(
          LocalIterator(unique.begin()), LocalIterator(unique.end()),
          CompareId()
        );
        items_.assign(
          LocalIterator(unique.cbegin()), LocalIterator(unique.cend())
        );
      }

      for (size_t i = 0; i < items_.size(); ++i) {
        items_[i]->index = i;
      }
    }

    return !sheets_.empty();
  }

  void Unload() {
    if (resources_.empty()) {
      return;
    }

    Unlink();
    items_.clear();
    names_.clear();
    items_by_hash_.clear();
    entries_by_hash_.clear();
    sheets_.clear();
    sheets_by_index_.clear();
    variants_.clear();
    ReleaseResources();
  }

protected:
  virtual void OnLinked() {}
  virtual void OnUnlinking() {}
  virtual void OnRelinking() {}

private:
  // Link time optimization inlined these into every caller.
  [[gnu::always_inline]] void PushContext() const {
    g_resource_stack.push_back(
      resources_.empty() ? nullptr : resources_.front()->GetBody()
    );
    g_sheet_stack.push_back(
      sheets_.empty() ? nullptr : sheets_.front()->GetName()
    );
  }

  [[gnu::always_inline]] static void PopContext() {
    g_resource_stack.pop_back();
    g_sheet_stack.pop_back();
  }

  void AddKey(const HashedString& key, T* item) {
    if (!items_by_hash_.contains(key)) {
      items_by_hash_.emplace(key, Local<T*>{item});
    }
  }

  std::vector<DataSheet*> sheets_;
  std::vector<T*> items_;
  std::unordered_map<uint64_t, T*> items_by_hash_;
  std::unordered_map<uint64_t, U*> entries_by_hash_;
  std::unordered_map<uint32_t, int32_t> sheets_by_index_;
  std::vector<const char*> variants_;
  std::vector<const char*> names_;
  bool linked_;
};

}
