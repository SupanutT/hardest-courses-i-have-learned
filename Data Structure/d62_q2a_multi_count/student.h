#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    std::vector<std::pair<T,size_t>> v;
    std::map<T, int> m;
    for (int i=0; i<mSize; i++) {
        m[mData[(mFront+i)%mCap]]++;
    }
    for (auto &x : k) {
        v.push_back(std::make_pair(x, m[x]));
    }
    return v;
}

#endif
