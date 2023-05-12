#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
    std::sort(data.begin(), data.end());
    T* tmp = new T[mSize+data.size()];
    int iTmp = 0;
    int iData = 0;
    for (int i=0; i<=mSize; i++) {
        while (i == data[iData].first && iData<data.size()) {
            tmp[iTmp++] = data[iData].second;
            iData++;
        }
        if (i==mSize) break;
        tmp[iTmp++] = mData[i];
    }
    delete[] mData;
    mData = tmp;
    mSize += data.size();
    mCap = mSize;
}

#endif
