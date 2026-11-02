#include "containers/tree.hpp"
#include "memory/heap_manager.hpp"

namespace fw::containers {
namespace {

void RotateLeft(TreeNode* node) {
  TreeNode* right = node->right;
  node->right = right->left;

  if (node->right != nullptr) {
    node->right->parent = node;
  }

  right->parent = node->parent;

  if (node == node->parent->left) {
    node->parent->left = right;
  }
  else {
    node->parent->right = right;
  }

  right->left = node;
  node->parent = right;
}

void RotateRight(TreeNode* node) {
  TreeNode* left = node->left;
  node->left = left->right;

  if (node->left != nullptr) {
    node->left->parent = node;
  }

  left->parent = node->parent;

  if (node == node->parent->left) {
    node->parent->left = left;
  }
  else {
    node->parent->right = left;
  }

  left->right = node;
  node->parent = left;
}

}

void BalanceAfterInsert(TreeNode* root, TreeNode* node) {
  node->black = node == root;

  while (node != root) {
    TreeNode* parent = node->parent;

    if ((parent->black & 1) != 0) {
      return;
    }

    TreeNode* grandparent = parent->parent;
    bool left = parent == grandparent->left;
    TreeNode* uncle = left ? grandparent->right : grandparent->left;

    if (uncle != nullptr && (uncle->black & 1) == 0) {
      parent->black = 1;
      node = grandparent;
      node->black = node == root;
      uncle->black = 1;
      continue;
    }

    if (left) {
      if (node != parent->left) {
        RotateLeft(parent);
        parent = node;
      }

      parent->black = 1;
      grandparent->black = 0;
      RotateRight(grandparent);
    }
    else {
      if (node == parent->left) {
        RotateRight(parent);
        parent = node;
      }

      parent->black = 1;
      grandparent->black = 0;
      RotateLeft(grandparent);
    }

    return;
  }
}

void DestroyStringTree(TreeNode* root) {
  if (root == nullptr) {
    return;
  }

  DestroyStringTree(root->left);
  DestroyStringTree(root->right);
  auto* node = reinterpret_cast<StringTreeNode*>(root);

  if ((node->key.words[0] & 1) != 0 && node->key.words[2] != 0) {
    memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(node->key.words[2])
    );
  }

  memory::g_heap_manager->GetAllocator(0).Free(root);
}

}
