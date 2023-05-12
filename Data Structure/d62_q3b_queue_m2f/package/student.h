#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    T tmp = mData[(mFront+pos)%mCap];
    for (int i=pos; i<mSize; i++) {
        mData[(mFront+i)%mCap] = mData[(mFront+i+1)%mCap];
    }
    mData[(mFront-1+mCap)%mCap] = tmp;
    mFront = (mFront-1+mCap)%mCap;
}

#endif
/*
u 10
u 20
u 30
u 40
u 50
u 60
m 3
p
q
*/
