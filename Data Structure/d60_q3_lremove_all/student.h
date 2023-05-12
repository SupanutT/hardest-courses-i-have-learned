#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
    for (auto it=begin(); it!=end(); it++) {
        if (*it != value) continue;
        mSize--;
        it.ptr->next->prev = it.ptr->prev;
        it.ptr->prev->next = it.ptr->next;
        delete it.ptr;
    }
}

#endif
