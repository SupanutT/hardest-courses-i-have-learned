#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {

    mSize = 0;
    auto it = first;
    while(it!=last) {
        mSize++; it++;
    }

    T* tmp = new T[mSize]();

    it = first;
    for (int i=mSize-1; it!=last; i--, it++) {
        tmp[i] = *it;
    }

    delete[] mData;
    mData = tmp;
    mCap = mSize;

}

#endif
