/*
  Adapted from libjpeg-turbo 1.5.0 jdmarker.c and jerror.h,
  with the natural-order table from jutils.c.
  SDK export names and ABI declarations have been changed.
  Copyright (C) 1991-1998, Thomas G. Lane.
  Copyright (C) 2012, 2015, D. R. Commander.
  Copyright (C) 1994-1997, Thomas G. Lane.
  Modified 1997-2009 by Guido Vollbeding.
  Copyright (C) 2014, D. R. Commander.
  Copyright (C) 1991-1996, Thomas G. Lane.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/README.ijg
  Full license text: include/image/jpeg_transform.hpp.
*/

#include "image/jpeg_marker.hpp"

namespace jpeg_marker {

using JLONG = int64_t;
using JOCTET = uint8_t;
using UINT8 = uint8_t;
using UINT16 = uint16_t;
using JDIMENSION = uint32_t;
using boolean = int;
using JQUANT_TBL = QuantizationTable;
using JHUFF_TBL = HuffmanTable;
using jpeg_saved_marker_ptr = SavedMarker *;
using jpeg_marker_struct = SavedMarker;
using jpeg_marker_parser_method = Parser;
using j_decompress_ptr = Decoder *;
using j_common_ptr = Decoder *;

extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);

static HuffmanTable *allocate_huffman_table(Decoder *decoder) {
  return nndetailImageJpeg_jpeg_alloc_huff_table(
      reinterpret_cast<jpeg_entropy::Decoder *>(decoder));
}

extern "C" QuantizationTable *
nndetailImageJpeg_jpeg_alloc_quant_table(Decoder *decoder) {
  auto *table = static_cast<QuantizationTable *>(
      decoder->mem->alloc_small(decoder, 0, sizeof(QuantizationTable)));
  table->sent_table = 0;
  return table;
}

enum {
  JERR_BAD_COMPONENT_ID = 4,
  JERR_BAD_HUFF_TABLE = 9,
  JERR_BAD_LENGTH = 12,
  JERR_DHT_INDEX = 31,
  JERR_DQT_INDEX = 32,
  JERR_EMPTY_IMAGE = 33,
  JERR_NO_SOI = 55,
  JERR_SOF_DUPLICATE = 60,
  JERR_SOF_UNSUPPORTED = 62,
  JERR_SOI_DUPLICATE = 63,
  JERR_SOS_NO_SOF = 64,
  JERR_UNKNOWN_MARKER = 70,
  JTRC_ADOBE = 78,
  JTRC_APP0 = 79,
  JTRC_APP14 = 80,
  JTRC_DHT = 82,
  JTRC_DQT = 83,
  JTRC_DRI = 84,
  JTRC_EOI = 87,
  JTRC_HUFFBITS = 88,
  JTRC_JFIF = 89,
  JTRC_JFIF_BADTHUMBNAILSIZE = 90,
  JTRC_JFIF_EXTENSION = 91,
  JTRC_JFIF_THUMBNAIL = 92,
  JTRC_MISC_MARKER = 93,
  JTRC_PARMLESS_MARKER = 94,
  JTRC_QUANTVALS = 95,
  JTRC_RECOVERY_ACTION = 99,
  JTRC_RST = 100,
  JTRC_SOF = 102,
  JTRC_SOF_COMPONENT = 103,
  JTRC_SOI = 104,
  JTRC_SOS = 105,
  JTRC_SOS_COMPONENT = 106,
  JTRC_SOS_PARAMS = 107,
  JTRC_THUMB_JPEG = 110,
  JTRC_THUMB_PALETTE = 111,
  JTRC_THUMB_RGB = 112,
  JWRN_EXTRANEOUS_DATA = 119,
  JWRN_JFIF_MAJOR = 122,
  JWRN_MUST_RESYNC = 124,
};
const int jpeg_natural_order[64 + 16] = {
    0,  1,  8,  16, 9,  2,  3,  10, 17, 24, 32, 25, 18, 11, 4,  5,
    12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6,  7,  14, 21, 28,
    35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51,
    58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63,
    63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63};

typedef enum {
  M_SOF0 = 0xc0,
  M_SOF1 = 0xc1,
  M_SOF2 = 0xc2,
  M_SOF3 = 0xc3,
  M_SOF5 = 0xc5,
  M_SOF6 = 0xc6,
  M_SOF7 = 0xc7,
  M_JPG = 0xc8,
  M_SOF9 = 0xc9,
  M_SOF10 = 0xca,
  M_SOF11 = 0xcb,
  M_SOF13 = 0xcd,
  M_SOF14 = 0xce,
  M_SOF15 = 0xcf,
  M_DHT = 0xc4,
  M_DAC = 0xcc,
  M_RST0 = 0xd0,
  M_RST1 = 0xd1,
  M_RST2 = 0xd2,
  M_RST3 = 0xd3,
  M_RST4 = 0xd4,
  M_RST5 = 0xd5,
  M_RST6 = 0xd6,
  M_RST7 = 0xd7,
  M_SOI = 0xd8,
  M_EOI = 0xd9,
  M_SOS = 0xda,
  M_DQT = 0xdb,
  M_DNL = 0xdc,
  M_DRI = 0xdd,
  M_DHP = 0xde,
  M_EXP = 0xdf,
  M_APP0 = 0xe0,
  M_APP1 = 0xe1,
  M_APP2 = 0xe2,
  M_APP3 = 0xe3,
  M_APP4 = 0xe4,
  M_APP5 = 0xe5,
  M_APP6 = 0xe6,
  M_APP7 = 0xe7,
  M_APP8 = 0xe8,
  M_APP9 = 0xe9,
  M_APP10 = 0xea,
  M_APP11 = 0xeb,
  M_APP12 = 0xec,
  M_APP13 = 0xed,
  M_APP14 = 0xee,
  M_APP15 = 0xef,
  M_JPG0 = 0xf0,
  M_JPG13 = 0xfd,
  M_COM = 0xfe,
  M_TEM = 0x01,
  M_ERROR = 0x100
} JPEG_MARKER;
typedef struct {
  Reader pub;
  jpeg_marker_parser_method process_COM;
  jpeg_marker_parser_method process_APPn[16];
  unsigned int length_limit_COM;
  unsigned int length_limit_APPn[16];
  jpeg_saved_marker_ptr cur_marker;
  unsigned int bytes_read;
} my_marker_reader;
typedef my_marker_reader *my_marker_ptr;
static boolean get_soi(j_decompress_ptr cinfo) {
  int i;
  ((cinfo)->err->msg_code = (JTRC_SOI),
   (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
  if (cinfo->marker->saw_SOI) {
    ((cinfo)->err->msg_code = (JERR_SOI_DUPLICATE),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  for (i = 0; i < 16; i++) {
    cinfo->arith_dc_L[i] = 0;
    cinfo->arith_dc_U[i] = 1;
    cinfo->arith_ac_K[i] = 5;
  }
  cinfo->restart_interval = 0;
  cinfo->jpeg_color_space = 0;
  cinfo->CCIR601_sampling = 0;
  cinfo->saw_JFIF_marker = 0;
  cinfo->JFIF_major_version = 1;
  cinfo->JFIF_minor_version = 1;
  cinfo->density_unit = 0;
  cinfo->X_density = 1;
  cinfo->Y_density = 1;
  cinfo->saw_Adobe_marker = 0;
  cinfo->Adobe_transform = 0;
  cinfo->marker->saw_SOI = 1;
  return 1;
}
static boolean get_sof(j_decompress_ptr cinfo, boolean is_prog,
                       boolean is_arith) {
  JLONG length;
  int c, ci;
  Component *compptr;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  cinfo->progressive_mode = is_prog;
  cinfo->arith_code = is_arith;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    cinfo->data_precision = static_cast<int>(*next_input_byte++);
  } while (0);
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    cinfo->image_height = ((unsigned int)static_cast<int>(*next_input_byte++))
                          << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    cinfo->image_height += static_cast<int>(*next_input_byte++);
  } while (0);
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    cinfo->image_width = ((unsigned int)static_cast<int>(*next_input_byte++))
                         << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    cinfo->image_width += static_cast<int>(*next_input_byte++);
  } while (0);
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    cinfo->num_components = static_cast<int>(*next_input_byte++);
  } while (0);
  length -= 8;
  do {
    int *_mp = (cinfo)->err->msg_parm.i;
    _mp[0] = (cinfo->unread_marker);
    _mp[1] = ((int)cinfo->image_width);
    _mp[2] = ((int)cinfo->image_height);
    _mp[3] = (cinfo->num_components);
    (cinfo)->err->msg_code = (JTRC_SOF);
    (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1));
  } while (0);
  if (cinfo->marker->saw_SOF) {
    ((cinfo)->err->msg_code = (JERR_SOF_DUPLICATE),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  if (cinfo->image_height <= 0 || cinfo->image_width <= 0 ||
      cinfo->num_components <= 0) {
    ((cinfo)->err->msg_code = (JERR_EMPTY_IMAGE),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  if (length != (cinfo->num_components * 3)) {
    ((cinfo)->err->msg_code = (JERR_BAD_LENGTH),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  if (cinfo->comp_info == nullptr) {
    cinfo->comp_info = (Component *)(*cinfo->mem->alloc_small)(
        (j_common_ptr)cinfo, 1, cinfo->num_components * sizeof(Component));
  }
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
       ci++, compptr++) {
    compptr->component_index = ci;
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      compptr->component_id = static_cast<int>(*next_input_byte++);
    } while (0);
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      c = static_cast<int>(*next_input_byte++);
    } while (0);
    compptr->h_samp_factor = (c >> 4) & 15;
    compptr->v_samp_factor = (c) & 15;
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      compptr->quant_tbl_no = static_cast<int>(*next_input_byte++);
    } while (0);
    do {
      int *_mp = (cinfo)->err->msg_parm.i;
      _mp[0] = (compptr->component_id);
      _mp[1] = (compptr->h_samp_factor);
      _mp[2] = (compptr->v_samp_factor);
      _mp[3] = (compptr->quant_tbl_no);
      (cinfo)->err->msg_code = (JTRC_SOF_COMPONENT);
      (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1));
    } while (0);
  }
  cinfo->marker->saw_SOF = 1;
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static boolean get_sos(j_decompress_ptr cinfo) {
  JLONG length;
  int i, ci, n, c, cc, pi;
  Component *compptr;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  if (!cinfo->marker->saw_SOF) {
    ((cinfo)->err->msg_code = (JERR_SOS_NO_SOF),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    n = static_cast<int>(*next_input_byte++);
  } while (0);
  ((cinfo)->err->msg_code = (JTRC_SOS), (cinfo)->err->msg_parm.i[0] = (n),
   (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
  if (length != (n * 2 + 6) || n < 1 || n > 4) {
    ((cinfo)->err->msg_code = (JERR_BAD_LENGTH),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  cinfo->comps_in_scan = n;
  for (i = 0; i < 4; i++) {
    cinfo->cur_comp_info[i] = nullptr;
  }
  for (i = 0; i < n; i++) {
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      cc = static_cast<int>(*next_input_byte++);
    } while (0);
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      c = static_cast<int>(*next_input_byte++);
    } while (0);
    for (ci = 0, compptr = cinfo->comp_info;
         ci < cinfo->num_components && ci < 4; ci++, compptr++) {
      if (cc == compptr->component_id && !cinfo->cur_comp_info[ci]) {
        goto id_found;
      }
    }
    ((cinfo)->err->msg_code = (JERR_BAD_COMPONENT_ID),
     (cinfo)->err->msg_parm.i[0] = (cc),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  id_found:
    cinfo->cur_comp_info[i] = compptr;
    compptr->dc_tbl_no = (c >> 4) & 15;
    compptr->ac_tbl_no = (c) & 15;
    do {
      int *_mp = (cinfo)->err->msg_parm.i;
      _mp[0] = (cc);
      _mp[1] = (compptr->dc_tbl_no);
      _mp[2] = (compptr->ac_tbl_no);
      (cinfo)->err->msg_code = (JTRC_SOS_COMPONENT);
      (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1));
    } while (0);
    for (pi = 0; pi < i; pi++) {
      if (cinfo->cur_comp_info[pi] == compptr) {
        ((cinfo)->err->msg_code = (JERR_BAD_COMPONENT_ID),
         (cinfo)->err->msg_parm.i[0] = (cc),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
    }
  }
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    c = static_cast<int>(*next_input_byte++);
  } while (0);
  cinfo->Ss = c;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    c = static_cast<int>(*next_input_byte++);
  } while (0);
  cinfo->Se = c;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    c = static_cast<int>(*next_input_byte++);
  } while (0);
  cinfo->Ah = (c >> 4) & 15;
  cinfo->Al = (c) & 15;
  do {
    int *_mp = (cinfo)->err->msg_parm.i;
    _mp[0] = (cinfo->Ss);
    _mp[1] = (cinfo->Se);
    _mp[2] = (cinfo->Ah);
    _mp[3] = (cinfo->Al);
    (cinfo)->err->msg_code = (JTRC_SOS_PARAMS);
    (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1));
  } while (0);
  cinfo->marker->next_restart_num = 0;
  cinfo->input_scan_number++;
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static boolean get_dht(j_decompress_ptr cinfo) {
  JLONG length;
  UINT8 bits[17];
  UINT8 huffval[256] = {};
  int i, index, count;
  JHUFF_TBL **htblptr;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  length -= 2;
  while (length > 16) {
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      index = static_cast<int>(*next_input_byte++);
    } while (0);
    ((cinfo)->err->msg_code = (JTRC_DHT), (cinfo)->err->msg_parm.i[0] = (index),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
    bits[0] = 0;
    count = 0;
    for (i = 1; i <= 16; i++) {
      do {
        if (bytes_in_buffer == 0) {
          if (!(*datasrc->fill_input_buffer)(cinfo)) {
            return 0;
          }
          (next_input_byte = datasrc->next_input_byte,
           bytes_in_buffer = datasrc->bytes_in_buffer);
        };
        bytes_in_buffer--;
        bits[i] = static_cast<int>(*next_input_byte++);
      } while (0);
      count += bits[i];
    }
    length -= 1 + 16;
    do {
      int *_mp = (cinfo)->err->msg_parm.i;
      _mp[0] = (bits[1]);
      _mp[1] = (bits[2]);
      _mp[2] = (bits[3]);
      _mp[3] = (bits[4]);
      _mp[4] = (bits[5]);
      _mp[5] = (bits[6]);
      _mp[6] = (bits[7]);
      _mp[7] = (bits[8]);
      (cinfo)->err->msg_code = (JTRC_HUFFBITS);
      (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (2));
    } while (0);
    do {
      int *_mp = (cinfo)->err->msg_parm.i;
      _mp[0] = (bits[9]);
      _mp[1] = (bits[10]);
      _mp[2] = (bits[11]);
      _mp[3] = (bits[12]);
      _mp[4] = (bits[13]);
      _mp[5] = (bits[14]);
      _mp[6] = (bits[15]);
      _mp[7] = (bits[16]);
      (cinfo)->err->msg_code = (JTRC_HUFFBITS);
      (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (2));
    } while (0);
    if (count > 256 || ((JLONG)count) > length) {
      ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
    for (i = 0; i < count; i++) {
      do {
        if (bytes_in_buffer == 0) {
          if (!(*datasrc->fill_input_buffer)(cinfo)) {
            return 0;
          }
          (next_input_byte = datasrc->next_input_byte,
           bytes_in_buffer = datasrc->bytes_in_buffer);
        };
        bytes_in_buffer--;
        huffval[i] = static_cast<int>(*next_input_byte++);
      } while (0);
    }
    memset(&huffval[count], 0, (256 - count) * sizeof(UINT8));
    length -= count;
    if (index & 0x10) {
      index -= 0x10;
      if (index < 0 || index >= 4) {
        ((cinfo)->err->msg_code = (JERR_DHT_INDEX),
         (cinfo)->err->msg_parm.i[0] = (index),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
      htblptr = &cinfo->ac_huff_tbl_ptrs[index];
    }
    else {
      if (index < 0 || index >= 4) {
        ((cinfo)->err->msg_code = (JERR_DHT_INDEX),
         (cinfo)->err->msg_parm.i[0] = (index),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
      htblptr = &cinfo->dc_huff_tbl_ptrs[index];
    }
    if (*htblptr == nullptr) {
      *htblptr = allocate_huffman_table((j_common_ptr)cinfo);
    }
    memcpy((*htblptr)->bits, bits, sizeof((*htblptr)->bits));
    memcpy((*htblptr)->huffval, huffval, sizeof((*htblptr)->huffval));
  }
  if (length != 0) {
    ((cinfo)->err->msg_code = (JERR_BAD_LENGTH),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static boolean get_dqt(j_decompress_ptr cinfo) {
  JLONG length;
  int n, i, prec;
  unsigned int tmp;
  JQUANT_TBL *quant_ptr;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  length -= 2;
  while (length > 0) {
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      n = static_cast<int>(*next_input_byte++);
    } while (0);
    prec = n >> 4;
    n &= 0x0F;
    ((cinfo)->err->msg_code = (JTRC_DQT), (cinfo)->err->msg_parm.i[0] = (n),
     (cinfo)->err->msg_parm.i[1] = (prec),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
    if (n >= 4) {
      ((cinfo)->err->msg_code = (JERR_DQT_INDEX),
       (cinfo)->err->msg_parm.i[0] = (n),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
    if (cinfo->quant_tbl_ptrs[n] == nullptr) {
      cinfo->quant_tbl_ptrs[n] =
          nndetailImageJpeg_jpeg_alloc_quant_table((j_common_ptr)cinfo);
    }
    quant_ptr = cinfo->quant_tbl_ptrs[n];
    for (i = 0; i < 64; i++) {
      if (prec) {
        do {
          if (bytes_in_buffer == 0) {
            if (!(*datasrc->fill_input_buffer)(cinfo)) {
              return 0;
            }
            (next_input_byte = datasrc->next_input_byte,
             bytes_in_buffer = datasrc->bytes_in_buffer);
          };
          bytes_in_buffer--;
          tmp = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
          if (bytes_in_buffer == 0) {
            if (!(*datasrc->fill_input_buffer)(cinfo)) {
              return 0;
            }
            (next_input_byte = datasrc->next_input_byte,
             bytes_in_buffer = datasrc->bytes_in_buffer);
          };
          bytes_in_buffer--;
          tmp += static_cast<int>(*next_input_byte++);
        } while (0);
      }
      else {
        do {
          if (bytes_in_buffer == 0) {
            if (!(*datasrc->fill_input_buffer)(cinfo)) {
              return 0;
            }
            (next_input_byte = datasrc->next_input_byte,
             bytes_in_buffer = datasrc->bytes_in_buffer);
          };
          bytes_in_buffer--;
          tmp = static_cast<int>(*next_input_byte++);
        } while (0);
      }
      quant_ptr->quantval[jpeg_natural_order[i]] = (UINT16)tmp;
    }
    if (cinfo->err->trace_level >= 2) {
      for (i = 0; i < 64; i += 8) {
        do {
          int *_mp = (cinfo)->err->msg_parm.i;
          _mp[0] = (quant_ptr->quantval[i]);
          _mp[1] = (quant_ptr->quantval[i + 1]);
          _mp[2] = (quant_ptr->quantval[i + 2]);
          _mp[3] = (quant_ptr->quantval[i + 3]);
          _mp[4] = (quant_ptr->quantval[i + 4]);
          _mp[5] = (quant_ptr->quantval[i + 5]);
          _mp[6] = (quant_ptr->quantval[i + 6]);
          _mp[7] = (quant_ptr->quantval[i + 7]);
          (cinfo)->err->msg_code = (JTRC_QUANTVALS);
          (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (2));
        } while (0);
      }
    }
    length -= 64 + 1;
    if (prec) {
      length -= 64;
    }
  }
  if (length != 0) {
    ((cinfo)->err->msg_code = (JERR_BAD_LENGTH),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static boolean get_dri(j_decompress_ptr cinfo) {
  JLONG length;
  unsigned int tmp;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  if (length != 4) {
    ((cinfo)->err->msg_code = (JERR_BAD_LENGTH),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    tmp = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    tmp += static_cast<int>(*next_input_byte++);
  } while (0);
  ((cinfo)->err->msg_code = (JTRC_DRI), (cinfo)->err->msg_parm.i[0] = (tmp),
   (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
  cinfo->restart_interval = tmp;
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static void examine_app0(j_decompress_ptr cinfo, JOCTET *data,
                         unsigned int datalen, JLONG remaining) {
  JLONG totallen = (JLONG)datalen + remaining;
  if (datalen >= 14 && static_cast<int>(data[0]) == 0x4A &&
      static_cast<int>(data[1]) == 0x46 && static_cast<int>(data[2]) == 0x49 &&
      static_cast<int>(data[3]) == 0x46 && static_cast<int>(data[4]) == 0) {
    cinfo->saw_JFIF_marker = 1;
    cinfo->JFIF_major_version = static_cast<int>(data[5]);
    cinfo->JFIF_minor_version = static_cast<int>(data[6]);
    cinfo->density_unit = static_cast<int>(data[7]);
    cinfo->X_density =
        (static_cast<int>(data[8]) << 8) + static_cast<int>(data[9]);
    cinfo->Y_density =
        (static_cast<int>(data[10]) << 8) + static_cast<int>(data[11]);
    if (cinfo->JFIF_major_version != 1) {
      ((cinfo)->err->msg_code = (JWRN_JFIF_MAJOR),
       (cinfo)->err->msg_parm.i[0] = (cinfo->JFIF_major_version),
       (cinfo)->err->msg_parm.i[1] = (cinfo->JFIF_minor_version),
       (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), -1));
    }
    do {
      int *_mp = (cinfo)->err->msg_parm.i;
      _mp[0] = (cinfo->JFIF_major_version);
      _mp[1] = (cinfo->JFIF_minor_version);
      _mp[2] = (cinfo->X_density);
      _mp[3] = (cinfo->Y_density);
      _mp[4] = (cinfo->density_unit);
      (cinfo)->err->msg_code = (JTRC_JFIF);
      (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1));
    } while (0);
    if (static_cast<int>(data[12]) | static_cast<int>(data[13])) {
      ((cinfo)->err->msg_code = (JTRC_JFIF_THUMBNAIL),
       (cinfo)->err->msg_parm.i[0] = (static_cast<int>(data[12])),
       (cinfo)->err->msg_parm.i[1] = (static_cast<int>(data[13])),
       (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
    }
    totallen -= 14;
    if (totallen != ((JLONG) static_cast<int>(data[12]) *
                     (JLONG) static_cast<int>(data[13]) * (JLONG)3)) {
      ((cinfo)->err->msg_code = (JTRC_JFIF_BADTHUMBNAILSIZE),
       (cinfo)->err->msg_parm.i[0] = ((int)totallen),
       (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
    }
  }
  else if (datalen >= 6 && static_cast<int>(data[0]) == 0x4A &&
           static_cast<int>(data[1]) == 0x46 &&
           static_cast<int>(data[2]) == 0x58 &&
           static_cast<int>(data[3]) == 0x58 &&
           static_cast<int>(data[4]) == 0) {
    switch (static_cast<int>(data[5])) {
      case 0x10:
        ((cinfo)->err->msg_code = (JTRC_THUMB_JPEG),
         (cinfo)->err->msg_parm.i[0] = ((int)totallen),
         (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
        break;
      case 0x11:
        ((cinfo)->err->msg_code = (JTRC_THUMB_PALETTE),
         (cinfo)->err->msg_parm.i[0] = ((int)totallen),
         (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
        break;
      case 0x13:
        ((cinfo)->err->msg_code = (JTRC_THUMB_RGB),
         (cinfo)->err->msg_parm.i[0] = ((int)totallen),
         (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
        break;
      default:
        ((cinfo)->err->msg_code = (JTRC_JFIF_EXTENSION),
         (cinfo)->err->msg_parm.i[0] = (static_cast<int>(data[5])),
         (cinfo)->err->msg_parm.i[1] = ((int)totallen),
         (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
        break;
    }
  }
  else {
    ((cinfo)->err->msg_code = (JTRC_APP0),
     (cinfo)->err->msg_parm.i[0] = ((int)totallen),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
  }
}
static void examine_app14(j_decompress_ptr cinfo, JOCTET *data,
                          unsigned int datalen, JLONG remaining) {
  unsigned int version, flags0, flags1, transform;
  if (datalen >= 12 && static_cast<int>(data[0]) == 0x41 &&
      static_cast<int>(data[1]) == 0x64 && static_cast<int>(data[2]) == 0x6F &&
      static_cast<int>(data[3]) == 0x62 && static_cast<int>(data[4]) == 0x65) {
    version = (static_cast<int>(data[5]) << 8) + static_cast<int>(data[6]);
    flags0 = (static_cast<int>(data[7]) << 8) + static_cast<int>(data[8]);
    flags1 = (static_cast<int>(data[9]) << 8) + static_cast<int>(data[10]);
    transform = static_cast<int>(data[11]);
    do {
      int *_mp = (cinfo)->err->msg_parm.i;
      _mp[0] = (version);
      _mp[1] = (flags0);
      _mp[2] = (flags1);
      _mp[3] = (transform);
      (cinfo)->err->msg_code = (JTRC_ADOBE);
      (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1));
    } while (0);
    cinfo->saw_Adobe_marker = 1;
    cinfo->Adobe_transform = (UINT8)transform;
  }
  else {
    ((cinfo)->err->msg_code = (JTRC_APP14),
     (cinfo)->err->msg_parm.i[0] = ((int)(datalen + remaining)),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
  }
}
static boolean get_interesting_appn(j_decompress_ptr cinfo) {
  JLONG length;
  JOCTET b[14] = {};
  unsigned int i, numtoread;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  length -= 2;
  if (length >= 14) {
    numtoread = 14;
  }
  else if (length > 0) {
    numtoread = (unsigned int)length;
  }
  else {
    numtoread = 0;
  }
  for (i = 0; i < numtoread; i++) {
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      b[i] = static_cast<int>(*next_input_byte++);
    } while (0);
  }
  length -= numtoread;
  switch (cinfo->unread_marker) {
    case M_APP0:
      examine_app0(cinfo, (JOCTET *)b, numtoread, length);
      break;
    case M_APP14:
      examine_app14(cinfo, (JOCTET *)b, numtoread, length);
      break;
    default:
      ((cinfo)->err->msg_code = (JERR_UNKNOWN_MARKER),
       (cinfo)->err->msg_parm.i[0] = (cinfo->unread_marker),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      break;
  }
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  if (length > 0) {
    (*cinfo->src->skip_input_data)(cinfo, (long)length);
  }
  return 1;
}
static boolean save_marker(j_decompress_ptr cinfo) {
  my_marker_ptr marker = (my_marker_ptr)cinfo->marker;
  jpeg_saved_marker_ptr cur_marker = marker->cur_marker;
  unsigned int bytes_read, data_length;
  JOCTET *data;
  JLONG length = 0;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  if (cur_marker == nullptr) {
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      length += static_cast<int>(*next_input_byte++);
    } while (0);
    length -= 2;
    if (length >= 0) {
      unsigned int limit;
      if (cinfo->unread_marker == (int)M_COM) {
        limit = marker->length_limit_COM;
      }
      else {
        limit = marker->length_limit_APPn[cinfo->unread_marker - (int)M_APP0];
      }
      if ((unsigned int)length < limit) {
        limit = (unsigned int)length;
      }
      cur_marker = (jpeg_saved_marker_ptr)(*cinfo->mem->alloc_large)(
          (j_common_ptr)cinfo, 1, sizeof(SavedMarker) + limit);
      cur_marker->next = nullptr;
      cur_marker->marker = (UINT8)cinfo->unread_marker;
      cur_marker->original_length = (unsigned int)length;
      cur_marker->data_length = limit;
      data = cur_marker->data = (JOCTET *)(cur_marker + 1);
      marker->cur_marker = cur_marker;
      marker->bytes_read = 0;
      bytes_read = 0;
      data_length = limit;
    }
    else {
      bytes_read = data_length = 0;
      data = nullptr;
    }
  }
  else {
    bytes_read = marker->bytes_read;
    data_length = cur_marker->data_length;
    data = cur_marker->data + bytes_read;
  }
  while (bytes_read < data_length) {
    (datasrc->next_input_byte = next_input_byte,
     datasrc->bytes_in_buffer = bytes_in_buffer);
    marker->bytes_read = bytes_read;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    while (bytes_read < data_length && bytes_in_buffer > 0) {
      *data++ = *next_input_byte++;
      bytes_in_buffer--;
      bytes_read++;
    }
  }
  if (cur_marker != nullptr) {
    if (cinfo->marker_list == nullptr) {
      cinfo->marker_list = cur_marker;
    }
    else {
      jpeg_saved_marker_ptr prev = cinfo->marker_list;
      while (prev->next != nullptr) {
        prev = prev->next;
      }
      prev->next = cur_marker;
    }
    data = cur_marker->data;
    length = cur_marker->original_length - data_length;
  }
  marker->cur_marker = nullptr;
  switch (cinfo->unread_marker) {
    case M_APP0:
      examine_app0(cinfo, data, data_length, length);
      break;
    case M_APP14:
      examine_app14(cinfo, data, data_length, length);
      break;
    default:
      ((cinfo)->err->msg_code = (JTRC_MISC_MARKER),
       (cinfo)->err->msg_parm.i[0] = (cinfo->unread_marker),
       (cinfo)->err->msg_parm.i[1] = ((int)(data_length + length)),
       (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
      break;
  }
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  if (length > 0) {
    (*cinfo->src->skip_input_data)(cinfo, (long)length);
  }
  return 1;
}
static boolean skip_variable(j_decompress_ptr cinfo) {
  JLONG length;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length = ((unsigned int)static_cast<int>(*next_input_byte++)) << 8;
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    length += static_cast<int>(*next_input_byte++);
  } while (0);
  length -= 2;
  ((cinfo)->err->msg_code = (JTRC_MISC_MARKER),
   (cinfo)->err->msg_parm.i[0] = (cinfo->unread_marker),
   (cinfo)->err->msg_parm.i[1] = ((int)length),
   (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  if (length > 0) {
    (*cinfo->src->skip_input_data)(cinfo, (long)length);
  }
  return 1;
}
static boolean next_marker(j_decompress_ptr cinfo) {
  int c;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  for (;;) {
    do {
      if (bytes_in_buffer == 0) {
        if (!(*datasrc->fill_input_buffer)(cinfo)) {
          return 0;
        }
        (next_input_byte = datasrc->next_input_byte,
         bytes_in_buffer = datasrc->bytes_in_buffer);
      };
      bytes_in_buffer--;
      c = static_cast<int>(*next_input_byte++);
    } while (0);
    while (c != 0xFF) {
      cinfo->marker->discarded_bytes++;
      (datasrc->next_input_byte = next_input_byte,
       datasrc->bytes_in_buffer = bytes_in_buffer);
      do {
        if (bytes_in_buffer == 0) {
          if (!(*datasrc->fill_input_buffer)(cinfo)) {
            return 0;
          }
          (next_input_byte = datasrc->next_input_byte,
           bytes_in_buffer = datasrc->bytes_in_buffer);
        };
        bytes_in_buffer--;
        c = static_cast<int>(*next_input_byte++);
      } while (0);
    }
    do {
      do {
        if (bytes_in_buffer == 0) {
          if (!(*datasrc->fill_input_buffer)(cinfo)) {
            return 0;
          }
          (next_input_byte = datasrc->next_input_byte,
           bytes_in_buffer = datasrc->bytes_in_buffer);
        };
        bytes_in_buffer--;
        c = static_cast<int>(*next_input_byte++);
      } while (0);
    } while (c == 0xFF);
    if (c != 0) {
      break;
    }
    cinfo->marker->discarded_bytes += 2;
    (datasrc->next_input_byte = next_input_byte,
     datasrc->bytes_in_buffer = bytes_in_buffer);
  }
  if (cinfo->marker->discarded_bytes != 0) {
    ((cinfo)->err->msg_code = (JWRN_EXTRANEOUS_DATA),
     (cinfo)->err->msg_parm.i[0] = (cinfo->marker->discarded_bytes),
     (cinfo)->err->msg_parm.i[1] = (c),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), -1));
    cinfo->marker->discarded_bytes = 0;
  }
  cinfo->unread_marker = c;
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static boolean first_marker(j_decompress_ptr cinfo) {
  int c, c2;
  Source *datasrc = (cinfo)->src;
  const JOCTET *next_input_byte = datasrc->next_input_byte;
  size_t bytes_in_buffer = datasrc->bytes_in_buffer;
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    c = static_cast<int>(*next_input_byte++);
  } while (0);
  do {
    if (bytes_in_buffer == 0) {
      if (!(*datasrc->fill_input_buffer)(cinfo)) {
        return 0;
      }
      (next_input_byte = datasrc->next_input_byte,
       bytes_in_buffer = datasrc->bytes_in_buffer);
    };
    bytes_in_buffer--;
    c2 = static_cast<int>(*next_input_byte++);
  } while (0);
  if (c != 0xFF || c2 != (int)M_SOI) {
    ((cinfo)->err->msg_code = (JERR_NO_SOI), (cinfo)->err->msg_parm.i[0] = (c),
     (cinfo)->err->msg_parm.i[1] = (c2),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  cinfo->unread_marker = c2;
  (datasrc->next_input_byte = next_input_byte,
   datasrc->bytes_in_buffer = bytes_in_buffer);
  return 1;
}
static int read_markers(j_decompress_ptr cinfo) {
  for (;;) {
    if (cinfo->unread_marker == 0) {
      if (!cinfo->marker->saw_SOI) {
        if (!first_marker(cinfo)) {
          return 0;
        }
      }
      else {
        if (!next_marker(cinfo)) {
          return 0;
        }
      }
    }
    switch (cinfo->unread_marker) {
      case M_SOI:
        if (!get_soi(cinfo)) {
          return 0;
        }
        break;
      case M_SOF0:
      case M_SOF1:
        if (!get_sof(cinfo, 0, 0)) {
          return 0;
        }
        break;
      case M_SOF2:
        if (!get_sof(cinfo, 1, 0)) {
          return 0;
        }
        break;
      case M_SOF9:
        if (!get_sof(cinfo, 0, 1)) {
          return 0;
        }
        break;
      case M_SOF10:
        if (!get_sof(cinfo, 1, 1)) {
          return 0;
        }
        break;
      case M_SOF3:
      case M_SOF5:
      case M_SOF6:
      case M_SOF7:
      case M_JPG:
      case M_SOF11:
      case M_SOF13:
      case M_SOF14:
      case M_SOF15:
        ((cinfo)->err->msg_code = (JERR_SOF_UNSUPPORTED),
         (cinfo)->err->msg_parm.i[0] = (cinfo->unread_marker),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
        break;
      case M_SOS:
        if (!get_sos(cinfo)) {
          return 0;
        }
        cinfo->unread_marker = 0;
        return 1;
      case M_EOI:
        ((cinfo)->err->msg_code = (JTRC_EOI),
         (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
        cinfo->unread_marker = 0;
        return 2;
      case M_DAC:
        if (!skip_variable(cinfo)) {
          return 0;
        }
        break;
      case M_DHT:
        if (!get_dht(cinfo)) {
          return 0;
        }
        break;
      case M_DQT:
        if (!get_dqt(cinfo)) {
          return 0;
        }
        break;
      case M_DRI:
        if (!get_dri(cinfo)) {
          return 0;
        }
        break;
      case M_APP0:
      case M_APP1:
      case M_APP2:
      case M_APP3:
      case M_APP4:
      case M_APP5:
      case M_APP6:
      case M_APP7:
      case M_APP8:
      case M_APP9:
      case M_APP10:
      case M_APP11:
      case M_APP12:
      case M_APP13:
      case M_APP14:
      case M_APP15:
        if (!(*((my_marker_ptr)cinfo->marker)
                   ->process_APPn[cinfo->unread_marker - (int)M_APP0])(cinfo)) {
          return 0;
        }
        break;
      case M_COM:
        if (!(*((my_marker_ptr)cinfo->marker)->process_COM)(cinfo)) {
          return 0;
        }
        break;
      case M_RST0:
      case M_RST1:
      case M_RST2:
      case M_RST3:
      case M_RST4:
      case M_RST5:
      case M_RST6:
      case M_RST7:
      case M_TEM:
        ((cinfo)->err->msg_code = (JTRC_PARMLESS_MARKER),
         (cinfo)->err->msg_parm.i[0] = (cinfo->unread_marker),
         (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (1)));
        break;
      case M_DNL:
        if (!skip_variable(cinfo)) {
          return 0;
        }
        break;
      default:
        ((cinfo)->err->msg_code = (JERR_UNKNOWN_MARKER),
         (cinfo)->err->msg_parm.i[0] = (cinfo->unread_marker),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
        break;
    }
    cinfo->unread_marker = 0;
  }
}
static boolean read_restart_marker(j_decompress_ptr cinfo) {
  if (cinfo->unread_marker == 0) {
    if (!next_marker(cinfo)) {
      return 0;
    }
  }
  if (cinfo->unread_marker == ((int)M_RST0 + cinfo->marker->next_restart_num)) {
    ((cinfo)->err->msg_code = (JTRC_RST),
     (cinfo)->err->msg_parm.i[0] = (cinfo->marker->next_restart_num),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (3)));
    cinfo->unread_marker = 0;
  }
  else {
    if (!(*cinfo->src->resync_to_restart)(cinfo,
                                          cinfo->marker->next_restart_num)) {
      return 0;
    }
  }
  cinfo->marker->next_restart_num = (cinfo->marker->next_restart_num + 1) & 7;
  return 1;
}
extern "C" boolean
nndetailImageJpeg_jpeg_resync_to_restart(j_decompress_ptr cinfo, int desired) {
  int marker = cinfo->unread_marker;
  int action = 1;
  ((cinfo)->err->msg_code = (JWRN_MUST_RESYNC),
   (cinfo)->err->msg_parm.i[0] = (marker),
   (cinfo)->err->msg_parm.i[1] = (desired),
   (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), -1));
  for (;;) {
    if (marker < (int)M_SOF0) {
      action = 2;
    }
    else if (marker < (int)M_RST0 || marker > (int)M_RST7) {
      action = 3;
    }
    else {
      if (marker == ((int)M_RST0 + ((desired + 1) & 7)) ||
          marker == ((int)M_RST0 + ((desired + 2) & 7))) {
        action = 3;
      }
      else if (marker == ((int)M_RST0 + ((desired - 1) & 7)) ||
               marker == ((int)M_RST0 + ((desired - 2) & 7))) {
        action = 2;
      }
      else {
        action = 1;
      }
    }
    ((cinfo)->err->msg_code = (JTRC_RECOVERY_ACTION),
     (cinfo)->err->msg_parm.i[0] = (marker),
     (cinfo)->err->msg_parm.i[1] = (action),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (4)));
    switch (action) {
      case 1:
        cinfo->unread_marker = 0;
        return 1;
      case 2:
        if (!next_marker(cinfo)) {
          return 0;
        }
        marker = cinfo->unread_marker;
        break;
      case 3:
        return 1;
    }
  }
}
static void reset_marker_reader(j_decompress_ptr cinfo) {
  my_marker_ptr marker = (my_marker_ptr)cinfo->marker;
  cinfo->comp_info = nullptr;
  cinfo->input_scan_number = 0;
  cinfo->unread_marker = 0;
  marker->pub.saw_SOI = 0;
  marker->pub.saw_SOF = 0;
  marker->pub.discarded_bytes = 0;
  marker->cur_marker = nullptr;
}
extern "C" void nndetailImageJpeg_jinit_marker_reader(j_decompress_ptr cinfo) {
  my_marker_ptr marker;
  int i;
  marker = (my_marker_ptr)(*cinfo->mem->alloc_small)((j_common_ptr)cinfo, 0,
                                                     sizeof(my_marker_reader));
  cinfo->marker = (Reader *)marker;
  marker->pub.reset_marker_reader = reset_marker_reader;
  marker->pub.read_markers = read_markers;
  marker->pub.read_restart_marker = read_restart_marker;
  marker->process_COM = skip_variable;
  marker->length_limit_COM = 0;
  for (i = 0; i < 16; i++) {
    marker->process_APPn[i] = skip_variable;
    marker->length_limit_APPn[i] = 0;
  }
  marker->process_APPn[0] = get_interesting_appn;
  marker->process_APPn[14] = get_interesting_appn;
  reset_marker_reader(cinfo);
}
extern "C" void nndetailImageJpeg_jpeg_save_markers(j_decompress_ptr cinfo,
                                                    int marker_code,
                                                    unsigned int length_limit) {
  my_marker_ptr marker = (my_marker_ptr)cinfo->marker;
  long maxlength;
  jpeg_marker_parser_method processor;
  maxlength = cinfo->mem->max_alloc_chunk - sizeof(SavedMarker);
  if (((long)length_limit) > maxlength) {
    length_limit = (unsigned int)maxlength;
  }
  if (length_limit) {
    processor = save_marker;
    if (marker_code == (int)M_APP0 && length_limit < 14) {
      length_limit = 14;
    }
    else if (marker_code == (int)M_APP14 && length_limit < 12) {
      length_limit = 12;
    }
  }
  else {
    processor = skip_variable;
    if (marker_code == (int)M_APP0 || marker_code == (int)M_APP14) {
      processor = get_interesting_appn;
    }
  }
  if (marker_code == (int)M_COM) {
    marker->process_COM = processor;
    marker->length_limit_COM = length_limit;
  }
  else if (marker_code >= (int)M_APP0 && marker_code <= (int)M_APP15) {
    marker->process_APPn[marker_code - (int)M_APP0] = processor;
    marker->length_limit_APPn[marker_code - (int)M_APP0] = length_limit;
  }
  else {
    ((cinfo)->err->msg_code = (JERR_UNKNOWN_MARKER),
     (cinfo)->err->msg_parm.i[0] = (marker_code),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
}
extern "C" void
nndetailImageJpeg_jpeg_set_marker_processor(j_decompress_ptr cinfo,
                                            int marker_code,
                                            jpeg_marker_parser_method routine) {
  my_marker_ptr marker = (my_marker_ptr)cinfo->marker;
  if (marker_code == (int)M_COM) {
    marker->process_COM = routine;
  }
  else if (marker_code >= (int)M_APP0 && marker_code <= (int)M_APP15) {
    marker->process_APPn[marker_code - (int)M_APP0] = routine;
  }
  else {
    ((cinfo)->err->msg_code = (JERR_UNKNOWN_MARKER),
     (cinfo)->err->msg_parm.i[0] = (marker_code),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
}

}
