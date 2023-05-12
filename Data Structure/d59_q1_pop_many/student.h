#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stack>

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    if (K>mSize) K=mSize;
    mSize-=K;
    mCap = mSize;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    if (K>mSize) K=size();
    std::stack<T> tmp;
    int count = K;
    for (int i=K; i>0; i--) {
        tmp.push(mData[mSize-i]);
    }
    mSize-=count; mCap=mSize;
    return tmp;
}

#endif
