#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
    CP::map_bst<KeyT,MappedT,CompareT> result;
    node* curr = mRoot;
    node* ThisTmp = NULL;
    node* OtherTmp = NULL;
    mRoot = NULL;
    while(curr) {
        if (mLess(now->data.first, val)) {
            if (mRoot == nullptr) {
                mRoot = now;
                mRoot->parent = nullptr;
            } else if (mLess(Thistmp->data.first, now->data.first)) {
                ThisTmp->right = now;

            }
        } else {
            if (OtherTmp == nullptr) {
                result.mRoot = now;
                result.mRoot->parent = nullptr;
            }
            else if ()


        }
    }




    return result;
}

#endif
