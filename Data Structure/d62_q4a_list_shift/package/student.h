#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
    mHeader->next->prev = mHeader->prev;
    mHeader->prev->next = mHeader->next;
    mHeader->prev = mHeader->next;
    mHeader->next = mHeader->next->next;
    mHeader->prev->next = mHeader;
    mHeader->next->prev = mHeader;
}

#endif
