#include <map>
#include <string>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N>
using NameTree = std::map<std::string, Unrecovered<N>*>;

}

template game::NameTree<0>::__base::iterator
  game::NameTree<0>::__base::find(const std::string&);
template game::NameTree<1>::__base::iterator
  game::NameTree<1>::__base::find(const std::string&);
template game::NameTree<2>::__base::iterator
  game::NameTree<2>::__base::find(const std::string&);
template game::NameTree<3>::__base::iterator
  game::NameTree<3>::__base::find(const std::string&);
template game::NameTree<4>::__base::iterator
  game::NameTree<4>::__base::find(const std::string&);
