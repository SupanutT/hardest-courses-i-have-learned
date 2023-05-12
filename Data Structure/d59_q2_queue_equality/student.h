#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
    if (this->mSize != other.mSize) return false;
    int imData = mFront;
    int iOthermData = other.mFront;

    for (int i=0; i<mSize; i++) {
        if (mData[imData] != other.mData[iOthermData]) return false;
        imData = (imData + 1 + mCap) % mCap;
        iOthermData = (iOthermData + 1 + other.mCap) % other.mCap;
    }
    return true;
}

#endif
