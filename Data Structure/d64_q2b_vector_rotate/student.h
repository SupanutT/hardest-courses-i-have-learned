#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    if (k==0) return;
    int count = last-first;
    int pos = first-begin();
    T* tmp = new T[count];
    int iTmp = 0;
    while (first!=last) {
        tmp[iTmp++] = *first++;
    }
    iTmp = 0;
    for (int i=0; i<count; i++) {
        mData[pos++] = tmp[(iTmp+k+count)%count];iTmp++;
    }
}

#endif
// 6 2 5 2 0 1 2 3 4 5
// 8 0 8 0 0 1 2 3 4 5 6 7
// 8 0 8 3 0 1 2 3 4 5 6 7
