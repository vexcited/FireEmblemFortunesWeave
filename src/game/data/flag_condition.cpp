#include "game/data/flag_condition.hpp"

namespace game {

namespace {

// Link time optimization emitted the shared methods out of line.
[[gnu::used]] const auto append = &FlagCondition::Append;
[[gnu::used]] const auto assign = &FlagConditionList::Assign;
[[gnu::used]] const auto add = &FlagConditionList::Add;

}

}

template class std::__1::vector<game::FlagCondition>;
template class std::__1::vector<game::FlagCondition::Term>;
template class std::__1::vector<game::HashedString>;
