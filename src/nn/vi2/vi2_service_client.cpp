#include "nn/vi2/vi2_service_client.hpp"

namespace nn::vi2::detail {

namespace {

using tipc::ReadMessage;
using tipc::SessionHandle;
using tipc::WriteMessage;

constexpr auto NoRequest = [](uint8_t*) {};
constexpr auto NoReply = [](const uint8_t*) {};

}

Result ServiceClient::Initialize() {
  m_Mutex.Lock();
  const Result result = Connect(LibraryVersion);
  m_Mutex.Unlock();
  return result;
}

void ServiceClient::Finalize() {
  m_Mutex.Lock();
  Disconnect();
  m_Mutex.Unlock();
}

Result ServiceClient::Connect(uint64_t version) {
  NN_RESULT_DO(gsv::GetUserSession()->Invoke(0x13d));
  Result result;

  {
    gsdrv::UniqueNativeHandle handle;
    result = gsv::GetUserSession()->OpenVi2Service({&handle}, version);

    if (result.IsSuccess()) {
      tipc::ClientSession* session =
        m_SessionPool.Allocate(handle.GetHandle());

      if (session != nullptr) {
        handle.Release();
        m_pSession = session;
        return {0};
      }

      result = ResultOutOfSession;
    }
  }

  gsv::GetUserSession()->Invoke(0x13f);
  return result;
}

void ServiceClient::Disconnect() {
  if (m_pSession != nullptr) {
    m_SessionPool.Free(m_pSession);
    m_pSession = nullptr;
  }

  gsv::GetUserSession()->Invoke(0x13f);
}

Result ServiceClient::GetMaxDisplayIndex(uint32_t* pOutIndex) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x13, 0x200000013, NoRequest,
      [&](const uint8_t* message) {
        const uint32_t index = ReadMessage<uint32_t>(message, 12);
        NN_ABORT_UNLESS(index < 8);
        *pOutIndex = index;
      });
  });
}

Result ServiceClient::GetDisplayEvent(gsdrv::UniqueNativeHandle* pOutHandle,
  uint32_t eventId) {
  return Call([&](const SessionHandle* session) {
    return ReceiveHandle(session, 0x10000002f, 0x2f, pOutHandle,
      [&](uint8_t* message) {
        WriteMessage<uint32_t>(message, 8, eventId);
      });
  });
}

// The source event is sent as a copied handle.
Result ServiceClient::DuplicateEvent(gsdrv::UniqueNativeHandle* pOutHandle,
  uint32_t eventId, uint32_t handle) {
  return Call([&](const SessionHandle* session) {
    return ReceiveHandle(session, 0x8000000100000030, 0x30, pOutHandle,
      [&](uint8_t* message) {
        WriteMessage<uint32_t>(message, 8, 2);
        WriteMessage<uint32_t>(message, 12, handle);
        WriteMessage<uint32_t>(message, 16, eventId);
      });
  });
}

Result ServiceClient::GetMaxLayerIndex(uint32_t* pOutIndex) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x11, 0x200000011, NoRequest,
      [&](const uint8_t* message) {
        const uint32_t index = ReadMessage<uint32_t>(message, 12);
        NN_ABORT_UNLESS(index < 0x400);
        *pOutIndex = index;
      });
  });
}

Result ServiceClient::GetLayerEvent(gsdrv::UniqueNativeHandle* pOutHandle,
  uint32_t eventId) {
  return Call([&](const SessionHandle* session) {
    return ReceiveHandle(session, 0x10000001b, 0x1b, pOutHandle,
      [&](uint8_t* message) {
        WriteMessage<uint32_t>(message, 8, eventId);
      });
  });
}

void ServiceClient::ReleaseEvent(uint32_t eventId) {
  Call([&](const SessionHandle* session) {
    NN_ABORT_UNLESS(Invoke(session, 0x10000001d, 0x10000001d,
      [&](uint8_t* message) {
        WriteMessage<uint32_t>(message, 8, eventId);
      }, NoReply).IsSuccess());
    return Result{0};
  });
}

Result ServiceClient::ReadSharedData(void* buffer, size_t size) {
  return Call([&](const SessionHandle* session) {
    NN_ABORT_UNLESS(Invoke(session, 0x1000025, 0x100000025,
      [&](uint8_t* message) {
        tipc::WriteBufferDescriptor(message, 8, buffer, size);
      }, NoReply).IsSuccess());
    return Result{0};
  });
}

Result ServiceClient::CreateNativeImage(uint32_t* pOutHandle,
  const ImageDescriptor& descriptor, uint32_t count, uint32_t memory) {
  return gsv::GetUserSession()->Invoke(0x1200000147, 0x200000147,
    [&](uint8_t* message) {
      WriteMessage<ImageDescriptor>(message, 8, descriptor);
      WriteMessage<uint32_t>(message, 72, count);
      WriteMessage<uint32_t>(message, 76, memory);
    },
    [&](const uint8_t* message) {
      *pOutHandle = ReadMessage<uint32_t>(message, 12);
    });
}

Result ServiceClient::CreateNativeImageForSystem(uint32_t* pOutHandle,
  const ImageDescriptor& descriptor, uint32_t count, uint32_t memory) {
  return gsv::GetUserSession()->Invoke(0x1200000151, 0x200000151,
    [&](uint8_t* message) {
      WriteMessage<ImageDescriptor>(message, 8, descriptor);
      WriteMessage<uint32_t>(message, 72, count);
      WriteMessage<uint32_t>(message, 76, memory);
    },
    [&](const uint8_t* message) {
      *pOutHandle = ReadMessage<uint32_t>(message, 12);
    });
}

void ServiceClient::DestroyNativeImage(uint32_t image) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x100000148,
    0x100000148,
    [&](uint8_t* message) {
      WriteMessage<uint32_t>(message, 8, image);
    }, NoReply));
}

Result ServiceClient::CreateAliasImage(uint32_t image, uint32_t count) {
  return gsv::GetUserSession()->Invoke(0x20000014b, 0x10000014b,
    [&](uint8_t* message) {
      WriteMessage<uint32_t>(message, 8, image);
      WriteMessage<uint32_t>(message, 12, count);
    }, NoReply);
}

void ServiceClient::DestroyAliasImage(uint32_t image) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x10000014a,
    0x10000014a,
    [&](uint8_t* message) {
      WriteMessage<uint32_t>(message, 8, image);
    }, NoReply));
}

#define NN_VI2_SERVICE_REQUEST(name, parameters, command, words, write) \
  Result ServiceClient::name parameters { \
    return Call([&](const SessionHandle* session) { \
      return Invoke(session, (uint64_t(words) << 32) | command, \
        0x100000000 | command, [&](uint8_t* message) { write }, NoReply); \
    }); \
  }

#define NN_VI2_SERVICE_ABORTING_REQUEST(name, parameters, command, words, \
  write) \
  void ServiceClient::name parameters { \
    Call([&](const SessionHandle* session) { \
      NN_ABORT_UNLESS(Invoke(session, (uint64_t(words) << 32) | command, \
        0x100000000 | command, [&](uint8_t* message) { write }, \
        NoReply).IsSuccess()); \
      return Result{0}; \
    }); \
  }

#define NN_VI2_WRITE(type, offset, value) \
  WriteMessage<type>(message, offset, value);

NN_VI2_SERVICE_REQUEST(OpenDisplay, (uint64_t display, uint32_t index),
  0x75, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, index))

NN_VI2_SERVICE_ABORTING_REQUEST(CloseDisplay, (uint64_t display), 0x76, 2,
  NN_VI2_WRITE(uint64_t, 8, display))

NN_VI2_SERVICE_REQUEST(CreateEndpoint,
  (uint64_t endpoint, uint64_t display, uint64_t settings), 0x7f, 6,
  NN_VI2_WRITE(uint64_t, 8, endpoint) NN_VI2_WRITE(uint64_t, 16, display)
  NN_VI2_WRITE(uint64_t, 24, settings))

NN_VI2_SERVICE_REQUEST(CreateLayer, (uint64_t layer, uint64_t endpoint),
  0x80, 4,
  NN_VI2_WRITE(uint64_t, 8, layer) NN_VI2_WRITE(uint64_t, 16, endpoint))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyLayer,
  (uint64_t layer, uint64_t endpoint), 0x81, 4,
  NN_VI2_WRITE(uint64_t, 8, layer) NN_VI2_WRITE(uint64_t, 16, endpoint))

NN_VI2_SERVICE_REQUEST(CreateVsyncEvent,
  (uint64_t display, uint32_t eventId), 0x115, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyVsyncEvent,
  (uint64_t display, uint32_t eventId), 0x116, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_REQUEST(RegisterLayerBuffer, (uint64_t layer, uint64_t pool),
  0x10b, 4,
  NN_VI2_WRITE(uint64_t, 8, layer) NN_VI2_WRITE(uint64_t, 16, pool))

NN_VI2_SERVICE_ABORTING_REQUEST(UnregisterLayerBuffer, (uint64_t layer),
  0x10c, 2, NN_VI2_WRITE(uint64_t, 8, layer))

NN_VI2_SERVICE_REQUEST(SetLayerSwapInterval,
  (uint64_t layer, uint32_t interval, uint32_t extended), 0xd9, 4,
  NN_VI2_WRITE(uint64_t, 8, layer) NN_VI2_WRITE(uint32_t, 16, interval)
  NN_VI2_WRITE(uint32_t, 20, extended))

NN_VI2_SERVICE_ABORTING_REQUEST(ClearLayerSwapInterval, (uint64_t layer),
  0xda, 2, NN_VI2_WRITE(uint64_t, 8, layer))

NN_VI2_SERVICE_REQUEST(SetDisplayRefreshRateCapability,
  (uint64_t display, uint64_t rate, uint64_t capability), 0x13d, 6,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint64_t, 16, rate)
  NN_VI2_WRITE(uint64_t, 24, capability))

NN_VI2_SERVICE_REQUEST(CreateRefreshRateEvent,
  (uint64_t display, uint32_t eventId), 0x117, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyRefreshRateEvent,
  (uint64_t display, uint32_t eventId), 0x118, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_REQUEST(SetDisplayHdrOutputFormatCapability,
  (uint64_t display, uint64_t format, uint64_t capability), 0x13e, 6,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint64_t, 16, format)
  NN_VI2_WRITE(uint64_t, 24, capability))

NN_VI2_SERVICE_REQUEST(CreateHdrStatusEvent,
  (uint64_t display, uint32_t eventId), 0x119, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyHdrStatusEvent,
  (uint64_t display, uint32_t eventId), 0x11a, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_REQUEST(CreateHdrPaperWhiteEvent,
  (uint64_t display, uint32_t eventId), 0x11b, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyHdrPaperWhiteEvent,
  (uint64_t display, uint32_t eventId), 0x11c, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_REQUEST(CreateBufferMaxResolutionEvent,
  (uint64_t display, uint32_t eventId), 0x11d, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyBufferMaxResolutionEvent,
  (uint64_t display, uint32_t eventId), 0x11e, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_REQUEST(CreateModeCapabilityEvent,
  (uint64_t display, uint32_t eventId), 0x11f, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyModeCapabilityEvent,
  (uint64_t display, uint32_t eventId), 0x120, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_REQUEST(InitializeTimestampRecorders, (uint32_t maxIndex), 0x43,
  1, NN_VI2_WRITE(uint32_t, 8, maxIndex))

NN_VI2_SERVICE_REQUEST(SetLayerHdrMetadata,
  (uint64_t layer, uint64_t metadata), 0x16f, 4,
  NN_VI2_WRITE(uint64_t, 8, layer) NN_VI2_WRITE(uint64_t, 16, metadata))

NN_VI2_SERVICE_REQUEST(SetLayerHdrBezierMetadata,
  (uint64_t layer, float kneeX, float kneeY, float anchor), 0x170, 5,
  NN_VI2_WRITE(uint64_t, 8, layer) NN_VI2_WRITE(float, 16, kneeX)
  NN_VI2_WRITE(float, 20, kneeY) NN_VI2_WRITE(float, 24, anchor))

NN_VI2_SERVICE_REQUEST(ClearLayerHdrMetadata, (uint64_t layer), 0x171, 2,
  NN_VI2_WRITE(uint64_t, 8, layer))

NN_VI2_SERVICE_REQUEST(CreateAvailableRefreshRatesEvent,
  (uint64_t display, uint32_t eventId), 0x173, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

NN_VI2_SERVICE_ABORTING_REQUEST(DestroyAvailableRefreshRatesEvent,
  (uint64_t display, uint32_t eventId), 0x174, 3,
  NN_VI2_WRITE(uint64_t, 8, display) NN_VI2_WRITE(uint32_t, 16, eventId))

#undef NN_VI2_WRITE
#undef NN_VI2_SERVICE_ABORTING_REQUEST
#undef NN_VI2_SERVICE_REQUEST

Result ServiceClient::GetLayerFrameNumber(uint64_t* pOutValue,
  uint64_t layer) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x2000000e4, 0x3000000e4,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, layer);
      },
      [&](const uint8_t* message) {
        *pOutValue = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::PresentLayerBuffer(uint64_t* pOutFrame, Uuid* pOutFence,
  uint64_t layer, uint8_t slot, uint32_t flags,
  const ImageDescriptor& descriptor, const Uuid& sync) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x18000000f5, 0x7000000f5,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, layer);
        WriteMessage<uint8_t>(message, 16, slot);
        WriteMessage<uint32_t>(message, 20, flags);
        WriteMessage<ImageDescriptor>(message, 24, descriptor);
        WriteMessage<Uuid>(message, 88, sync);
      },
      [&](const uint8_t* message) {
        *pOutFence = ReadMessage<Uuid>(message, 20);
        *pOutFrame = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::AcquireLayerBuffer(uint64_t* pOutFrame, Uuid* pOutFence,
  uint64_t layer, uint8_t slot, const ImageDescriptor& descriptor) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x13000000f4, 0x7000000f4,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, layer);
        WriteMessage<uint8_t>(message, 16, slot);
        WriteMessage<ImageDescriptor>(message, 20, descriptor);
      },
      [&](const uint8_t* message) {
        *pOutFence = ReadMessage<Uuid>(message, 20);
        *pOutFrame = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::QueryDisplayRefreshRate(uint64_t* pOutValue,
  uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x200000172, 0x300000172,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, display);
      },
      [&](const uint8_t* message) {
        *pOutValue = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::QueryDisplayHdrStatus(uint64_t* pOutFormat,
  uint16_t* pOutLuminance, uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x200000078, 0x400000078,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, display);
      },
      [&](const uint8_t* message) {
        *pOutLuminance = ReadMessage<uint16_t>(message, 20);
        *pOutFormat = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::QueryDisplayHdrPaperWhite(uint16_t* pOutValue,
  uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x200000079, 0x200000079,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, display);
      },
      [&](const uint8_t* message) {
        *pOutValue = ReadMessage<uint16_t>(message, 12);
      });
  });
}

Result ServiceClient::QueryDisplayBufferMaxResolution(uint64_t* pOutValue,
  uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x20000007a, 0x30000007a,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, display);
      },
      [&](const uint8_t* message) {
        *pOutValue = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::QueryDisplayModeCapability(uint64_t* pOutRefreshRates,
  uint64_t* pOutHdrOutputFormats, uint64_t* pOutVrrRefreshRates,
  uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x20000007b, 0x70000007b,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, display);
      },
      [&](const uint8_t* message) {
        *pOutVrrRefreshRates = ReadMessage<uint64_t>(message, 28);
        *pOutHdrOutputFormats = ReadMessage<uint64_t>(message, 20);
        *pOutRefreshRates = ReadMessage<uint64_t>(message, 12);
      });
  });
}

Result ServiceClient::GetMaxTimestampRecorderIndex(uint32_t* pOutIndex) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x15, 0x200000015, NoRequest,
      [&](const uint8_t* message) {
        const uint32_t index = ReadMessage<uint32_t>(message, 12);
        NN_ABORT_UNLESS(index < 8);
        *pOutIndex = index;
      });
  });
}

// The buffer holds one 64 bit timestamp per reported checkpoint.
Result ServiceClient::GetRecordedTimestamps(uint64_t* pOutCount,
  bool* pOutIsValid, uint32_t index, uint64_t checkpoints, uint64_t* buffer,
  size_t count) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x501000045, 0x400000045,
      [&](uint8_t* message) {
        tipc::WriteBufferDescriptor(message, 8, buffer,
          count * sizeof(uint64_t));
        WriteMessage<uint32_t>(message, 20, index);
        WriteMessage<uint64_t>(message, 24, checkpoints);
        WriteMessage<uint64_t>(message, 32, sizeof(uint64_t));
      },
      [&](const uint8_t* message) {
        *pOutCount = ReadMessage<uint64_t>(message, 12) / sizeof(uint64_t);
        *pOutIsValid = ReadMessage<uint8_t>(message, 20) == 1;
      });
  });
}

Result ServiceClient::QueryDisplayPanelIdentifier(
  PanelIdentifierData* pOutValue, uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x20000007c, 0x70000007c,
      [&](uint8_t* message) {
        WriteMessage<uint64_t>(message, 8, display);
      },
      [&](const uint8_t* message) {
        *pOutValue = ReadMessage<PanelIdentifierData>(message, 12);
      });
  });
}

// Each available refresh rate entry takes 64 bytes in the buffer.
Result ServiceClient::QueryAvailableRefreshRates(void* buffer, uint32_t count,
  uint8_t* pOutCount, uint64_t display) {
  return Call([&](const SessionHandle* session) {
    return Invoke(session, 0x201000175, 0x200000175,
      [&](uint8_t* message) {
        tipc::WriteBufferDescriptor(message, 8, buffer, size_t(count) << 6);
        WriteMessage<uint64_t>(message, 20, display);
      },
      [&](const uint8_t* message) {
        *pOutCount = ReadMessage<uint8_t>(message, 12);
      });
  });
}

void SetUpServiceFunctions(ServiceFunctions* pFunctions,
  ServiceClient* pClient) {
  ServiceFunctions& f = *pFunctions;

  f.initialize = [](void* p) {
    return static_cast<ServiceClient*>(p)->Initialize();
  };
  f.finalize = [](void* p) {
    static_cast<ServiceClient*>(p)->Finalize();
  };
  f.getMaxDisplayIndex = [](void* p, uint32_t* a) {
    return static_cast<ServiceClient*>(p)->GetMaxDisplayIndex(a);
  };
  f.getDisplayEvent = [](void* p, gsdrv::UniqueNativeHandle* a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->GetDisplayEvent(a, b);
  };
  f.duplicateEvent = [](void* p, gsdrv::UniqueNativeHandle* a, uint32_t b,
    uint32_t h) {
    return static_cast<ServiceClient*>(p)->DuplicateEvent(a, b, h);
  };
  f.getMaxLayerIndex = [](void* p, uint32_t* a) {
    return static_cast<ServiceClient*>(p)->GetMaxLayerIndex(a);
  };
  f.getLayerEvent = [](void* p, gsdrv::UniqueNativeHandle* a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->GetLayerEvent(a, b);
  };
  f.releaseEvent = [](void* p, uint32_t a) {
    static_cast<ServiceClient*>(p)->ReleaseEvent(a);
  };
  f.readSharedData = [](void* p, void* a, size_t b) {
    return static_cast<ServiceClient*>(p)->ReadSharedData(a, b);
  };
  f.createNativeMemory = [](void*, gs::NativeMemoryHandle* a, void* b,
    size_t s, os::MemoryPermission d, gs::cpu::MemoryCacheability e) {
    return gs::sdk::CreateNativeMemory(a, b, s, d, e);
  };
  f.destroyNativeMemory = [](void*, gs::NativeMemoryHandle a) {
    gs::sdk::DestroyNativeMemory(a);
  };
  f.createNativeImage = [](void* p, uint32_t* a, const ImageDescriptor& b,
    uint32_t m, uint32_t o) {
    return static_cast<ServiceClient*>(p)->CreateNativeImage(a, b, m, o);
  };
  f.createNativeImageForSystem = [](void* p, uint32_t* a,
    const ImageDescriptor& b, uint32_t m, uint32_t o) {
    return static_cast<ServiceClient*>(p)->CreateNativeImageForSystem(a, b,
      m, o);
  };
  f.destroyNativeImage = [](void* p, uint32_t a) {
    static_cast<ServiceClient*>(p)->DestroyNativeImage(a);
  };
  f.createAliasImage = [](void* p, uint32_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateAliasImage(a, b);
  };
  f.destroyAliasImage = [](void* p, uint32_t a) {
    static_cast<ServiceClient*>(p)->DestroyAliasImage(a);
  };
  f.openDisplay = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->OpenDisplay(a, b);
  };
  f.closeDisplay = [](void* p, uint64_t a) {
    static_cast<ServiceClient*>(p)->CloseDisplay(a);
  };
  f.createEndpoint = [](void* p, uint64_t a, uint64_t b, uint64_t d) {
    return static_cast<ServiceClient*>(p)->CreateEndpoint(a, b, d);
  };
  f.createLayer = [](void* p, uint64_t a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->CreateLayer(a, b);
  };
  f.destroyLayer = [](void* p, uint64_t a, uint64_t b) {
    static_cast<ServiceClient*>(p)->DestroyLayer(a, b);
  };
  f.createVsyncEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateVsyncEvent(a, b);
  };
  f.destroyVsyncEvent = [](void* p, uint64_t a, uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyVsyncEvent(a, b);
  };
  f.registerLayerBuffer = [](void* p, uint64_t a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->RegisterLayerBuffer(a, b);
  };
  f.unregisterLayerBuffer = [](void* p, uint64_t a) {
    static_cast<ServiceClient*>(p)->UnregisterLayerBuffer(a);
  };
  f.setLayerSwapInterval = [](void* p, uint64_t a, uint32_t b, uint32_t d) {
    return static_cast<ServiceClient*>(p)->SetLayerSwapInterval(a, b, d);
  };
  f.clearLayerSwapInterval = [](void* p, uint64_t a) {
    static_cast<ServiceClient*>(p)->ClearLayerSwapInterval(a);
  };
  f.getLayerFrameNumber = [](void* p, uint64_t* a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->GetLayerFrameNumber(a, b);
  };
  f.presentLayerBuffer = [](void* p, uint64_t* a, Uuid* b, uint64_t d,
    uint8_t e, uint32_t g, const ImageDescriptor& h, const Uuid& i) {
    return static_cast<ServiceClient*>(p)->PresentLayerBuffer(a, b, d, e, g,
      h, i);
  };
  f.acquireLayerBuffer = [](void* p, uint64_t* a, Uuid* b, uint64_t d,
    uint8_t e, const ImageDescriptor& h) {
    return static_cast<ServiceClient*>(p)->AcquireLayerBuffer(a, b, d, e, h);
  };
  f.createNativeMemoryWithTransferMemory = [](void*,
    gs::NativeMemoryHandle* a, gsdrv::UniqueNativeHandle&& b, size_t s,
    os::MemoryPermission d) {
    return gs::sdk::CreateNativeMemoryWithTransferMemory(a,
      static_cast<gsdrv::UniqueNativeHandle&&>(b), s, d);
  };
  f.setDisplayRefreshRateCapability = [](void* p, uint64_t a, uint64_t b,
    uint64_t d) {
    return static_cast<ServiceClient*>(p)->SetDisplayRefreshRateCapability(a,
      b, d);
  };
  f.queryDisplayRefreshRate = [](void* p, uint64_t* a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->QueryDisplayRefreshRate(a, b);
  };
  f.createRefreshRateEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateRefreshRateEvent(a, b);
  };
  f.destroyRefreshRateEvent = [](void* p, uint64_t a, uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyRefreshRateEvent(a, b);
  };
  f.setDisplayHdrOutputFormatCapability = [](void* p, uint64_t a,
    uint64_t b, uint64_t d) {
    return static_cast<ServiceClient*>(p)
      ->SetDisplayHdrOutputFormatCapability(a, b, d);
  };
  f.queryDisplayHdrStatus = [](void* p, uint64_t* a, uint16_t* b,
    uint64_t d) {
    return static_cast<ServiceClient*>(p)->QueryDisplayHdrStatus(a, b, d);
  };
  f.createHdrStatusEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateHdrStatusEvent(a, b);
  };
  f.destroyHdrStatusEvent = [](void* p, uint64_t a, uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyHdrStatusEvent(a, b);
  };
  f.queryDisplayHdrPaperWhite = [](void* p, uint16_t* a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->QueryDisplayHdrPaperWhite(a, b);
  };
  f.createHdrPaperWhiteEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateHdrPaperWhiteEvent(a, b);
  };
  f.destroyHdrPaperWhiteEvent = [](void* p, uint64_t a, uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyHdrPaperWhiteEvent(a, b);
  };
  f.queryDisplayBufferMaxResolution = [](void* p, uint64_t* a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->QueryDisplayBufferMaxResolution(a,
      b);
  };
  f.createBufferMaxResolutionEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateBufferMaxResolutionEvent(a,
      b);
  };
  f.destroyBufferMaxResolutionEvent = [](void* p, uint64_t a, uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyBufferMaxResolutionEvent(a, b);
  };
  f.queryDisplayModeCapability = [](void* p, uint64_t* a, uint64_t* b,
    uint64_t* d, uint64_t e) {
    return static_cast<ServiceClient*>(p)->QueryDisplayModeCapability(a, b, d,
      e);
  };
  f.createModeCapabilityEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateModeCapabilityEvent(a, b);
  };
  f.destroyModeCapabilityEvent = [](void* p, uint64_t a, uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyModeCapabilityEvent(a, b);
  };
  f.getMaxTimestampRecorderIndex = [](void* p, uint32_t* a) {
    return static_cast<ServiceClient*>(p)->GetMaxTimestampRecorderIndex(a);
  };
  f.initializeTimestampRecorders = [](void* p, uint32_t a) {
    return static_cast<ServiceClient*>(p)->InitializeTimestampRecorders(a);
  };
  f.getRecordedTimestamps = [](void* p, uint64_t* a, bool* b, uint32_t d,
    uint64_t e, uint64_t* g, size_t h) {
    return static_cast<ServiceClient*>(p)->GetRecordedTimestamps(a, b, d, e,
      g, h);
  };
  f.setLayerHdrMetadata = [](void* p, uint64_t a, uint64_t b) {
    return static_cast<ServiceClient*>(p)->SetLayerHdrMetadata(a, b);
  };
  f.setLayerHdrBezierMetadata = [](void* p, uint64_t a, float b, float d,
    float e) {
    return static_cast<ServiceClient*>(p)->SetLayerHdrBezierMetadata(a, b, d,
      e);
  };
  f.clearLayerHdrMetadata = [](void* p, uint64_t a) {
    return static_cast<ServiceClient*>(p)->ClearLayerHdrMetadata(a);
  };
  f.createNativeMemoryWithProtectedMemory = [](void*,
    gs::NativeMemoryHandle* a, size_t s) {
    return gs::sdk::CreateNativeMemoryWithProtectedMemory(a, s);
  };
  f.queryDisplayPanelIdentifier = [](void* p, PanelIdentifierData* a,
    uint64_t b) {
    return static_cast<ServiceClient*>(p)->QueryDisplayPanelIdentifier(a, b);
  };
  f.queryAvailableRefreshRates = [](void* p, void* a, uint32_t b,
    uint8_t* d, uint64_t e) {
    return static_cast<ServiceClient*>(p)->QueryAvailableRefreshRates(a, b, d,
      e);
  };
  f.createAvailableRefreshRatesEvent = [](void* p, uint64_t a, uint32_t b) {
    return static_cast<ServiceClient*>(p)->CreateAvailableRefreshRatesEvent(a,
      b);
  };
  f.destroyAvailableRefreshRatesEvent = [](void* p, uint64_t a,
    uint32_t b) {
    static_cast<ServiceClient*>(p)->DestroyAvailableRefreshRatesEvent(a, b);
  };
  f.count += 59;
  f.context = pClient;
}

}
