#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    int qsize = mSize;

    for (int i=0; i<k; i++) {
        CP::queue<T> q;
        for (int j=0; j<qsize/k+1; j++) {
            if (j*k+i >= qsize) break;
            q.push(mData[(j*k+i+mFront+mCap)%mCap]);
        }
        qs[i] = q;
    }
    mFront = 0;
    mSize = 0;
    mCap = 0;
    return qs;
}

#endif

