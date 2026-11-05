#include "game/data/data_files.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// The person ids of the heroes, which other units index by number.
extern const char* const g_hero_ids[];

// Other units reach the person file through the global offset table.
[[gnu::visibility("default")]] extern PersonFile* g_person_file;

namespace {

constexpr int kHeroCount = 10;

}

const PersonData* GetHero(uint8_t index) {
  return PersonFile::GetInstance()->Find(g_hero_ids[index]);
}

// A missing hero row matches a null person.
int GetHeroIndex(const PersonData* person) {
  for (int i = 0; i < kHeroCount; i++) {
    if (g_person_file->Find(g_hero_ids[i]) == person) {
      return i;
    }
  }
  return 0;
}

#pragma GCC visibility pop

}
