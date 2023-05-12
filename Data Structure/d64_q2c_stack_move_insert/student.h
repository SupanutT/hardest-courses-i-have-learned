#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    if (m > s2.size()) m = s2.size();
    k = mSize - k-1;
    T* tmp = new T[mSize + m]();
    for (int i=0, j=0; i<mSize; i++) {
        if (i==k) {
            for (; j<m; j++) {
                tmp[i+m-j-1] = s2.top();
                s2.pop();
            }
        }
        tmp[i+j] = mData[i];
    }
    delete[] mData;
    mData = tmp;
    mSize -= m;
    mCap = mSize;


// 30 20 5 4 3 2 1, 10
}
#endif
/*
#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    CP::stack<T> tmp;

    for (int i=0; i<k; i++) {
        tmp.push(this->top());
        this->pop();
    }

    if (s2.size() < m) m = s2.size();

    for (int i=0; i<m; i++) {
        this->push(s2.mData[s2.size()-m+i]);
    }

    while (!tmp.empty()) {
        this->push(tmp.top());
        tmp.pop();
    }

    s2.mSize -= m;
}
#endif
// 5 3 0 2 1 2 3 4 5 10 20 30
*/
