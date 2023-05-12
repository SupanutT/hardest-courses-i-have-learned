#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
    for(int i=0; i<mSize; i++) {if (mData[i]==k) return true;}
    return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
    int index = -1;
    for(int i=0; i<mSize; i++) {
        if (mData[i] == k) index = i;
    }
    if (index == -1) return -1;
    return log(index+1)/log(2);
}

#endif

