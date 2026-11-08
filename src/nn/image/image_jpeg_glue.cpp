#include <stddef.h>
#include <stdint.h>

struct jpeg_common_struct;
struct backing_store_struct;

namespace nn::image {

enum JpegStatus : int32_t {
  JpegStatus_NoBackingStore = -65,
};

namespace detail {

void HandleError(jpeg_common_struct* info, JpegStatus status);

}

}

int nnImageDetailJpeg_FormatString(char*, unsigned long, const char*, ...) {
  return 0;
}

void nnImageDetailJpeg_Println(char*) {
}

long nndetailImageJpeg_jpeg_mem_init(jpeg_common_struct*) {
  return 0;
}

void nndetailImageJpeg_jpeg_mem_term(jpeg_common_struct*) {
}

void nndetailImageJpeg_jpeg_open_backing_store(jpeg_common_struct* info,
  backing_store_struct*, long) {
  nn::image::detail::HandleError(info,
    nn::image::JpegStatus_NoBackingStore);
}
