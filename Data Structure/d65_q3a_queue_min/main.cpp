#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
    std::sort(pos.begin(), pos.end());
    T retless;
    bool none = true;
    retless = mData[(mFront+pos[0])%mCap];
    for (int i=1; i<pos.size(); i++) {
        if (pos[i] > mSize-1) break;
        if (pos[i]==pos[i+1]) {
            while(pos[i]==pos[i+1]) {
                if (i+1==pos.size()) break;
                i++;
            }
        }
        if (comp(mData[(mFront+pos[i])%mCap], retless)) {
            retless = mData[(mFront+pos[i])%mCap];
        }
    }
    return retless;
}

#endif
