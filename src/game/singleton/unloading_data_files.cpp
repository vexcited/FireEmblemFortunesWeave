#include "game/data/data_types.hpp"
#include "game/singleton_data_file.hpp"

namespace game {

#define GAME_DATA_FILE(T, U, V) \
  class T : public SingletonDataFile<T, U, V> {};
#define GAME_DATA_FILE_CUSTOM(T, U, V) GAME_DATA_FILE(T, U, V)

// These files unload the current instance in their own destructor, before
// the data file base unloads itself again.
#define GAME_DATA_FILE_UNLOADING(T, U, V) \
  class T : public SingletonDataFile<T, U, V> { \
  public: \
    ~T() override { \
      GetInstance()->Unload(); \
    } \
  }; \
  template T* Singleton<T>::Create();
#define GAME_DATA_FILE_UNLOADING_CUSTOM(T, U, V)

#include "singleton_data_files.inc"
#undef GAME_DATA_FILE_UNLOADING_CUSTOM
#undef GAME_DATA_FILE_UNLOADING
#undef GAME_DATA_FILE_CUSTOM
#undef GAME_DATA_FILE

// The build hooks fill and clear global tables, they are not reconstructed.
class PersonFile : public SingletonDataFile<PersonFile, PersonData,
  PersonData> {
public:
  ~PersonFile() override;

protected:
  void OnBuild() override;
  void OnUnbuild() override;
};

inline PersonFile::~PersonFile() {
  GetInstance()->Unload();
}

template PersonFile* Singleton<PersonFile>::Create();

class SituationFile : public SingletonDataFile<SituationFile, SituationData,
  SituationData> {
public:
  ~SituationFile() override;

protected:
  void OnBuild() override;
  void OnUnbuild() override;
};

inline SituationFile::~SituationFile() {
  GetInstance()->Unload();
}

template SituationFile* Singleton<SituationFile>::Create();

class DungeonEachFile : public SingletonDataFile<DungeonEachFile,
  DungeonEachData, DungeonEachData> {
public:
  ~DungeonEachFile() override {
    GetInstance()->Unload();
  }

protected:
  void OnBuild() override {}
};

template DungeonEachFile* Singleton<DungeonEachFile>::Create();

}
