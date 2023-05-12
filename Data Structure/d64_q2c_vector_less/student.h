#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
    if (mSize==0 && other.mSize!=0) return true;

    for (int i=0; i<mSize; i++) {
        if (mData[i] == other.mData[i]) continue;
        if (i==other.mSize) return false;
        if (mData[i] < other.mData[i]) return true;
        if (mData[i] > other.mData[i]) return false;
    }
    return false;

}

#endif
