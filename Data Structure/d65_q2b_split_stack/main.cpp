#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
#include <cmath>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
    std::vector<std::vector<T>> v;
    int count = mSize/k;
    int i=0;

    for (int j=0; j<k; j++) {
        std::vector<T> tmp;
        for (int z=0; z<count+1; z++) {
            if (mSize-1-(z*k)-j <0 || mSize-1-(z*k)-j >=mSize) break;
            //std::cout<<"value = " <<mSize-1-(z*k)-j <<"\n";
            tmp.push_back(mData[mSize-1-(z*k)-j]);
        }
        std::reverse(tmp.begin(), tmp.end());
        v.push_back(tmp);
    }
    return v;
}

#endif
