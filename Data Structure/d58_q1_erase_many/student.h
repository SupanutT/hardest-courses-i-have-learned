#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    int iTmp = 0;
    int iPos = 0;
    T* tmp = new T[mSize-pos.size()];
    for (int i=0; i<mSize; i++) {
        if (i==pos[iPos]) {iPos++; continue;}
        tmp[iTmp++] = mData[i];
    }
    delete[] mData;
    mData = tmp;
    mSize -= pos.size();
    mCap = mSize;

}

#endif
/*
a 10 0 1 2 3 4 5 6 7 8 9
p
e 1 1
p
e 5 0 2 3 4 6
p
a 3 100 200 300
p
q
*/
