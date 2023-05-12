#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
    std::vector<T> r;
    int startIndex = 0;
    int endIndex = 0;
    /*
    for (int i=0; i<mSize; i++) {
        std::cout << mData[i] << " ";
    }
    std::cout << "\n";
    */
    while(k--) {
        startIndex = (startIndex*2) + 1;
    }
    endIndex = (startIndex*2) + 1;
    /*
    std::cout << "startIndex = " << startIndex << "\n";
    std::cout << "endIndex = " << endIndex << "\n";
    */

    while(startIndex < mSize &&
          //mData[startIndex] != NULL &&
          startIndex != endIndex) {
        r.push_back(mData[startIndex++]);
    }
    std::sort(r.rbegin(), r.rend(), mLess);
    return r;
}

#endif

