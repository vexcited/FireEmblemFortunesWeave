#include "nn/album/album_types.hpp"

namespace nn::album {

void Initialize() {
  g_LibraryState.Initialize();
  g_LibraryState.EnsureAlbumAvailable();
}

void Finalize() {
  g_LibraryState.Finalize();
}

}
