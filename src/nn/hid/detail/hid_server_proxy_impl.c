#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_134260(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1ddd40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1de240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1de240_alt1(__int64, __int64**, unsigned int,
                               _QWORD*) __asm__("SdkRoutine_1de240");
__int64 SdkRoutine_4bfe90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6ef8d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f0f90(_QWORD, _QWORD);
__int64 SdkRoutine_6f1040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_6f1350(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f1e60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f23f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f3840(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_6f3c10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_6f4fd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f5360(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f58e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f6300(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f6750(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f69a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f6ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f6c30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6f6da0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6faad0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6faca0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6faf90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fb400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fbbd0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fc1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fc680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fc7f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fccb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_6fce90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fd260(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6fd430(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 cmif_client_message_6f7760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 cmif_client_message_6f7870(_QWORD, _QWORD, _QWORD);
__int64 cmif_client_message_6f7970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 cmif_client_message_6f7a80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 cmif_client_message_6f7bf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_sf_cmif_client_6f1480(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD);
void SdkRoutine_6fc350();
__int64 hid_server_proxy_6eea80(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6eef70(__int64 a1, __int64* a2);
__int64 hid_server_proxy_6ef030(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4);
__int64 hid_server_proxy_6ef0d0(__int64 a1, __int64 a2, unsigned int a3,
                                __int64 a4, unsigned __int16 a5);
__int64 hid_server_proxy_6ef0f0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                                unsigned __int16 a5);
__int64 hid_server_proxy_6ef390(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 hid_server_proxy_6ef6a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                unsigned int a5, unsigned int a6,
                                unsigned __int8 a7);
__int64 hid_server_proxy_6ef760(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                unsigned int a5, unsigned int a6,
                                unsigned __int8 a7, unsigned int a8);
__int64 hid_server_proxy_6f4420(__int64 a1, unsigned int a2, __int64 a3,
                                float a4, float a5);
__int64 hid_server_proxy_6f4450(__int64 a1, unsigned int a2, __int64 a3,
                                float a4, float a5);
__int64 hid_server_proxy_6f44d0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 hid_server_proxy_6f45b0(__int64 a1, unsigned __int8 a2);
__int64 hid_server_proxy_6f46b0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 hid_server_proxy_6f4790(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 hid_server_proxy_6f48e0(__int64 a1, __int64 a2, __int64 a3,
                                unsigned __int8 a4);
__int64 hid_server_proxy_6f4930(__int64 a1, __int64 a2, __int64 a3,
                                unsigned __int8 a4);
__int64 hid_server_proxy_6f49a0(__int64 a1, __int64 a2, unsigned __int8 a3,
                                __int64 a4);
__int64 hid_server_proxy_6f49b0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 hid_server_proxy_6f49d0(__int64 a1, __int64 a2, unsigned __int8 a3,
                                __int64 a4);
__int64 hid_server_proxy_6f4b40(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4b60(__int64 a1, __int64 a2);
__int64 hid_server_proxy_6f4b80(__int64 a1, char a2, __int64 a3);
__int64 hid_server_proxy_6f4bb0(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4be0(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4c00(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4c20(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4c50(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4c70(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f4c90(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f8980(__int64 a1, unsigned __int8 a2, __int64 a3);
__int64 hid_server_proxy_6f89a0(__int64 a1, unsigned __int8 a2, __int64 a3);
__int64 hid_server_proxy_6f89d0(__int64 a1, unsigned __int8 a2, __int64 a3);
__int64 hid_server_proxy_6f8ac0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 hid_server_proxy_6f8b40(__int64 a1, __int64 a2, _QWORD* a3,
                                unsigned int a4);
__int64 hid_server_proxy_6f8bb0(__int64 a1, __int64 a2, _QWORD* a3,
                                unsigned int a4);
__int64 hid_server_proxy_6f8c40(__int64 a1, __int64 a2, char a3,
                                unsigned __int8 a4);
__int64 hid_server_proxy_6f8d80(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6f8df0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6f8e10(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6f8e40(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6f8f10(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6f9090(__int64 a1, unsigned __int16 a2, __int64 a3);
__int64 hid_server_proxy_6f9280(__int64 a1, _QWORD* a2);
__int64 hid_server_proxy_6f9380(__int64 a1, __int64 a2, _QWORD* a3);
__int64 hid_server_proxy_6f9400(__int64 a1, __int64** a2);
__int64 hid_server_proxy_6f98e0(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f9950(__int64 a1, __int64 a2, __int64 a3,
                                unsigned int a4);
__int64 hid_server_proxy_6f99b0(__int64 a1, __int64 a2, __int64 a3);
__int64 hid_server_proxy_6f9cc0(__int64 a1, __int64 a2, float a3);
__int64 hid_server_proxy_6f9d10(__int64 a1, _QWORD* a2, __int64 a3);
__int64 hid_server_proxy_6f9d30(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 hid_server_proxy_6f9d60(__int64 a1, unsigned __int8 a2, __int64 a3);

__int64 hid_server_proxy_6eea80(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_6ef8d0(a1 + 8, a2, *a3, 4LL * a3[1], 59);
}

__int64 hid_server_proxy_6eef70(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 32);
  v10 = 0;
  v8 = v2;
  v9 = &v10;
  SdkRoutine_6f0f90(&v8, 0);
  if (v9 == nullptr) {
    v5 = 5642;
    v6 = v10;
    if (v10 == 0) {
      return v5;
    }
    goto LABEL_3;
  }
  v8 = *a2;
  v5 = SdkRoutine_1de240(a1 + 8, &v8, 203, &v10);
  v6 = v10;
  if (v10 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return v5;
}

__int64 hid_server_proxy_6ef030(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  return SdkRoutine_6f1040(a1 + 8, a2, *a3, 4LL * a3[1], *a4, 16LL * a4[1],
                           206);
}

__int64 hid_server_proxy_6ef0d0(__int64 a1, __int64 a2, unsigned int a3,
                                __int64 a4, unsigned __int16 a5)
{
  return SdkRoutine_6f1350(a1 + 8, a2, a3, a4, a5, 213);
}

__int64 hid_server_proxy_6ef0f0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                                unsigned __int16 a5)
{
  return nn_sf_cmif_client_6f1480(a1 + 8, a2, *a3, 4LL * a3[1], *a4,
                                  16LL * a4[1], a5, 214);
}

__int64 hid_server_proxy_6ef390(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  return SdkRoutine_6f23f0(a1 + 8, a2, a3, *a4, a4[1], 514);
}

__int64 hid_server_proxy_6ef6a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                unsigned int a5, unsigned int a6,
                                unsigned __int8 a7)
{
  return SdkRoutine_6f3840(a1 + 8, a2, a3, a4, a5, a6, a7, 3130);
}

__int64 hid_server_proxy_6ef760(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                unsigned int a5, unsigned int a6,
                                unsigned __int8 a7, unsigned int a8)
{
  return SdkRoutine_6f3c10(a1 + 8, a2, a3, a4, a5, a6, a7, a8, 3139);
}

__int64 hid_server_proxy_6f4420(__int64 a1, unsigned int a2, __int64 a3,
                                float a4, float a5)
{
  return SdkRoutine_6f4fd0(a1 + 8, a2, a3, LODWORD(a4), LODWORD(a5), 133);
}

__int64 hid_server_proxy_6f4450(__int64 a1, unsigned int a2, __int64 a3,
                                float a4, float a5)
{
  return SdkRoutine_6f4fd0(a1 + 8, a2, a3, LODWORD(a4), LODWORD(a5), 135);
}

__int64 hid_server_proxy_6f44d0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6f5360(a1 + 8, a2, *a3, 40LL * a3[1], a4, 143);
}

__int64 hid_server_proxy_6f45b0(__int64 a1, unsigned __int8 a2)
{
  return SdkRoutine_134260(a1 + 8, a2, 170);
}

__int64 hid_server_proxy_6f46b0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6f58e0(a1 + 8, a2, *a3, 16LL * a3[1], a4, 212);
}

__int64 hid_server_proxy_6f4790(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6f1e60(a1 + 8, a2, *a3, 48LL * a3[1], a4, 226);
}

__int64 hid_server_proxy_6f48e0(__int64 a1, __int64 a2, __int64 a3,
                                unsigned __int8 a4)
{
  return SdkRoutine_6f6750(a1 + 8, a2, a3, a4, 247);
}

__int64 hid_server_proxy_6f4930(__int64 a1, __int64 a2, __int64 a3,
                                unsigned __int8 a4)
{
  return SdkRoutine_6f69a0(a1 + 8, a2, a3, a4, 251);
}

__int64 hid_server_proxy_6f49a0(__int64 a1, __int64 a2, unsigned __int8 a3,
                                __int64 a4)
{
  return SdkRoutine_6f6ae0(a1 + 8, a2, a3, a4, 261);
}

__int64 hid_server_proxy_6f49b0(__int64 a1, _QWORD* a2, __int64 a3)
{
  return SdkRoutine_6f6c30(a1 + 8, *a2, 4LL * a2[1], a3, 266);
}

__int64 hid_server_proxy_6f49d0(__int64 a1, __int64 a2, unsigned __int8 a3,
                                __int64 a4)
{
  return SdkRoutine_6f6da0(a1 + 8, a2, a3, a4, 267);
}

__int64 hid_server_proxy_6f4b40(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7760(a1 + 8, a2, a3 & 0xFFFFFFFFFFFFLL, 601);
}

__int64 hid_server_proxy_6f4b60(__int64 a1, __int64 a2)
{
  return cmif_client_message_6f7870(a1 + 8, a2 & 0xFFFFFFFFFFFFLL, 603);
}

__int64 hid_server_proxy_6f4b80(__int64 a1, char a2, __int64 a3)
{
  return cmif_client_message_6f7970(a1 + 8, a2 & 1, a3 & 0xFFFFFFFFFFFFLL, 605);
}

__int64 hid_server_proxy_6f4bb0(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7760(a1 + 8, a2, a3 & 0xFFFFFFFFFFFFLL, 607);
}

__int64 hid_server_proxy_6f4be0(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7a80(a1 + 8, a2, 496, a3 & 0xFFFFFFFFFFFFLL,
                                    610);
}

__int64 hid_server_proxy_6f4c00(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7a80(a1 + 8, a2, 272, a3 & 0xFFFFFFFFFFFFLL,
                                    611);
}

__int64 hid_server_proxy_6f4c20(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7a80(a1 + 8, a2, 272, a3 & 0xFFFFFFFFFFFFLL,
                                    612);
}

__int64 hid_server_proxy_6f4c50(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7bf0(a1 + 8, a2, 496, a3 & 0xFFFFFFFFFFFFLL,
                                    614);
}

__int64 hid_server_proxy_6f4c70(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7bf0(a1 + 8, a2, 272, a3 & 0xFFFFFFFFFFFFLL,
                                    615);
}

__int64 hid_server_proxy_6f4c90(__int64 a1, __int64 a2, __int64 a3)
{
  return cmif_client_message_6f7bf0(a1 + 8, a2, 272, a3 & 0xFFFFFFFFFFFFLL,
                                    616);
}

__int64 hid_server_proxy_6f8980(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  return SdkRoutine_6f6300(a1 + 8, a2, a3, 242);
}

__int64 hid_server_proxy_6f89a0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  return SdkRoutine_6f6300(a1 + 8, a2, a3, 244);
}

__int64 hid_server_proxy_6f89d0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  return SdkRoutine_6f6300(a1 + 8, a2, a3, 247);
}

__int64 hid_server_proxy_6f8ac0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6faad0(a1 + 8, a2, *a3, 16LL * a3[1], a4, 313);
}

__int64 hid_server_proxy_6f8b40(__int64 a1, __int64 a2, _QWORD* a3,
                                unsigned int a4)
{
  return SdkRoutine_6faca0(a1 + 8, a2, *a3, 8LL * a3[1], a4, 321);
}

__int64 hid_server_proxy_6f8bb0(__int64 a1, __int64 a2, _QWORD* a3,
                                unsigned int a4)
{
  return SdkRoutine_6faca0(a1 + 8, a2, *a3, 8LL * a3[1], a4, 327);
}

__int64 hid_server_proxy_6f8c40(__int64 a1, __int64 a2, char a3,
                                unsigned __int8 a4)
{
  return SdkRoutine_6faf90(a1 + 8, a2, a3 & 1, a4, 501);
}

__int64 hid_server_proxy_6f8d80(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_6ef8d0(a1 + 8, a2, *a3, 20LL * a3[1], 541);
}

__int64 hid_server_proxy_6f8df0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_4bfe90(a1 + 8, a2, *a3, 104LL * a3[1], 548);
}

__int64 hid_server_proxy_6f8e10(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_4bfe90(a1 + 8, a2, *a3, 104LL * a3[1], 549);
}

__int64 hid_server_proxy_6f8e40(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_4bfe90(a1 + 8, a2, *a3, 72LL * a3[1], 551);
}

__int64 hid_server_proxy_6f8f10(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_6fb400(a1 + 8, a2, *a3, 40LL * a3[1], 721);
}

__int64 hid_server_proxy_6f9090(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return SdkRoutine_6fbbd0(a1 + 8, a2, a3, 743);
}

__int64 hid_server_proxy_6f9280(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_6fc1a0(a1 + 8, *a2, 8LL * a2[1], 832);
}

__int64 hid_server_proxy_6f9380(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_6ef8d0(a1 + 8, a2, *a3, 16LL * a3[1], 1010);
}

__int64 hid_server_proxy_6f9400(__int64 a1, __int64** a2)
{
  __int64* v2;
  unsigned int v5;
  __int64 v6;
  struct {
    __int64* v8;
    __int64* v9;
  } v8_;
  __int64 v10;

  v2 = *(__int64**)(a1 + 32);
  v10 = 0;
  v8_.v8 = v2;
  v8_.v9 = &v10;
  ((void (*)(__int64**, _QWORD))SdkRoutine_6fc350)(&v8_.v8, 0);
  if (v8_.v9 == nullptr) {
    v5 = 5642;
    v6 = v10;
    if (v10 == 0) {
      return v5;
    }
    goto LABEL_3;
  }
  v8_.v8 = *a2;
  v5 = SdkRoutine_1de240_alt1(a1 + 8, &v8_.v8, 0x44Cu, &v10);
  v6 = v10;
  if (v10 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return v5;
}

__int64 hid_server_proxy_6f98e0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;

  v4 = a3;
  return SdkRoutine_6fc680(a1 + 8, a2, &v4, 8, 1297);
}

__int64 hid_server_proxy_6f9950(__int64 a1, __int64 a2, __int64 a3,
                                unsigned int a4)
{
  __int64 v5;

  v5 = a2;
  return SdkRoutine_6fccb0(a1 + 8, &v5, 8, a3, 129, a4, 1300);
}

__int64 hid_server_proxy_6f99b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;

  v4 = a2;
  return SdkRoutine_6fc7f0(a1 + 8, &v4, 8, a3, 1302);
}

__int64 hid_server_proxy_6f9cc0(__int64 a1, __int64 a2, float a3)
{
  return SdkRoutine_1ddd40(a1 + 8, LODWORD(a3), a2, 1455);
}

__int64 hid_server_proxy_6f9d10(__int64 a1, _QWORD* a2, __int64 a3)
{
  return SdkRoutine_6fd260(a1 + 8, *a2, 8LL * a2[1], a3, 1459);
}

__int64 hid_server_proxy_6f9d30(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6fd430(a1 + 8, a2, *a3, 8LL * a3[1], a4, 1460);
}

__int64 hid_server_proxy_6f9d60(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  return SdkRoutine_6fce90(a1 + 8, a2, a3, 1470);
}

#pragma GCC visibility pop
