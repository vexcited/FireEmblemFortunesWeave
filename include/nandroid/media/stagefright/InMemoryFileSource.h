#ifndef IN_MEMORY_FILE_SOURCE_H_

#define IN_MEMORY_FILE_SOURCE_H_

#include <nandroid/media/DataSource.h>
#include <nandroid/media/stagefright/MediaErrors.h>
#include <nandroid/utils/threads.h>

namespace nandroid {

class InMemoryFileSource : public DataSource {
public:
    InMemoryFileSource(const void *data, size_t size);
    InMemoryFileSource(int fd, int64_t offset, int64_t length);

    virtual status_t initCheck() const;

    virtual ssize_t readAt(off64_t offset, void *data, size_t size);

    virtual status_t getSize(off64_t *size);

protected:
    virtual ~InMemoryFileSource();

private:
    const void *mData;
    int64_t mSize;
    int64_t mOffset;
    Mutex mLock;

    InMemoryFileSource(const InMemoryFileSource &);
    InMemoryFileSource &operator=(const InMemoryFileSource &);
};

}  // namespace nandroid

#endif  // IN_MEMORY_FILE_SOURCE_H_
