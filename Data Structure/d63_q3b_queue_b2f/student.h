#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
    if (mSize==0) return;
    mData[(mFront-1+mCap)%mCap] = back();
    mFront = (mFront-1+mCap)%mCap;
}

#endif
