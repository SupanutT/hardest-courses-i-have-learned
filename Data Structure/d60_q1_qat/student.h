#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    int realIndex = 0;
    if (idx<0) {
        realIndex = (mFront + mSize + idx + mCap) % mCap;
    } else {
        realIndex = (mFront + idx + mCap) % mCap;
    }

    return mData[realIndex];

}

#endif
/*
a 10
a 20
a 30
a 40
a 50
p
k 0
k 1
k -1
d
d
p
k 0
k 1
k -1
q

*/
