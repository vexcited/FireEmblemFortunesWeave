namespace nn::syncpt {

struct LibraryVersion;

[[gnu::visibility("hidden")]] extern const LibraryVersion g_LibraryVersion;

const LibraryVersion* GetLibraryVersion() {
  return &g_LibraryVersion;
}

}
