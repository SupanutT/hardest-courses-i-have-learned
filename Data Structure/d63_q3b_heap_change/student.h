#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <assert.h>

template <typename T,typename Comp>
void CP::priority_queue<T,Comp>::change_value(size_t pos,const T& value) {
    T tmp = mData[pos];
    mData[pos] = value;
    mData[mSize] = tmp;
    if (pos != 0 && mData[pos] > mData[(pos-1)/2]) fixUp(pos);
    else fixDown(pos);
}

#endif
