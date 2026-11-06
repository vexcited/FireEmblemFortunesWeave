#include "game/zview/state_machine.hpp"

// The state machines of the zview, hub and combat modules. Their states only
// need the slots the destructor calls.
#define GAME_STATE_MACHINE \
  class StateAction { \
  public: \
    virtual ~StateAction(); \
    virtual void Unknown02(); \
    virtual void Unknown03(); \
    virtual void Unknown04(); \
    virtual void Unknown05(); \
  }; \
  \
  class StateMachine : public zview::IStateMachine<StateAction> { \
  public: \
    StateMachine(); \
  }; \
  \
  [[gnu::used]] StateMachine::StateMachine() = default;

namespace game {

namespace zview {

GAME_STATE_MACHINE

}

namespace hub {

GAME_STATE_MACHINE

}

namespace combat {

GAME_STATE_MACHINE

}

}

#undef GAME_STATE_MACHINE
