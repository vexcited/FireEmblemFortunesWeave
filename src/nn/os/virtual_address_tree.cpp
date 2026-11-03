#include "nn/os/virtual_address_tree.hpp"

namespace nn::os::detail {
namespace {

void ReplaceParent(VirtualAddressNode** root, VirtualAddressNode* node,
  VirtualAddressNode* replacement) {
  replacement->parent = node->parent;

  if (!node->parent) {
    *root = replacement;
  }
  else if (node == node->parent->left) {
    node->parent->left = replacement;
  }
  else {
    node->parent->right = replacement;
  }
}

void RotateLeft(VirtualAddressNode** root, VirtualAddressNode* node) {
  VirtualAddressNode* right = node->right;
  node->right = right->left;

  if (node->right) {
    node->right->parent = node;
  }

  ReplaceParent(root, node, right);
  right->left = node;
  node->parent = right;
}

void RotateRight(VirtualAddressNode** root, VirtualAddressNode* node) {
  VirtualAddressNode* left = node->left;
  node->left = left->right;

  if (node->left) {
    node->left->parent = node;
  }

  ReplaceParent(root, node, left);
  left->right = node;
  node->parent = left;
}

}

static_assert(sizeof(VirtualAddressNode) == 48);
static_assert(offsetof(VirtualAddressNode, red) == 24);
static_assert(offsetof(VirtualAddressNode, address) == 32);

void InsertVirtualAddressNode(VirtualAddressNode** root,
  VirtualAddressNode* node) {
  VirtualAddressNode* parent = nullptr;
  VirtualAddressNode** link = root;

  while (*link) {
    parent = *link;

    if (node->address == parent->address) {
      return;
    }

    link = node->address < parent->address ? &parent->left : &parent->right;
  }

  node->parent = parent;
  node->left = nullptr;
  node->right = nullptr;
  node->red = 1;
  *link = node;

  while (node->parent && node->parent->red == 1) {
    parent = node->parent;
    VirtualAddressNode* grandparent = parent->parent;
    bool left = parent == grandparent->left;
    VirtualAddressNode* uncle = left ? grandparent->right : grandparent->left;

    if (uncle && uncle->red == 1) {
      uncle->red = 0;
      parent->red = 0;
      grandparent->red = 1;
      node = grandparent;
      continue;
    }

    if (left) {
      if (node == parent->right) {
        RotateLeft(root, parent);
        node = parent;
        parent = node->parent;
      }

      parent->red = 0;
      grandparent->red = 1;
      RotateRight(root, grandparent);
    }
    else {
      if (node == parent->left) {
        RotateRight(root, parent);
        node = parent;
        parent = node->parent;
      }

      parent->red = 0;
      grandparent->red = 1;
      RotateLeft(root, grandparent);
    }
  }

  (*root)->red = 0;
}

}
