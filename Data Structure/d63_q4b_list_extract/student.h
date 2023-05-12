#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
    int count = 0;
    for (; a!=b; a++) {
        if (*a != value) continue;
        count++;
        a.ptr->next->prev = a.ptr->prev;
        a.ptr->prev->next = a.ptr->next;
        delete a.ptr;
        mSize--;
    }
    while (count--) {
        node *tmp = new node(value, output.mHeader, output.mHeader->next);
        output.mHeader->next->prev = tmp;
        output.mHeader->next = tmp;
        output.mSize++;
    }
}

#endif
