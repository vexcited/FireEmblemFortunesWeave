#pragma once

#include "text/string.hpp"

namespace fw::containers {

struct TreeNode {
  TreeNode* left;
  TreeNode* right;
  TreeNode* parent;
  uint8_t black;
  unsigned char unknown_19[7];
};

struct StringTreeNode {
  TreeNode node;
  text::String key;
};

void BalanceAfterInsert(TreeNode* root, TreeNode* node);
void DestroyStringTree(TreeNode* root);

static_assert(sizeof(TreeNode) == 0x20);
static_assert(offsetof(StringTreeNode, key) == 0x20);

}
