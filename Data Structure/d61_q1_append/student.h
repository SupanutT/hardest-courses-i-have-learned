#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *tmp = new T[mSize+s.size()]();
        int i = 0;
        for (; i<s.size(); i++) {
            tmp[i] = s.mData[i];
        }
        int imData = 0;
        for (; i<mSize+s.size(); i++) {
            tmp[i] = mData[imData];
            imData++;
        }
        delete[] mData;
        mData = tmp;
        mSize += s.size();
        mCap = mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *tmp = new T[mSize+q.size()]();
        int i = 0;

        int iqmData = (q.mFront + q.mSize + q.mCap - 1) % q.mCap;

        for (; i<q.size(); i++) {
            tmp[i] = q.mData[iqmData];
            iqmData = (iqmData - 1 +q.mCap) % q.mCap;
        }

        int imData = 0;

        for (; i<mSize+q.size(); i++) {
            tmp[i] = mData[imData];
            imData++;
        }
        delete[] mData;
        mData = tmp;
        mSize += q.size();
        mCap = mSize;

    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        int ismData = s.size();

        while(ismData--) {
            this->push(s.mData[ismData]);
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        int iqmData = q.mFront;

        for (int i=0; i<q.size(); i++) {
            this->push(q.mData[iqmData]);
            iqmData = (iqmData + 1 + q.mCap) % q.mCap;
        }
    }
}
