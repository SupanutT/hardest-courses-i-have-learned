#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
    std::vector<T> res;
    if (k > mSize) k = mSize;
    int imData = mFront;

    while (k--) {
        res.push_back(mData[imData]);
        imData = (imData + 1 + mCap) % mCap;
    }

    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
    mData = new T[to-from];
    mSize = to-from+1;
    mCap = mSize;
    mFront = 0;
    int imData = 0;

    while (from != to) {
        mData[imData++] = *from;
        from++;
    }
}

#endif
