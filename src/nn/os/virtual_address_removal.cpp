#include "nn/os/virtual_address_removal.hpp"
#include "nn/lmem/unit_heap_free.hpp"

namespace nn::os::detail {
namespace {

bool IsBlack(const VirtualAddressNode* node) {
  return !node || node->red == 0;
}

void ReplaceChild(VirtualAddressNode** root, VirtualAddressNode* node,
  VirtualAddressNode* replacement) {
  if (replacement) {
    replacement->parent = node->parent;
  }

  if (!node->parent) {
    *root = replacement;
  }
  else if (node->parent->left == node) {
    node->parent->left = replacement;
  }
  else {
    node->parent->right = replacement;
  }
}

void RotateLeft(VirtualAddressNode** root, VirtualAddressNode* node) {
  VirtualAddressNode* right = node->right;
  node->right = right->left;

  if (right->left) {
    right->left->parent = node;
  }

  ReplaceChild(root, node, right);
  right->left = node;
  node->parent = right;
}

void RotateRight(VirtualAddressNode** root, VirtualAddressNode* node) {
  VirtualAddressNode* left = node->left;
  node->left = left->right;

  if (left->right) {
    left->right->parent = node;
  }

  ReplaceChild(root, node, left);
  left->right = node;
  node->parent = left;
}

void RepairRemoval(VirtualAddressNode** root, VirtualAddressNode* node,
  VirtualAddressNode* parent) {
  while (IsBlack(node) && node != *root) {
    bool left = parent->left == node;
    VirtualAddressNode* sibling = left ? parent->right : parent->left;

    if (sibling->red == 1) {
      sibling->red = 0;
      parent->red = 1;

      if (left) {
        RotateLeft(root, parent);
      }
      else {
        RotateRight(root, parent);
      }

      sibling = left ? parent->right : parent->left;
    }

    if (IsBlack(sibling->left) && IsBlack(sibling->right)) {
      sibling->red = 1;
      node = parent;
      parent = parent->parent;
      continue;
    }

    if (left) {
      if (IsBlack(sibling->right)) {
        sibling->left->red = 0;
        sibling->red = 1;
        RotateRight(root, sibling);
        sibling = parent->right;
      }

      sibling->red = parent->red;
      parent->red = 0;

      if (sibling->right) {
        sibling->right->red = 0;
      }

      RotateLeft(root, parent);
    }
    else {
      if (IsBlack(sibling->left)) {
        sibling->right->red = 0;
        sibling->red = 1;
        RotateLeft(root, sibling);
        sibling = parent->left;
      }

      sibling->red = parent->red;
      parent->red = 0;

      if (sibling->left) {
        sibling->left->red = 0;
      }

      RotateRight(root, parent);
    }

    node = *root;
    break;
  }

  if (node) {
    node->red = 0;
  }
}

}

void RemoveVirtualAddressNode(VirtualAddressMemoryImplementation* memory,
  VirtualAddressNode* node) {
  VirtualAddressNode* detached = node;

  if (node->left && node->right) {
    detached = node->right;

    while (detached->left) {
      detached = detached->left;
    }
  }

  VirtualAddressNode* child = detached->left ? detached->left : detached->right;
  VirtualAddressNode* parent = detached->parent;
  uint32_t removed_red = detached->red;
  ReplaceChild(&memory->root, detached, child);

  if (detached != node) {
    if (parent == node) {
      parent = detached;
    }

    // The original copies the header after detaching, including its padding.
    detached->left = node->left;
    detached->right = node->right;
    detached->parent = node->parent;
    detached->red = node->red;
    detached->reserved1c = node->reserved1c;
    ReplaceChild(&memory->root, node, detached);
    node->left->parent = detached;

    if (node->right) {
      node->right->parent = detached;
    }
  }

  if (!removed_red) {
    RepairRemoval(&memory->root, child, parent);
  }

  lmem::FreeToUnitHeap(memory->allocator.heap, node);
}

}
