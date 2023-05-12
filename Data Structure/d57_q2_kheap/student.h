#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while(idx > 0) {
        size_t pos = (idx-1) / 4;
        if (mLess(tmp, mData[pos])) break;
        mData[idx] = mData[pos];
        idx = pos;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c;
    size_t toAdd;
    while((c = 4*idx + 1) < mSize) {
        toAdd = c;
        if (c+1 < mSize && mLess(mData[toAdd], mData[c+1])) toAdd = c+1;
        if (c+2 < mSize && mLess(mData[toAdd], mData[c+2])) toAdd = c+2;
        if (c+3 < mSize && mLess(mData[toAdd], mData[c+3])) toAdd = c+3;
        if (mLess(mData[toAdd], tmp)) break;
        mData[idx] = mData[toAdd];
        idx = toAdd;
    }
    mData[idx] = tmp;
}

#endif

