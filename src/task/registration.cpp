#include "task/registration.hpp"

extern "C" void* memset(void* destination, int value, size_t size);

namespace fw::registration {

void InitializePlatform(uint32_t mode);
void InitializeOperatingEnvironment();
void SetCpuBoostMode(uint32_t mode);
void InitializeTime();
void SetFocusHandlingMode(uint32_t mode);
void SetOperationNotification(bool enabled);
void SetPerformanceNotification(bool enabled);
void EnterExitRequestSection();
void SetResumeNotification(bool enabled);
void ConstructThread(void* thread, uint32_t flags, void* entry, void* stack);
void StartThread(void* thread);
void ConstructFileService(void* service);
void SignalEvent(void* event);
void ConstructFileResource(void* resource, const char* name, void* owner);
void DestroyFileResource(void* resource);
void ConstructRenderContext(void* context, const uint32_t* resolution);
void InstallRenderCallbacks(
  void* context, void* first, void* second, void* third
);
void StartRenderContext(void* context);
void ReadRenderConfiguration();
void ConfigureRenderContext(void* context, void* display, uint32_t mode);
void InitializeRenderResources();
void ConstructInputService(void* service);
void AttachClock(void* clock, void* child);
void ConstructSaveService(void* service);
void ConstructMessages(void* service);
void ConstructCompositeService(void* service);
void InitializeSound();
void InitializeAnimation();
void ConstructUiState(void* state);
void InitializeUi(void* ui);
void ConstructScratch(void* service, size_t capacity);
void DestroyScratch(void* service);
void InstallWorldCallback(void* callback, void* destination);
void ConstructSceneTask(void* task, uintptr_t callback);
void InstallInputCallbacks(
  void* service, void* first, void* second, void* third
);
void ConfigureEffectsClock(void* effects, void* clock);
void InitializeSpine();
void SetSpineMode(uint32_t mode);
void InitializeFont(void* font);
void FinishTaskRegistration();
void UpdateRenderContext(void* context);
uint32_t AcquireGuard(uint64_t* guard);
void ReleaseGuard(uint64_t* guard);
void ConstructCollision(void* manager);
void ConstructPhysics(void* manager);
void RegisterDestructor(uintptr_t destructor, void* object, void* handle);

namespace {

template<typename T>
T Read(void* object, size_t offset) {
  T value;
  __builtin_memcpy(&value, static_cast<unsigned char*>(object) + offset,
                   sizeof(value));
  return value;
}

template<typename T>
void Write(void* object, size_t offset, T value) {
  __builtin_memcpy(static_cast<unsigned char*>(object) + offset, &value,
                   sizeof(value));
}

void* Offset(void* object, size_t offset) {
  return static_cast<unsigned char*>(object) + offset;
}

void ZeroWords(void* object, size_t first, size_t last) {
  for (size_t offset = first; offset <= last; offset += 8) {
    Write<uint64_t>(object, offset, 0);
  }
}

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

void Free(void* object) {
  memory::g_heap_manager->GetAllocator(0).Free(object);
}

void Release(processing::SharedControl* control) {
  if (control != nullptr && __atomic_fetch_sub(
    &control->shared_owners, uint64_t{1}, __ATOMIC_ACQ_REL
  ) == 0) {
    control->vtable->destroy_object(control);
    processing::ReleaseWeak(control);
  }
}

struct SharedEmptyService {
  processing::SharedControl control;
  uintptr_t* object_table;
};

void ReplaceSharedService(
  processing::SharedTask& destination,
  processing::SharedControlVTable& control_table, uintptr_t& object_table
) {
  auto* replacement = static_cast<SharedEmptyService*>(Allocate(32));
  replacement->control = {&control_table, 0, 0};
  processing::SharedControl* previous = destination.control;
  destination.control = &replacement->control;
  replacement->object_table = &object_table;
  destination.object = &replacement->object_table;
  Release(previous);
}

struct CallableBox {
  uintptr_t storage[4];
  task::Callable* callable;
};

void SetCallable(CallableBox& box, task::CallableVTable& table) {
  box.storage[0] = reinterpret_cast<uintptr_t>(&table);
  box.callable = reinterpret_cast<task::Callable*>(box.storage);
}

void DestroyCallable(CallableBox& box) {
  task::Callable* callable = box.callable;

  if (callable == reinterpret_cast<task::Callable*>(box.storage)) {
    callable->vtable->destroy_inline(callable);
  }
  else if (callable != nullptr) {
    callable->vtable->destroy_heap(callable);
  }
}

void InstallCallbacks(
  void* service, task::CallableVTable& first, task::CallableVTable& second,
  task::CallableVTable& third,
  void (*install)(void*, void*, void*, void*)
) {
  CallableBox a;
  CallableBox b;
  CallableBox c;
  SetCallable(a, first);
  SetCallable(b, second);
  SetCallable(c, third);
  install(service, &a, &b, &c);
  DestroyCallable(c);
  DestroyCallable(b);
  DestroyCallable(a);
}

void InstallWorld(task::CallableVTable& table, void* destination) {
  CallableBox first;
  CallableBox second;
  SetCallable(first, table);
  SetCallable(second, table);
  InstallWorldCallback(&first, destination);
  DestroyCallable(first);
  DestroyCallable(second);
}

void InitializeEffects(void* effects) {
  ZeroWords(effects, 16, 24);
  ZeroWords(effects, 88, 136);
  ZeroWords(effects, 168, 192);
  ZeroWords(effects, 208, 232);
  ZeroWords(effects, 248, 272);
  ZeroWords(effects, 288, 304);
  ZeroWords(effects, 352, 416);
  ZeroWords(effects, 432, 440);
  Write<uint64_t>(effects, 32, 0x2000000040);
  Write<uint64_t>(effects, 40, 0x2000000020);
  Write<uint32_t>(effects, 48, 8);
  Write<uint64_t>(effects, 56, 0x10000);
  Write<uint32_t>(effects, 64, 1024);
  Write<uint8_t>(effects, 68, 0);
  Write<uint64_t>(effects, 72, 0x10000000001);
  Write<uint64_t>(effects, 80, 0x100000);
  Write<uint64_t>(effects, 144, UINT64_MAX);
  Write<uint64_t>(effects, 152, UINT64_MAX);
  Write<uint8_t>(effects, 160, 0);

  constexpr size_t load_factors[] = {200, 240, 280};

  for (size_t offset : load_factors) {
    Write<uint32_t>(effects, offset, 0x3f800000);
  }

  Write<uint16_t>(effects, 312, 0);
  Write<uint32_t>(effects, 314, 0x01010101);
  Write<uint32_t>(effects, 318, 0x00010100);
  Write<uint8_t>(effects, 322, 0);
  Write<uint8_t>(effects, 324, 0);
  Write<uint64_t>(effects, 328, 0);
  Write<uint8_t>(effects, 336, 0);
  Write<uint8_t>(effects, 340, 0);
  Write<uint32_t>(effects, 344, 0x40000000);
  Write<uint32_t>(effects, 424, 0);
  Write<uintptr_t*>(effects, 0, &g_effects_table);
  Write<uint64_t>(effects, 8, 0);
}

void InitializeClockNode(void* node, void* parent, uint16_t enabled) {
  Write<uintptr_t*>(node, 0, &g_clock_node_table);
  Write<uint64_t>(node, 8, 0x3f80000000000000);
  Write<uint32_t>(node, 16, 0x40000000);
  Write<void*>(node, 24, parent);
  Write<uint16_t>(node, 32, enabled);
  Write<uint32_t>(node, 36, 0x40000000);
  ZeroWords(node, 40, 48);
}

void* CreateClock() {
  void* clock = Allocate(368);
  ZeroWords(clock, 8, 24);
  InitializeClockNode(Offset(clock, 32), nullptr, 1);
  InitializeClockNode(Offset(clock, 88), Offset(clock, 32), 0);
  InitializeClockNode(Offset(clock, 144), Offset(clock, 88), 0);
  ZeroWords(clock, 200, 240);
  InitializeClockNode(Offset(clock, 248), Offset(clock, 144), 0);
  InitializeClockNode(Offset(clock, 304), Offset(clock, 248), 0);
  Write<uint32_t>(clock, 360, 4);
  Write<uintptr_t*>(clock, 0, &g_clock_table);
  AttachClock(clock, Offset(clock, 248));
  AttachClock(clock, Offset(clock, 304));
  return clock;
}

void* CreateUi() {
  void* ui = g_ui_singleton;

  if (ui == nullptr) {
    ui = Allocate(472);
    Write<uint32_t>(ui, 0, 0);
    ZeroWords(ui, 8, 48);
    ConstructUiState(Offset(ui, 56));
    Write<uint32_t>(ui, 344, 0);
    ZeroWords(ui, 352, 392);
    Write<uint8_t>(ui, 400, 0);
    Write<uint32_t>(ui, 404, 0);
    ZeroWords(ui, 456, 464);
    g_ui_singleton = ui;

    for (size_t offset = 408; offset <= 432; offset += 24) {
      Write<void*>(ui, offset, Offset(ui, offset));
      Write<void*>(ui, offset + 8, Offset(ui, offset));
      Write<uint64_t>(ui, offset + 16, 0);
    }
  }

  return ui;
}

void AppendTask(task::CallbackScheduler* scheduler, task::Task* task) {
  task::Link* last = task->link.previous;
  task->link.previous = scheduler->scheduler.pending.previous;
  last->next = &scheduler->scheduler.pending;
  scheduler->scheduler.pending.previous->next = &task->link;
  scheduler->scheduler.pending.previous = last;
}

void RegisterBound(
  const char* name, uint16_t priority, task::CallableVTable& table,
  uintptr_t method, uintptr_t adjustment, void* object, bool persistent = true
) {
  auto* scheduler = reinterpret_cast<task::CallbackScheduler*>(g_scheduler);
  task::Task* previous = scheduler->scheduler.current;
  scheduler->creation_name = name;
  scheduler->creation_priority = priority;
  auto* result = static_cast<task::CallbackTask*>(Allocate(144));
  CallableBox binding;
  binding.storage[0] = reinterpret_cast<uintptr_t>(&table);
  binding.storage[1] = method;
  binding.storage[2] = adjustment;
  binding.storage[3] = reinterpret_cast<uintptr_t>(object);
  binding.callable = reinterpret_cast<task::Callable*>(binding.storage);
  task::Task& task = result->task;
  task.parent = nullptr;
  task.first_child = nullptr;
  task.next_sibling = nullptr;
  task.previous_sibling = nullptr;
  task.last_child = nullptr;
  task.vtable = &task::g_base_task_vtable;
  task.link = {&task.link, &task.link};
  Write<const char*>(&task, 24, task::g_invalid_task_name);
  task.priority = 0;
  task.update_count = 0;
  task.state = 1;
  task.flags = 0;
  task.callback_flag = 1;
  task::CallbackScheduler* context = task::g_callback_scheduler;
  Write<const char*>(&task, 24, context->creation_name);
  task.priority = context->creation_priority;
  task.parent = context->scheduler.current;

  if (task.parent != nullptr) {
    if (task.parent->first_child != nullptr) {
      task.parent->last_child->next_sibling = &task;
      task.previous_sibling = context->scheduler.current->last_child;
      context->scheduler.current->last_child = &task;
    }
    else {
      task.parent->last_child = &task;
      context->scheduler.current->first_child = &task;
    }
  }

  context->scheduler.current = &task;
  task.vtable = persistent ? &task::g_persistent_callback_task_vtable
                          : &task::g_callback_task_vtable;
  task::Callable* callable = binding.callable;

  if (callable == nullptr) {
    result->callable = nullptr;
  }
  else {
    if (callable == reinterpret_cast<task::Callable*>(binding.storage)) {
      result->callable = reinterpret_cast<task::Callable*>(result->storage);
      callable->vtable->copy_to(callable, result->storage);
    }
    else {
      result->callable = callable->vtable->clone(callable);
    }

    DestroyCallable(binding);
  }

  scheduler->scheduler.current = previous;
  AppendTask(scheduler, &task);
}

void EnsureCollision() {
  auto* guard = reinterpret_cast<uint8_t*>(&g_collision_guard);

  if ((__atomic_load_n(guard, __ATOMIC_ACQUIRE) & 1) == 0 &&
      AcquireGuard(&g_collision_guard) != 0) {
    ConstructCollision(g_collision);
    RegisterDestructor(g_collision_destructor, g_collision, &g_dso_handle);
    ReleaseGuard(&g_collision_guard);
  }
}

void EnsurePhysics() {
  auto* guard = reinterpret_cast<uint8_t*>(&g_physics_guard);

  if ((__atomic_load_n(guard, __ATOMIC_ACQUIRE) & 1) == 0 &&
      AcquireGuard(&g_physics_guard) != 0) {
    ZeroWords(g_physics, 0, 24);
    ZeroWords(g_physics, 40, 48);
    Write<uint8_t>(g_physics, 32, 0);
    Write<uint8_t>(g_physics, 36, 0);
    Write<uint64_t>(g_physics, 56, 0x3f800000);
    ConstructPhysics(g_physics);
    RegisterDestructor(g_physics_destructor, g_physics, &g_dso_handle);
    ReleaseGuard(&g_physics_guard);
  }
}

}
}

void fw::InitializeTasks() {
  using namespace registration;
  InitializePlatform(31);
  InitializeOperatingEnvironment();
  SetCpuBoostMode(1);
  Write<uint8_t>(g_runtime_status, 0, 0);
  Write<uint32_t>(g_runtime_status, 8, 0);
  Write<uint64_t>(g_runtime_status, 16, 0);
  Write<uint32_t>(g_runtime_status, 24, 0);
  Write<void*>(g_runtime_status, 32, Offset(g_runtime_status, 40));
  InitializeTime();
  g_non_japanese = g_locale[0] != 'j' || g_locale[1] != 'a' || g_locale[2] != 0;
  uint32_t count = g_registry_count;
  void* registry = Allocate(static_cast<size_t>(count) * 16);

  if (count != 0) {
    memset(registry, 0, static_cast<size_t>(count) * 16);
    g_registry = registry;

    for (uint32_t i = 0; i < count; ++i) {
      Write<uint64_t>(g_registry, static_cast<size_t>(i) * 16, 0);
    }
  }
  else {
    g_registry = registry;
  }

  g_registry_used = 0;
  g_registry_position = 0;
  g_registry_state = 0;
  SetFocusHandlingMode(3);
  SetOperationNotification(true);
  SetPerformanceNotification(true);
  EnterExitRequestSection();
  SetResumeNotification(true);
  uintptr_t entry[] = {
    reinterpret_cast<uintptr_t>(&g_thread_binding_table), g_thread_function, 0
  };
  uintptr_t stack[] = {
    reinterpret_cast<uintptr_t>(&g_thread_stack_table),
    reinterpret_cast<uintptr_t>(g_thread_stack), 0x4000
  };
  ConstructThread(g_thread_owner, 0, entry, stack);
  StartThread(Offset(g_thread_owner, 16));
  void* files = Allocate(4768);
  ConstructFileService(files);
  processing::g_frame_service = files;

  if (Read<uint32_t>(files, 4736) != 1 &&
      (Read<uint8_t>(files, 4742) & 1) == 0) {
    Write<uint32_t>(files, 4736, 1);
    SignalEvent(Offset(files, 4144));
    files = processing::g_frame_service;
  }

  void* resource = Allocate(88);
  ConstructFileResource(resource, g_empty_resource_name, nullptr);
  void* old_resource = Read<void*>(files, 4752);
  Write<void*>(files, 4752, resource);

  if (old_resource != nullptr) {
    DestroyFileResource(old_resource);
    Free(old_resource);
  }

  ReplaceSharedService(g_shared_primary, g_primary_control_table,
                       g_primary_object_table);
  ReplaceSharedService(g_shared_secondary, g_secondary_control_table,
                       g_secondary_object_table);
  ReplaceSharedService(g_shared_platform, g_platform_control_table,
                       g_platform_object_table);
  uint32_t resolution[] = {3840, 2160};
  void* render = Allocate(16720);
  ConstructRenderContext(render, resolution);
  InstallCallbacks(render, g_render_callback_a, g_render_callback_b,
                   g_render_callback_c, InstallRenderCallbacks);
  files = processing::g_frame_service;
  auto* service = static_cast<processing::SharedControl*>(Allocate(88));
  *service = {&g_render_service_control, 0, 0};
  Write<uintptr_t*>(service, 24, &g_render_service_tables);
  Write<void*>(service, 32, files);
  constexpr size_t table_offsets[] = {0xa0, 0x100, 0x160, 0x1c0, 0x220, 0x280};

  for (size_t i = 0; i < 6; ++i) {
    Write<uintptr_t>(service, 40 + i * 8,
      reinterpret_cast<uintptr_t>(&g_render_service_tables) + table_offsets[i]
    );
  }

  __atomic_fetch_add(&service->shared_owners, uint64_t{1}, __ATOMIC_RELAXED);
  Write<void*>(render, 13432, Offset(service, 24));
  auto* previous = Read<processing::SharedControl*>(render, 13440);
  Write<processing::SharedControl*>(render, 13440, service);
  Release(previous);
  Release(service);
  StartRenderContext(render);
  g_render_initialized = 1;
  Write<uint32_t>(g_render_options, 0, 0x01010101);
  g_render_state = 1;
  ReadRenderConfiguration();
  uint32_t mode;

  if (g_render_options[1] == 0) {
    mode = g_render_options[3] == 1 ? 2 : 1;
  }
  else if (g_render_options[2] == 0) {
    mode = g_render_options[3] == 1 ? 4 : 3;
  }
  else {
    mode = g_render_options[3] == 1 ? 6 : 5;
  }

  ConfigureRenderContext(render, g_display_target, mode);
  InitializeRenderResources();
  void* input = Allocate(1120);
  ConstructInputService(input);
  g_hid = input;
  void* effects = Allocate(448);
  InitializeEffects(effects);
  g_effects = effects;
  auto* scheduler = static_cast<task::CallbackScheduler*>(Allocate(64));
  scheduler->scheduler.pending.next = &scheduler->scheduler.pending;
  scheduler->creation_name = nullptr;
  scheduler->creation_priority = 0;
  g_scheduler = &scheduler->scheduler;
  task::g_callback_scheduler = scheduler;
  scheduler->scheduler.active.next = &scheduler->scheduler.active;
  scheduler->scheduler.pending.previous = &scheduler->scheduler.pending;
  scheduler->scheduler.current = nullptr;
  scheduler->scheduler.active.previous = &scheduler->scheduler.active;
  void* clock = CreateClock();
  g_clock_alias = clock;
  processing::g_frame_clock = static_cast<processing::FrameClock*>(clock);
  void* fibers = Allocate(24);
  Write<void*>(fibers, 0, fibers);
  Write<void*>(fibers, 8, fibers);
  Write<uint64_t>(fibers, 16, 0);
  g_fibers = fibers;
  g_fiber_alias = fibers;
  auto* save = static_cast<processing::SharedTask*>(Allocate(16));
  *save = {nullptr, nullptr};
  auto* save_control = static_cast<processing::SharedControl*>(Allocate(840));
  *save_control = {&g_save_control_table, 0, 0};
  void* save_object = Offset(save_control, 24);
  ConstructSaveService(save_object);
  previous = save->control;
  *save = {save_object, save_control};
  Release(previous);
  g_save = save;
  void* messages = Allocate(15208);
  ConstructMessages(messages);
  g_messages = messages;
  void* spine = Allocate(88);
  ZeroWords(spine, 0, 72);
  Write<uint8_t>(spine, 80, 0);
  g_spine = spine;
  void* movie = Allocate(192);
  ConstructCompositeService(movie);
  Write<uint64_t>(movie, 120, UINT64_MAX);
  ZeroWords(movie, 128, 168);
  Write<uint32_t>(movie, 176, 0x3f800000);
  Write<uint32_t>(movie, 184, 0);
  processing::g_composite_service = movie;
  void* font = Allocate(400);
  memset(font, 0, 336);
  Write<void*>(font, 368, Offset(font, 336));
  Write<uint64_t>(font, 384, 0);
  Write<uint16_t>(font, 392, 0);
  Write<task::CallableVTable*>(font, 336, &g_font_callback_table);
  Write<uintptr_t>(font, 344, g_font_callback);
  g_font = font;
  InitializeSound();
  InitializeAnimation();
  g_ui = CreateUi();
  InitializeUi(g_ui);
  void* debug = Allocate(1);
  g_debug = debug;
  void* scratch = Allocate(24);
  ConstructScratch(scratch, 0x100000);
  void* old_scratch = g_scratch;
  g_scratch = scratch;

  if (old_scratch != nullptr) {
    DestroyScratch(old_scratch);
    Free(old_scratch);
  }

  void* world = Allocate(56);
  ZeroWords(world, 0, 40);
  Write<uint8_t>(world, 48, 0);
  g_world = world;
  InstallWorld(g_world_callback_a, Offset(processing::g_render_context, 13344));
  InstallWorld(g_world_callback_b, Offset(processing::g_render_context, 13248));
  scheduler = reinterpret_cast<task::CallbackScheduler*>(g_scheduler);
  task::Task* old_current = scheduler->scheduler.current;
  scheduler->creation_name = g_scene_name;
  scheduler->creation_priority = 20;
  auto* scene = static_cast<task::Task*>(Allocate(168));
  ConstructSceneTask(scene, g_scene_callback);
  scheduler->scheduler.current = old_current;
  AppendTask(scheduler, scene);
  g_scene_task = scene;
  RegisterBound(
    g_g_fiber_main_name, 32, g_g_fiber_main_binding,
    reinterpret_cast<uintptr_t>(g_g_fiber_main_method),
    0, g_fibers
  );
  RegisterBound(
    g_g_save_main_name, 32, g_g_save_main_binding,
    reinterpret_cast<uintptr_t>(g_g_save_main_method),
    0, g_save
  );
  RegisterBound(
    g_g_fs_main_name, 32, g_g_fs_main_binding,
    reinterpret_cast<uintptr_t>(g_g_fs_main_method),
    0, processing::g_frame_service
  );
  RegisterBound(
    g_wld_manager_earlyupdate_name, 15, g_wld_manager_earlyupdate_binding,
    reinterpret_cast<uintptr_t>(g_wld_manager_earlyupdate_method),
    0, world
  );
  RegisterBound(
    g_wld_manager_main_name, 60, g_wld_manager_main_binding,
    reinterpret_cast<uintptr_t>(g_wld_manager_main_method),
    0, world
  );
  RegisterBound(
    g_wld_manager_lateupdate_name, 80, g_wld_manager_lateupdate_binding,
    reinterpret_cast<uintptr_t>(g_wld_manager_lateupdate_method),
    0, world
  );
  RegisterBound(
    g_wld_manager_gfxupdate_name, 124, g_wld_manager_gfxupdate_binding,
    reinterpret_cast<uintptr_t>(g_wld_manager_gfxupdate_method),
    0, world
  );
  EnsureCollision();
  RegisterBound(
    g_collision_manager_main_name, 110, g_collision_manager_main_binding,
    reinterpret_cast<uintptr_t>(g_collision_manager_main_method),
    0, g_collision
  );
  EnsurePhysics();
  RegisterBound(
    g_cphysx_manager_main_name, 55, g_cphysx_manager_main_binding,
    reinterpret_cast<uintptr_t>(g_cphysx_manager_main_method),
    0, g_physics
  );
  RegisterBound(
    g_gfx_preupdate_name, 120, g_gfx_preupdate_binding,
    reinterpret_cast<uintptr_t>(g_gfx_preupdate_method),
    0, render
  );
  RegisterBound(
    g_gfx_main_name, 128, g_gfx_main_binding,
    reinterpret_cast<uintptr_t>(g_gfx_main_method),
    0, render
  );
  RegisterBound(
    g_g_gamesnd_main_name, 1, g_g_gamesnd_main_binding,
    32,
    1, g_game_sound
  );
  RegisterBound(
    g_g_gamesnd_postmain_name, 101, g_g_gamesnd_postmain_binding,
    40,
    1, g_game_sound
  );
  RegisterBound(
    g_g_libsnd_main_name, 1, g_g_libsnd_main_binding,
    reinterpret_cast<uintptr_t>(g_g_libsnd_main_method),
    0, g_library_sound
  );
  RegisterBound(
    g_dbg_draw_name, 256, g_dbg_draw_binding,
    reinterpret_cast<uintptr_t>(g_dbg_draw_method),
    0, debug
  );
  RegisterBound(
    g_gfx_draw_name, 272, g_gfx_draw_binding,
    reinterpret_cast<uintptr_t>(g_gfx_draw_method),
    0, render
  );
  reinterpret_cast<task::CallbackScheduler*>(g_scheduler)->Create(
    g_dbgrenderer_refreshstate_name, 290,
    reinterpret_cast<void (*)()>(g_dbgrenderer_refreshstate_method)
  );
  reinterpret_cast<task::CallbackScheduler*>(g_scheduler)->Create(
    g_primitivedrawmanager_refresh_name, 290,
    reinterpret_cast<void (*)()>(g_primitivedrawmanager_refresh_method)
  );
  RegisterBound(
    g_gfx_waitvblank_name, 320, g_gfx_waitvblank_binding,
    reinterpret_cast<uintptr_t>(g_gfx_waitvblank_method),
    0, render
  );
  RegisterBound(
    g_g_time_main_name, 322, g_g_time_main_binding,
    reinterpret_cast<uintptr_t>(g_g_time_main_method),
    0, processing::g_frame_clock
  );
  reinterpret_cast<task::CallbackScheduler*>(g_scheduler)->Create(
    g_app_n_preupdate_name, 119,
    reinterpret_cast<void (*)()>(g_app_n_preupdate_method)
  );
  reinterpret_cast<task::CallbackScheduler*>(g_scheduler)->Create(
    g_app_n_notificationmessage_name, 324,
    reinterpret_cast<void (*)()>(g_app_n_notificationmessage_method)
  );
  RegisterBound(
    g_gfx_postupdate_name, 326, g_gfx_postupdate_binding,
    reinterpret_cast<uintptr_t>(g_gfx_postupdate_method),
    0, render
  );
  InstallCallbacks(g_hid, g_hid_callback_a, g_hid_callback_b,
                   g_hid_callback_c, InstallInputCallbacks);
  RegisterBound(
    g_g_hid_main_name, 0, g_g_hid_main_binding,
    reinterpret_cast<uintptr_t>(g_g_hid_main_method),
    0, g_hid, false
  );
  RegisterBound(
    g_g_as_main_name, 10, g_g_as_main_binding,
    reinterpret_cast<uintptr_t>(g_g_as_main_method),
    0, g_animation
  );
  RegisterBound(
    g_g_as_postmain_name, 12, g_g_as_postmain_binding,
    reinterpret_cast<uintptr_t>(g_g_as_postmain_method),
    0, g_animation
  );
  RegisterBound(
    g_g_ui_main_name, 10, g_g_ui_main_binding,
    reinterpret_cast<uintptr_t>(g_g_ui_main_method),
    0, g_ui, false
  );
  RegisterBound(
    g_dbg_main_name, 1, g_dbg_main_binding,
    reinterpret_cast<uintptr_t>(g_dbg_main_method),
    0, debug, false
  );
  RegisterBound(
    g_dbg_postworld_name, 105, g_dbg_postworld_binding,
    reinterpret_cast<uintptr_t>(g_dbg_postworld_method),
    0, debug
  );
  RegisterBound(
    g_dbg_postdisp_name, 321, g_dbg_postdisp_binding,
    reinterpret_cast<uintptr_t>(g_dbg_postdisp_method),
    0, debug
  );
  ConfigureEffectsClock(g_effects,
                        Offset(processing::g_frame_clock, 144));
  RegisterBound(
    g_g_eft_main_name, 127, g_g_eft_main_binding,
    reinterpret_cast<uintptr_t>(g_g_eft_main_method),
    0, g_effects
  );
  RegisterBound(
    g_g_eft_postmain_name, 129, g_g_eft_postmain_binding,
    reinterpret_cast<uintptr_t>(g_g_eft_postmain_method),
    0, g_effects
  );
  RegisterBound(
    g_effecthandlemanager_main_name, 129, g_effecthandlemanager_main_binding,
    reinterpret_cast<uintptr_t>(g_effecthandlemanager_main_method),
    0, g_effect_handles
  );
  void* spine_target = g_spine;
  void* spine_clock = processing::g_frame_clock;
  InitializeSpine();
  Write<void*>(spine_target, 72, spine_clock);
  SetSpineMode(1);
  RegisterBound(
    g_g_spine_main_name, 129, g_g_spine_main_binding,
    reinterpret_cast<uintptr_t>(g_g_spine_main_method),
    0, g_spine
  );
  RegisterBound(
    g_g_movie_main_name, 100, g_g_movie_main_binding,
    reinterpret_cast<uintptr_t>(g_g_movie_main_method),
    0, processing::g_composite_service
  );
  InitializeFont(g_font);
  RegisterBound(
    g_g_font_main_name, 100, g_g_font_main_binding,
    reinterpret_cast<uintptr_t>(g_g_font_main_method),
    0, g_font
  );
  RegisterBound(
    g_g_msg_main_name, 9, g_g_msg_main_binding,
    reinterpret_cast<uintptr_t>(g_g_msg_main_method),
    0, g_messages
  );
  reinterpret_cast<task::CallbackScheduler*>(g_scheduler)->Create(
    g_characterassetcache_name, 0,
    reinterpret_cast<void (*)()>(g_characterassetcache_method)
  );
  FinishTaskRegistration();
  UpdateRenderContext(processing::g_render_context);
}
