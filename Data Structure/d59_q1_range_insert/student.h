#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
    int count = last-first;
    T* tmp = new T[mSize+count];
    int iTmp = 0;
    for (iterator it = begin(); it<end(); it++) {
        if (it == position) {
            while(first!=last) {
                tmp[iTmp++] = *first++;
            }
        }
        tmp[iTmp++] = *it;
    }
    if (position==end()) { while(first!=last) {tmp[iTmp++] = *first++;}}
    delete[] mData;
    mData = tmp;
    mSize += count;
    mCap = mSize;
}

#endif
