#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
    if (n==nullptr) return 0;
    return 1 + process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
    if (mSize==0) return std::pair<KeyT, MappedT>();

    left.clear();
    if (mRoot->left != nullptr) {
        left.mRoot = mRoot->left;
        left.mSize = process(mRoot->left);
        mRoot->left->parent = nullptr;
        mRoot->left = nullptr;
    }

    right.clear();
    if (mRoot->right != nullptr) {
        right.mRoot = mRoot->right;
        right.mSize = process(mRoot->right);
        mRoot->right->parent = nullptr;
        mRoot->right = nullptr;
    }
    mSize = 1;
    return mRoot->data;
}

#endif

