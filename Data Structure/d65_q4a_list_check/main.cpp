#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
    int count = 0;
    if (mSize == 0) {
        if (mHeader->next == mHeader && mHeader->prev == mHeader) return true;
    }
    if (mHeader->next == mHeader && mSize != 0) return false;
    if (mHeader->prev == mHeader && mSize != 0) return false;

    if (mHeader->next->prev != mHeader) return false;
    if (mHeader->prev->next != mHeader) return false;

    if (mHeader->next->data == NULL) return false;
    if (mHeader->prev->data == NULL) return false;

    if (mHeader->next == nullptr) return false;
    if (mHeader->prev == nullptr) return false;

    for (auto it=begin(); it!=end(); it++, count++) {
        if (it.ptr->next == nullptr) return false;
        if (it.ptr->next->prev != it.ptr) return false;
        if (it.ptr->prev->next != it.ptr) return false;
    }
    if (count != mSize) return false;
    return true;
}


#endif
