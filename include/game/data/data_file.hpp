#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <algorithm>
#include <deque>
#include <functional>
#include <span>
#include <string>
#include <unordered_map>
#include <vector>

// Link time optimization internalized the game code, so its data is addressed
// directly instead of through the global offset table.
#pragma GCC visibility push(hidden)

namespace game {

uint64_t HashString(const char* text);

struct HashedString {
  HashedString() : hash(0), text("") {}

  explicit HashedString(const char* value)
    : hash(HashString(value)), text(value) {}

  // User provided, so containers copy it member by member.
  HashedString(const HashedString& other)
    : hash(other.hash), text(other.text) {}

  HashedString& operator=(const HashedString& other) = default;

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

const char* FindAlias(const HashedString& key);
const char* FindAliasSuffix(const HashedString& key);
uint64_t HashAlias(const HashedString& key);

struct Data;

extern std::deque<const void*> g_resource_stack;
extern std::deque<const void*> g_sheet_stack;
extern std::deque<const Data*> g_data_stack;

// Keeps the data being built reachable by nested lookups.
class DataScope {
public:
  explicit DataScope(const Data* data) {
    g_data_stack.push_back(data);
  }

  ~DataScope() {
    g_data_stack.pop_back();
  }
};

struct SectionMap : std::unordered_map<uint32_t, int32_t> {};

// Maps a row type to the singleton file that owns its rows.
template<typename T>
struct DataFileOf;

// Link time optimization inlined the lookup of a file referenced only once.
template<typename T>
inline constexpr bool kInlineDataRef = false;

// A row referenced by name, looked up once the target file is loaded.
template<typename T>
class DataRef {
public:
  [[gnu::always_inline]] void Resolve() {
    if constexpr (kInlineDataRef<T>) {
      Lookup();
    }
    else {
      LookupShared();
    }
  }

  const char* name_;
  T* data_;

private:
  [[gnu::always_inline]] void Lookup() {
    if (name_ != nullptr && name_[0] != '\0') {
      data_ = DataFileOf<T>::type::GetInstance()->Find(name_);
    }
  }

  [[gnu::noinline]] void LookupShared() {
    Lookup();
  }
};

template<typename T>
class DataRefList {
public:
  static constexpr uint8_t kReferenceType = 0x10;

  // An unresolved name empties the whole list.
  [[gnu::noinline]] void Resolve() {
    auto* file = DataFileOf<T>::type::GetInstance();

    if (file == nullptr || type_ != kReferenceType) {
      return;
    }

    for (size_t i = 0; i < count_; ++i) {
      DataRef<T>& reference = references_[i];

      if (reference.name_ == nullptr) {
        continue;
      }

      if (T* data = file->Find(reference.name_)) {
        reference.data_ = data;
      }
      else {
        count_ = 0;
      }
    }
  }

private:
  uint16_t count_;
  uint8_t type_;
  unsigned char unknown_03[5];
  DataRef<T>* references_;
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

// The short hash index hashes its keys like std::hash.
struct ShortHash : std::hash<uint32_t> {};

struct CompareId {
  template<typename T>
  bool operator()(const T* left, const T* right) const {
    return left->id < right->id;
  }
};

template<typename T>
void SortById(std::vector<T*>& items) {
  std::stable_sort(
    LocalIterator(items.begin()), LocalIterator(items.end()), CompareId()
  );
}

template<typename T>
void UpdateIndices(std::vector<T*>& items) {
  for (size_t i = 0; i < items.size(); ++i) {
    items[i]->index = i;
  }
}

}

inline const char* StripPrefix(const char* name) {
  if (name != nullptr) {
    if (const char* separator = strchr(name, '_')) {
      return separator + 1;
    }
  }

  return name;
}

struct Data {
  void TryAddSection(SectionMap& sections, int section) {
    [[clang::always_inline]] sections.emplace(id + 1, section);
  }

  void TryCreateList() {}

  void Build() {}
  void Unbuild() {}
  void Rebuild() {}

  HashedString key;
  uint16_t index;
  uint16_t element_count;
  uint16_t unknown_14;
  uint16_t id;
};

template<typename U>
struct DataArray : Data {
  void ForEach(const std::function<void(const U*)>& function) const {
    for (const U& element : std::span<const U>(elements, element_count)) {
      function(&element);
    }
  }

  void TryAddSection(SectionMap& sections, int section) {
    Data::TryAddSection(sections, section);
    ForEach([&sections, section](const U* element) {
      AddSection(sections, element, section);
    });
  }

  // Patch sheets leave the list empty in the file.
  void TryCreateList() {
    if (list == nullptr) {
      auto* created = new std::vector<U*>();
      ForEach([created](const U* element) {
        created->push_back(const_cast<U*>(element));
      });
      list = created;
    }
  }

  [[gnu::always_inline]] void Build() {
    for (U* element : *list) {
      DataScope scope(element);
      [[clang::always_inline]] element->Build();
    }
  }

  [[gnu::always_inline]] void Unbuild() {
    for (U* element : *list) {
      DataScope scope(element);
      [[clang::always_inline]] element->Unbuild();
    }
  }

  void* unknown_18;
  U* elements;
  std::vector<U*>* list;

private:
  static void AddSection(SectionMap& sections, const U* element, int section) {
    if (element != nullptr) {
      sections.emplace(element->id + 1, section);
    }
  }
};

namespace {

inline void MergeList(Data&, const Data&) {}

template<typename U>
void MergeList(DataArray<U>& kept, const DataArray<U>& other) {
  for (U* element : *other.list) {
    [[clang::always_inline]] kept.list->push_back(element);
  }
}

inline void SortList(Data&) {}

template<typename U>
void SortList(DataArray<U>& array) {
  SortById(*array.list);
  UpdateIndices(*array.list);
}

}

class IDataFile {
public:
  virtual ~IDataFile();

  virtual void Build() = 0;
  virtual void Unbuild() = 0;
  virtual void Rebuild() = 0;

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

  void Build() override {
    if (built_) {
      return;
    }

    PushContext();

    for (T* item : items_) {
      DataScope scope(item);
      [[clang::always_inline]] item->Build();
    }

    OnBuild();
    built_ = true;
    PopContext();
  }

  void Unbuild() override {
    if (!built_) {
      return;
    }

    PushContext();
    OnUnbuild();

    for (T* item : items_) {
      DataScope scope(item);
      [[clang::always_inline]] item->Unbuild();
    }

    built_ = false;
    PopContext();
  }

  void Rebuild() override {
    if (!built_) {
      return;
    }

    PushContext();
    OnRebuild();

    for (T* item : items_) {
      DataScope scope(item);
      [[clang::always_inline]] item->Rebuild();
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

      if (sheet == nullptr || !sheet->IsValid(sizeof(U))) {
        continue;
      }

      [[clang::always_inline]] sheets_.push_back(sheet);

      for (size_t i = 0; i < sheet->GetCount(); ++i) {
        T* item = sheet->GetItem<T>(i);

        if (item == nullptr) {
          continue;
        }

        item->TryAddSection(sections_, file_index);

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

    const bool merge = file_index > 1;

    for (DataSheet* sheet : sheets_) {
      if (sheet->IsPatch()) {
        for (size_t i = 0; i < sheet->GetCount(); ++i) {
          sheet->GetItem<T>(i)->TryCreateList();
        }
      }
    }

    if (merge) {
      const bool patched = std::any_of(
        sheets_.begin(), sheets_.end(),
        [](const DataSheet* sheet) { return sheet->IsPatch(); }
      );

      if (!patched) {
        if (sort) {
          SortById(items_);
        }

        UpdateIndices(items_);
      }
      else if (sort) {
        // Keeps the first item of every key, folding later lists into it.
        std::unordered_map<uint64_t, T*> first;

        for (T* item : items_) {
          if (!first.contains(item->key)) {
            first.emplace(item->key, Local<T*>{item});
          }
        }

        std::vector<T*> unique;

        for (T* item : items_) {
          T* kept = first.find(item->key)->second;

          if (kept == item) {
            [[clang::always_inline]] unique.push_back(item);
          }
          else {
            MergeList(*kept, *item);
          }
        }

        SortById(unique);

        for (T* item : unique) {
          SortList(*item);
        }

        items_.assign(
          LocalIterator(unique.cbegin()), LocalIterator(unique.cend())
        );
      }
      else {
        UpdateIndices(items_);
      }
    }

    return !sheets_.empty();
  }

  T* At(size_t index) const {
    return items_[index];
  }

  size_t GetItemCount() const {
    return items_.size();
  }

  const std::vector<T*>& GetItems() const {
    return items_;
  }

  [[gnu::always_inline]] T* Find(const char* name) const {
    const HashedString key(name);

    if (key.hash == 0) {
      return nullptr;
    }

    const auto found = items_by_hash_.find(key);
    return found == items_by_hash_.end() ? nullptr : found->second;
  }

  T* FindByHash(uint64_t hash) const {
    const auto found = items_by_hash_.find(hash);
    return found == items_by_hash_.end() ? nullptr : found->second;
  }

  T* FindByShortHash(uint32_t hash) const {
    const auto found = items_by_short_hash_.find(hash);
    return found == items_by_short_hash_.end() ? nullptr : found->second;
  }

  void Unload() {
    if (resources_.empty()) {
      return;
    }

    Unbuild();
    items_.clear();
    names_.clear();
    items_by_hash_.clear();
    items_by_short_hash_.clear();
    sheets_.clear();
    sections_.clear();
    variants_.clear();
    ReleaseResources();
  }

protected:
  virtual void OnBuild() {}
  virtual void OnUnbuild() {}
  virtual void OnRebuild() {}

  // Some files also index their items by the low half of the name hash.
  void IndexShortHashes() {
    items_by_short_hash_.clear();

    for (T* item : items_) {
      if (const uint32_t hash = item->key.hash) {
        AddShortHash(hash, item);
      }
    }
  }

  void IndexShortHashesWithAliases() {
    items_by_short_hash_.clear();

    for (T* item : items_) {
      if (const uint32_t hash = item->key.hash) {
        AddShortHash(hash, item);
      }

      if (const uint32_t hash = HashAlias(item->key)) {
        AddShortHash(hash, item);
      }
    }
  }

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

  void AddShortHash(uint32_t hash, T* item) {
    if (!items_by_short_hash_.contains(hash)) {
      items_by_short_hash_.emplace(hash, Local<T*>{item});
    }
  }

  std::vector<DataSheet*> sheets_;
  std::vector<T*> items_;
  std::unordered_map<uint64_t, T*> items_by_hash_;
  std::unordered_map<uint32_t, T*, ShortHash> items_by_short_hash_;
  SectionMap sections_;
  std::vector<const char*> variants_;
  std::vector<const char*> names_;
  bool built_;
};

}

#pragma GCC visibility pop
