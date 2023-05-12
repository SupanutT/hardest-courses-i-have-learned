#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
    if (k==1) return mData[0];
    if (k==2) return mLess(mData[1], mData[2]) ? mData[2] : mData[1];
    if (mLess(mData[1], mData[2])) {
        T tmp = mData[1];
        if (tmp < mData[5]) tmp = mData[5];
        if (tmp < mData[6]) tmp = mData[6];
        return tmp;
    }
    T tmp = mData[2];
    if (tmp < mData[3]) tmp = mData[3];
    if (tmp < mData[4]) tmp = mData[4];
    return tmp;
}

#endif
