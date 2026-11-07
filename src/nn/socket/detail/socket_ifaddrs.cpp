#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket::detail {

namespace {

// The routing socket messages of the FreeBSD stack the service runs.
constexpr int CtlNet = 4;
constexpr int PfRoute = 17;
constexpr int NetRtIfMAList = 4;
constexpr int NetRtIfListL = 5;
constexpr uint8_t RtmVersion = 5;
constexpr uint8_t RtmNewAddr = 0xc;
constexpr uint8_t RtmIfInfo = 0xe;
constexpr uint8_t RtmNewMAddr = 0xf;

constexpr int RtaGateway = 0x2;
constexpr int RtaNetmask = 0x4;
constexpr int RtaIfp = 0x10;
constexpr int RtaIfa = 0x20;
constexpr int RtaBrd = 0x80;
constexpr int RtaxGateway = 1;
constexpr int RtaxNetmask = 2;
constexpr int RtaxIfp = 4;
constexpr int RtaxIfa = 5;
constexpr int RtaxBrd = 7;
constexpr int RtaxMax = 8;

constexpr int ENoMem = 12;
constexpr int SysctlTryCountMax = 5;
constexpr size_t AlignBytes = sizeof(long) - 1;

struct RtMsgHdr {
  uint16_t rtm_msglen;
  uint8_t rtm_version;
  uint8_t rtm_type;
};

struct IfMsgHdrL {
  uint16_t ifm_msglen;
  uint8_t ifm_version;
  uint8_t ifm_type;
  int ifm_addrs;
  int ifm_flags;
  uint16_t ifm_index;
  uint16_t _ifm_spare1;
  uint16_t ifm_len;
  uint16_t ifm_data_off;
};

struct IfaMsgHdrL {
  uint16_t ifam_msglen;
  uint8_t ifam_version;
  uint8_t ifam_type;
  int ifam_addrs;
  int ifam_flags;
  uint16_t ifam_index;
  uint16_t _ifam_spare1;
  uint16_t ifam_len;
  uint16_t ifam_data_off;
};

struct IfmaMsgHdr {
  uint16_t ifmam_msglen;
  uint8_t ifmam_version;
  uint8_t ifmam_type;
  int ifmam_addrs;
  int ifmam_flags;
  uint16_t ifmam_index;
  uint16_t _ifmam_spare1;
};

struct IfData {
  uint8_t ifi_type;
  uint8_t ifi_physical;
  uint8_t ifi_addrlen;
  uint8_t ifi_hdrlen;
  uint8_t ifi_link_state;
  uint8_t ifi_spare_char1;
  uint8_t ifi_spare_char2;
  uint8_t ifi_datalen;
};

struct SockAddrHeader {
  uint8_t sa_len;
  uint8_t sa_family;
};

struct SockAddrDl {
  uint8_t sdl_len;
  uint8_t sdl_family;
  uint16_t sdl_index;
  uint8_t sdl_type;
  uint8_t sdl_nlen;
  uint8_t sdl_alen;
  uint8_t sdl_slen;
  char sdl_data[46];
};

size_t GetRoundedLength(const void* address) {
  uint8_t length = static_cast<const SockAddrHeader*>(address)->sa_len;
  return length != 0 ? (length + AlignBytes) & ~AlignBytes : AlignBytes + 1;
}

char* Align(char* p) {
  return reinterpret_cast<char*>(
    (reinterpret_cast<uintptr_t>(p) + AlignBytes) & ~AlignBytes);
}

IfData* GetIfData(IfMsgHdrL* ifm) {
  return reinterpret_cast<IfData*>(reinterpret_cast<char*>(ifm) +
    ifm->ifm_data_off);
}

IfData* GetIfData(IfaMsgHdrL* ifam) {
  return reinterpret_cast<IfData*>(reinterpret_cast<char*>(ifam) +
    ifam->ifam_data_off);
}

char* GetRouteAddresses(IfMsgHdrL* ifm) {
  return reinterpret_cast<char*>(ifm) + ifm->ifm_len;
}

char* GetRouteAddresses(IfaMsgHdrL* ifam) {
  return reinterpret_cast<char*>(ifam) + ifam->ifam_len;
}

constexpr int RtaMasks = RtaNetmask | RtaIfa | RtaBrd;
constexpr int RtaMulticastMasks = RtaGateway | RtaIfp | RtaIfa;

}

// The getifaddrs of FreeBSD over the NET_RT_IFLISTL sysctl.
int GetIfAddrs(IfAddrs** pOutAddresses) {
  int icnt = 1;
  size_t dcnt = 0;
  size_t ncnt = 0;
  int ntry = 0;
  int mib[6];
  size_t needed = 0;
  char* buf;

  mib[0] = CtlNet;
  mib[1] = PfRoute;
  mib[2] = 0;
  mib[3] = 0;
  mib[4] = NetRtIfListL;
  mib[5] = 0;
  do {
    if (Sysctl(mib, 6, nullptr, &needed, nullptr, 0) < 0) {
      return -1;
    }
    if ((buf = static_cast<char*>(malloc(needed))) == nullptr) {
      return -1;
    }
    if (Sysctl(mib, 6, buf, &needed, nullptr, 0) < 0) {
      if (static_cast<int>(GetLastError()) != ENoMem ||
        ++ntry >= SysctlTryCountMax) {
        free(buf);
        return -1;
      }
      free(buf);
      buf = nullptr;
      needed = 0;
    }
  } while (buf == nullptr);

  uint16_t idx = 0;
  RtMsgHdr* rtm;
  for (char* next = buf; next < buf + needed; next += rtm->rtm_msglen) {
    rtm = reinterpret_cast<RtMsgHdr*>(next);
    if (rtm->rtm_version != RtmVersion) {
      continue;
    }
    switch (rtm->rtm_type) {
      case RtmIfInfo: {
        IfMsgHdrL* ifm = reinterpret_cast<IfMsgHdrL*>(rtm);
        if (ifm->ifm_addrs & RtaIfp) {
          idx = ifm->ifm_index;
          ++icnt;
          IfData* ifData = GetIfData(ifm);
          dcnt += ifData->ifi_datalen;
          SockAddrDl* dl =
            reinterpret_cast<SockAddrDl*>(GetRouteAddresses(ifm));
          dcnt += GetRoundedLength(dl) + AlignBytes;
          ncnt += dl->sdl_nlen + 1;
        }
        else {
          idx = 0;
        }
        break;
      }

      case RtmNewAddr: {
        IfaMsgHdrL* ifam = reinterpret_cast<IfaMsgHdrL*>(rtm);
        if (idx != 0 && ifam->ifam_index != idx) {
          abort();
        }
        if (idx == 0 || (ifam->ifam_addrs & RtaMasks) == 0) {
          break;
        }
        char* p = GetRouteAddresses(ifam);
        ++icnt;
        IfData* ifData = GetIfData(ifam);
        dcnt += ifData->ifi_datalen + AlignBytes;

        size_t alen = 0;
        char* p0 = p;
        for (int i = 0; i < RtaxMax; ++i) {
          if ((RtaMasks & ifam->ifam_addrs & (1 << i)) == 0) {
            continue;
          }
          size_t len = GetRoundedLength(p);
          if (i == RtaxIfa) {
            alen = len;
            break;
          }
          p += len;
        }
        p = p0;
        for (int i = 0; i < RtaxMax; ++i) {
          if ((RtaMasks & ifam->ifam_addrs & (1 << i)) == 0) {
            continue;
          }
          size_t len = GetRoundedLength(p);
          if (i == RtaxNetmask &&
            reinterpret_cast<SockAddrHeader*>(p)->sa_len == 0) {
            dcnt += alen;
          }
          else {
            dcnt += len;
          }
          p += len;
        }
        break;
      }
    }
  }

  if (icnt + dcnt + ncnt == 1) {
    *pOutAddresses = nullptr;
    free(buf);
    return 0;
  }
  char* data = static_cast<char*>(malloc(sizeof(IfAddrs) * icnt + dcnt +
    ncnt));
  if (data == nullptr) {
    free(buf);
    return -1;
  }

  IfAddrs* ifa = reinterpret_cast<IfAddrs*>(data);
  data += sizeof(IfAddrs) * icnt;
  char* names = data + dcnt;

  memset(ifa, 0, sizeof(IfAddrs) * icnt);
  IfAddrs* ift = ifa;

  idx = 0;
  IfAddrs* cif = nullptr;
  for (char* next = buf; next < buf + needed; next += rtm->rtm_msglen) {
    rtm = reinterpret_cast<RtMsgHdr*>(next);
    if (rtm->rtm_version != RtmVersion) {
      continue;
    }
    switch (rtm->rtm_type) {
      case RtmIfInfo: {
        IfMsgHdrL* ifm = reinterpret_cast<IfMsgHdrL*>(rtm);
        if ((ifm->ifm_addrs & RtaIfp) == 0) {
          idx = 0;
          break;
        }

        idx = ifm->ifm_index;
        SockAddrDl* dl =
          reinterpret_cast<SockAddrDl*>(GetRouteAddresses(ifm));

        cif = ift;
        ift->ifa_name = names;
        ift->ifa_flags = static_cast<uint16_t>(ifm->ifm_flags);
        memcpy(names, dl->sdl_data, dl->sdl_nlen);
        names[dl->sdl_nlen] = 0;
        names += dl->sdl_nlen + 1;

        ift->ifa_addr = reinterpret_cast<SockAddr*>(data);
        memcpy(data, dl, dl->sdl_len);
        data += GetRoundedLength(dl);

        IfData* ifData = GetIfData(ifm);
        data = Align(data);
        ift->ifa_data = data;
        memcpy(data, ifData, ifData->ifi_datalen);
        data += ifData->ifi_datalen;

        ift = (ift->ifa_next = ift + 1);
        break;
      }

      case RtmNewAddr: {
        IfaMsgHdrL* ifam = reinterpret_cast<IfaMsgHdrL*>(rtm);
        if (idx != 0 && ifam->ifam_index != idx) {
          abort();
        }
        if (idx == 0 || (ifam->ifam_addrs & RtaMasks) == 0) {
          break;
        }
        ift->ifa_name = cif->ifa_name;
        ift->ifa_flags = cif->ifa_flags;
        ift->ifa_data = nullptr;

        char* p = GetRouteAddresses(ifam);
        size_t alen = 0;
        char* p0 = p;
        for (int i = 0; i < RtaxMax; ++i) {
          if ((RtaMasks & ifam->ifam_addrs & (1 << i)) == 0) {
            continue;
          }
          size_t len = GetRoundedLength(p);
          if (i == RtaxIfa) {
            alen = len;
            break;
          }
          p += len;
        }
        p = p0;
        for (int i = 0; i < RtaxMax; ++i) {
          if ((RtaMasks & ifam->ifam_addrs & (1 << i)) == 0) {
            continue;
          }
          size_t len = GetRoundedLength(p);
          switch (i) {
            case RtaxIfa:
              ift->ifa_addr = reinterpret_cast<SockAddr*>(data);
              memcpy(data, p, len);
              data += len;
              break;

            case RtaxNetmask:
              ift->ifa_netmask = reinterpret_cast<SockAddr*>(data);
              if (reinterpret_cast<SockAddrHeader*>(p)->sa_len == 0) {
                memset(data, 0, alen);
                data += alen;
                break;
              }
              memcpy(data, p, len);
              data += len;
              break;

            case RtaxBrd:
              ift->ifa_dstaddr = reinterpret_cast<SockAddr*>(data);
              memcpy(data, p, len);
              data += len;
              break;
          }
          p += len;
        }

        IfData* ifData = GetIfData(ifam);
        data = Align(data);
        ift->ifa_data = data;
        memcpy(data, ifData, ifData->ifi_datalen);
        data += ifData->ifi_datalen;

        ift = (ift->ifa_next = ift + 1);
        break;
      }
    }
  }

  free(buf);

  if (--ift >= ifa) {
    ift->ifa_next = nullptr;
    *pOutAddresses = ifa;
  }
  else {
    *pOutAddresses = nullptr;
    free(ifa);
  }
  return 0;
}

// The getifmaddrs of FreeBSD over the NET_RT_IFMALIST sysctl.
int GetIfMAddrs(IfMAddrs** pOutAddresses) {
  int icnt = 1;
  size_t dcnt = 0;
  int ntry = 0;
  int mib[6];
  size_t needed = 0;
  char* buf;

  mib[0] = CtlNet;
  mib[1] = PfRoute;
  mib[2] = 0;
  mib[3] = 0;
  mib[4] = NetRtIfMAList;
  mib[5] = 0;
  do {
    if (Sysctl(mib, 6, nullptr, &needed, nullptr, 0) < 0) {
      return -1;
    }
    if ((buf = static_cast<char*>(malloc(needed))) == nullptr) {
      return -1;
    }
    if (Sysctl(mib, 6, buf, &needed, nullptr, 0) < 0) {
      if (static_cast<int>(GetLastError()) != ENoMem ||
        ++ntry >= SysctlTryCountMax) {
        free(buf);
        return -1;
      }
      free(buf);
      buf = nullptr;
    }
  } while (buf == nullptr);

  RtMsgHdr* rtm;
  for (char* next = buf; next < buf + needed; next += rtm->rtm_msglen) {
    rtm = reinterpret_cast<RtMsgHdr*>(next);
    if (rtm->rtm_version != RtmVersion) {
      continue;
    }
    switch (rtm->rtm_type) {
      case RtmNewMAddr: {
        IfmaMsgHdr* ifmam = reinterpret_cast<IfmaMsgHdr*>(rtm);
        if ((ifmam->ifmam_addrs & RtaIfa) == 0) {
          break;
        }
        ++icnt;
        char* p = reinterpret_cast<char*>(ifmam + 1);
        for (int i = 0; i < RtaxMax; ++i) {
          if ((RtaMulticastMasks & ifmam->ifmam_addrs & (1 << i)) == 0) {
            continue;
          }
          size_t len = GetRoundedLength(p);
          dcnt += len;
          p += len;
        }
        break;
      }
    }
  }

  char* data = static_cast<char*>(malloc(sizeof(IfMAddrs) * icnt + dcnt));
  if (data == nullptr) {
    free(buf);
    return -1;
  }

  IfMAddrs* ifa = reinterpret_cast<IfMAddrs*>(data);
  data += sizeof(IfMAddrs) * icnt;

  memset(ifa, 0, sizeof(IfMAddrs) * icnt);
  IfMAddrs* ift = ifa;

  for (char* next = buf; next < buf + needed; next += rtm->rtm_msglen) {
    rtm = reinterpret_cast<RtMsgHdr*>(next);
    if (rtm->rtm_version != RtmVersion) {
      continue;
    }
    switch (rtm->rtm_type) {
      case RtmNewMAddr: {
        IfmaMsgHdr* ifmam = reinterpret_cast<IfmaMsgHdr*>(rtm);
        if ((ifmam->ifmam_addrs & RtaIfa) == 0) {
          break;
        }
        char* p = reinterpret_cast<char*>(ifmam + 1);
        for (int i = 0; i < RtaxMax; ++i) {
          if ((RtaMulticastMasks & ifmam->ifmam_addrs & (1 << i)) == 0) {
            continue;
          }
          size_t len = GetRoundedLength(p);
          switch (i) {
            case RtaxGateway:
              ift->ifma_lladdr = reinterpret_cast<SockAddr*>(data);
              memcpy(data, p, len);
              data += len;
              break;

            case RtaxIfp:
              ift->ifma_name = reinterpret_cast<SockAddr*>(data);
              memcpy(data, p, len);
              data += len;
              break;

            case RtaxIfa:
              ift->ifma_addr = reinterpret_cast<SockAddr*>(data);
              memcpy(data, p, len);
              data += len;
              break;

            default:
              data += len;
              break;
          }
          p += len;
        }
        ift->ifma_next = ift + 1;
        ift = ift->ifma_next;
        break;
      }
    }
  }

  free(buf);

  if (ift > ifa) {
    --ift;
    ift->ifma_next = nullptr;
    *pOutAddresses = ifa;
  }
  else {
    *pOutAddresses = nullptr;
    free(ifa);
  }
  return 0;
}

}
