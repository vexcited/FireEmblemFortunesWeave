#include "nn/nifm/nifm_rewrite_rule.hpp"
#include "nn/util/string_util.hpp"

namespace nn::nifm {

RewriteRule::RewriteRule() : action(), filter(), priority(16) {}

void RewriteRule::SetAction(const char* action) {
  util::Strlcpy(this->action, action, sizeof(this->action));
}

void RewriteRule::SetFilter(const char* filter) {
  util::Strlcpy(this->filter, filter, sizeof(this->filter));
}

void RewriteRule::SetPriority(int priority) {
  this->priority = priority;
}

void RewriteRule::SetDirection(PacketDirection direction) {
  this->direction = direction;
}

}
