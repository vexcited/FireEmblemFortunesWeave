#pragma once

#include <stdint.h>

// The low memory Tremor decoder linked into the movie module, declared with
// the layouts of its ivorbiscodec.h and ogg.h.
extern "C" {

struct ogg_buffer {
  unsigned char* data;
  long size;
  int refcount;
  union {
    void* owner;
    ogg_buffer* next;
  } ptr;
};

struct ogg_reference {
  ogg_buffer* buffer;
  long begin;
  long length;
  ogg_reference* next;
};

struct oggpack_buffer {
  int headbit;
  unsigned char* headptr;
  long headend;
  ogg_reference* head;
  ogg_reference* tail;
  long count;
};

struct ogg_packet {
  ogg_reference* packet;
  long bytes;
  long b_o_s;
  long e_o_s;
  int64_t granulepos;
  int64_t packetno;
};

struct vorbis_info {
  int version;
  int channels;
  long rate;
  long bitrate_upper;
  long bitrate_nominal;
  long bitrate_lower;
  long bitrate_window;
  void* codec_setup;
};

struct vorbis_dsp_state {
  vorbis_info* vi;
  oggpack_buffer opb;
  int32_t** work;
  int32_t** mdctright;
  int out_begin;
  int out_end;
  long lW;
  long W;
  int64_t granulepos;
  int64_t sequence;
  int64_t sample_count;
};

void oggpack_readinit(oggpack_buffer* b, ogg_reference* r);
void vorbis_info_init(vorbis_info* vi);
void vorbis_info_clear(vorbis_info* vi);
int _vorbis_unpack_info(vorbis_info* vi, oggpack_buffer* opb);
int _vorbis_unpack_books(vorbis_info* vi, oggpack_buffer* opb);
int vorbis_dsp_init(vorbis_dsp_state* v, vorbis_info* vi);
void vorbis_dsp_clear(vorbis_dsp_state* v);
int vorbis_dsp_restart(vorbis_dsp_state* v);
int vorbis_dsp_synthesis(vorbis_dsp_state* vd, ogg_packet* op, int decodep);
int vorbis_dsp_pcmout(vorbis_dsp_state* v, int16_t* pcm, int samples);

}
