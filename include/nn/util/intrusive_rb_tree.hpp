#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::util {

enum IntrusiveRbTreeColor : int {
  IntrusiveRbTreeColor_Black = 0,
  IntrusiveRbTreeColor_Red = 1,
};

struct IntrusiveRbTreeNode {
  IntrusiveRbTreeNode* left;
  IntrusiveRbTreeNode* right;
  IntrusiveRbTreeNode* parent;
  int color;
};

// The balancing follows the BSD tree.h red black tree, colors and links
// included. The comparisons are inlined into every caller.
class IntrusiveRbTreeImpl {
public:
  IntrusiveRbTreeNode* root;

  bool IsEmpty() const {
    return root == nullptr;
  }

  static IntrusiveRbTreeNode* GetNext(IntrusiveRbTreeNode* node) {
    if (node->right != nullptr) {
      node = node->right;
      while (node->left != nullptr) {
        node = node->left;
      }
      return node;
    }
    IntrusiveRbTreeNode* parent = node->parent;
    while (parent != nullptr && node == parent->right) {
      node = parent;
      parent = parent->parent;
    }
    return parent;
  }

  static IntrusiveRbTreeNode* GetPrev(IntrusiveRbTreeNode* node) {
    if (node->left != nullptr) {
      node = node->left;
      while (node->right != nullptr) {
        node = node->right;
      }
      return node;
    }
    IntrusiveRbTreeNode* parent = node->parent;
    while (parent != nullptr && node == parent->left) {
      node = parent;
      parent = parent->parent;
    }
    return parent;
  }

  IntrusiveRbTreeNode* GetMin() const {
    IntrusiveRbTreeNode* node = root;
    IntrusiveRbTreeNode* min = nullptr;
    while (node != nullptr) {
      min = node;
      node = node->left;
    }
    return min;
  }

  // Returns the node with the same key, or links the new node and returns
  // null.
  template<typename Compare>
  IntrusiveRbTreeNode* Insert(IntrusiveRbTreeNode* elm, Compare compare) {
    IntrusiveRbTreeNode* parent = nullptr;
    IntrusiveRbTreeNode* node = root;
    int result = 0;
    while (node != nullptr) {
      parent = node;
      result = compare(elm, parent);
      if (result < 0) {
        node = node->left;
      }
      else if (result > 0) {
        node = node->right;
      }
      else {
        return node;
      }
    }
    elm->parent = parent;
    elm->left = nullptr;
    elm->right = nullptr;
    elm->color = IntrusiveRbTreeColor_Red;
    if (parent != nullptr) {
      if (result < 0) {
        parent->left = elm;
      }
      else {
        parent->right = elm;
      }
    }
    else {
      root = elm;
    }
    InsertColor(elm);
    return nullptr;
  }

  template<typename Compare>
  IntrusiveRbTreeNode* Find(Compare compare) const {
    IntrusiveRbTreeNode* node = root;
    while (node != nullptr) {
      int result = compare(node);
      if (result < 0) {
        node = node->left;
      }
      else if (result > 0) {
        node = node->right;
      }
      else {
        return node;
      }
    }
    return nullptr;
  }

  // Returns the first node not below the key.
  template<typename Compare>
  IntrusiveRbTreeNode* FindNotLess(Compare compare) const {
    IntrusiveRbTreeNode* node = root;
    IntrusiveRbTreeNode* found = nullptr;
    while (node != nullptr) {
      int result = compare(node);
      if (result < 0) {
        found = node;
        node = node->left;
      }
      else if (result > 0) {
        node = node->right;
      }
      else {
        return node;
      }
    }
    return found;
  }

  void RotateLeft(IntrusiveRbTreeNode* elm) {
    IntrusiveRbTreeNode* tmp = elm->right;
    if ((elm->right = tmp->left) != nullptr) {
      tmp->left->parent = elm;
    }
    if ((tmp->parent = elm->parent) != nullptr) {
      if (elm == elm->parent->left) {
        elm->parent->left = tmp;
      }
      else {
        elm->parent->right = tmp;
      }
    }
    else {
      root = tmp;
    }
    tmp->left = elm;
    elm->parent = tmp;
  }

  void RotateRight(IntrusiveRbTreeNode* elm) {
    IntrusiveRbTreeNode* tmp = elm->left;
    if ((elm->left = tmp->right) != nullptr) {
      tmp->right->parent = elm;
    }
    if ((tmp->parent = elm->parent) != nullptr) {
      if (elm == elm->parent->left) {
        elm->parent->left = tmp;
      }
      else {
        elm->parent->right = tmp;
      }
    }
    else {
      root = tmp;
    }
    tmp->right = elm;
    elm->parent = tmp;
  }

  [[gnu::noinline]] void InsertColor(IntrusiveRbTreeNode* elm);
  [[gnu::noinline]] IntrusiveRbTreeNode* Remove(IntrusiveRbTreeNode* elm);
  [[gnu::noinline]] void RemoveColor(IntrusiveRbTreeNode* parent,
    IntrusiveRbTreeNode* elm);
};

inline void IntrusiveRbTreeImpl::InsertColor(IntrusiveRbTreeNode* elm) {
  IntrusiveRbTreeNode* parent;
  while ((parent = elm->parent) != nullptr &&
    parent->color == IntrusiveRbTreeColor_Red) {
    IntrusiveRbTreeNode* gparent = parent->parent;
    if (parent == gparent->left) {
      IntrusiveRbTreeNode* tmp = gparent->right;
      if (tmp != nullptr && tmp->color == IntrusiveRbTreeColor_Red) {
        tmp->color = IntrusiveRbTreeColor_Black;
        parent->color = IntrusiveRbTreeColor_Black;
        gparent->color = IntrusiveRbTreeColor_Red;
        elm = gparent;
        continue;
      }
      if (parent->right == elm) {
        RotateLeft(parent);
        tmp = parent;
        parent = elm;
        elm = tmp;
      }
      parent->color = IntrusiveRbTreeColor_Black;
      gparent->color = IntrusiveRbTreeColor_Red;
      RotateRight(gparent);
    }
    else {
      IntrusiveRbTreeNode* tmp = gparent->left;
      if (tmp != nullptr && tmp->color == IntrusiveRbTreeColor_Red) {
        tmp->color = IntrusiveRbTreeColor_Black;
        parent->color = IntrusiveRbTreeColor_Black;
        gparent->color = IntrusiveRbTreeColor_Red;
        elm = gparent;
        continue;
      }
      if (parent->left == elm) {
        RotateRight(parent);
        tmp = parent;
        parent = elm;
        elm = tmp;
      }
      parent->color = IntrusiveRbTreeColor_Black;
      gparent->color = IntrusiveRbTreeColor_Red;
      RotateLeft(gparent);
    }
  }
  root->color = IntrusiveRbTreeColor_Black;
}

inline IntrusiveRbTreeNode* IntrusiveRbTreeImpl::Remove(
  IntrusiveRbTreeNode* elm) {
  IntrusiveRbTreeNode* old = elm;
  IntrusiveRbTreeNode* child;
  IntrusiveRbTreeNode* parent;
  int color;
  if (elm->left == nullptr) {
    child = elm->right;
  }
  else if (elm->right == nullptr) {
    child = elm->left;
  }
  else {
    IntrusiveRbTreeNode* left;
    elm = elm->right;
    while ((left = elm->left) != nullptr) {
      elm = left;
    }
    child = elm->right;
    parent = elm->parent;
    color = elm->color;
    if (child != nullptr) {
      child->parent = parent;
    }
    if (parent != nullptr) {
      if (parent->left == elm) {
        parent->left = child;
      }
      else {
        parent->right = child;
      }
    }
    else {
      root = child;
    }
    if (elm->parent == old) {
      parent = elm;
    }
    *elm = *old;
    if (old->parent != nullptr) {
      if (old->parent->left == old) {
        old->parent->left = elm;
      }
      else {
        old->parent->right = elm;
      }
    }
    else {
      root = elm;
    }
    old->left->parent = elm;
    if (old->right != nullptr) {
      old->right->parent = elm;
    }
    goto color;
  }
  parent = elm->parent;
  color = elm->color;
  if (child != nullptr) {
    child->parent = parent;
  }
  if (parent != nullptr) {
    if (parent->left == elm) {
      parent->left = child;
    }
    else {
      parent->right = child;
    }
  }
  else {
    root = child;
  }
color:
  if (color == IntrusiveRbTreeColor_Black) {
    RemoveColor(parent, child);
  }
  return old;
}

inline void IntrusiveRbTreeImpl::RemoveColor(IntrusiveRbTreeNode* parent,
  IntrusiveRbTreeNode* elm) {
  IntrusiveRbTreeNode* tmp;
  while ((elm == nullptr || elm->color == IntrusiveRbTreeColor_Black) &&
    elm != root) {
    if (parent->left == elm) {
      tmp = parent->right;
      if (tmp->color == IntrusiveRbTreeColor_Red) {
        tmp->color = IntrusiveRbTreeColor_Black;
        parent->color = IntrusiveRbTreeColor_Red;
        RotateLeft(parent);
        tmp = parent->right;
      }
      if ((tmp->left == nullptr ||
        tmp->left->color == IntrusiveRbTreeColor_Black) &&
        (tmp->right == nullptr ||
        tmp->right->color == IntrusiveRbTreeColor_Black)) {
        tmp->color = IntrusiveRbTreeColor_Red;
        elm = parent;
        parent = elm->parent;
      }
      else {
        if (tmp->right == nullptr ||
          tmp->right->color == IntrusiveRbTreeColor_Black) {
          IntrusiveRbTreeNode* oleft = tmp->left;
          if (oleft != nullptr) {
            oleft->color = IntrusiveRbTreeColor_Black;
          }
          tmp->color = IntrusiveRbTreeColor_Red;
          RotateRight(tmp);
          tmp = parent->right;
        }
        tmp->color = parent->color;
        parent->color = IntrusiveRbTreeColor_Black;
        if (tmp->right != nullptr) {
          tmp->right->color = IntrusiveRbTreeColor_Black;
        }
        RotateLeft(parent);
        elm = root;
        break;
      }
    }
    else {
      tmp = parent->left;
      if (tmp->color == IntrusiveRbTreeColor_Red) {
        tmp->color = IntrusiveRbTreeColor_Black;
        parent->color = IntrusiveRbTreeColor_Red;
        RotateRight(parent);
        tmp = parent->left;
      }
      if ((tmp->left == nullptr ||
        tmp->left->color == IntrusiveRbTreeColor_Black) &&
        (tmp->right == nullptr ||
        tmp->right->color == IntrusiveRbTreeColor_Black)) {
        tmp->color = IntrusiveRbTreeColor_Red;
        elm = parent;
        parent = elm->parent;
      }
      else {
        if (tmp->left == nullptr ||
          tmp->left->color == IntrusiveRbTreeColor_Black) {
          IntrusiveRbTreeNode* oright = tmp->right;
          if (oright != nullptr) {
            oright->color = IntrusiveRbTreeColor_Black;
          }
          tmp->color = IntrusiveRbTreeColor_Red;
          RotateLeft(tmp);
          tmp = parent->left;
        }
        tmp->color = parent->color;
        parent->color = IntrusiveRbTreeColor_Black;
        if (tmp->left != nullptr) {
          tmp->left->color = IntrusiveRbTreeColor_Black;
        }
        RotateRight(parent);
        elm = root;
        break;
      }
    }
  }
  if (elm != nullptr) {
    elm->color = IntrusiveRbTreeColor_Black;
  }
}

}
