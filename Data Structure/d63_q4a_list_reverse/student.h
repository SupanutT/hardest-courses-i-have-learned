#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    if (a==b) return a;
    b--;
    iterator returnIt = a;
    for (; a!=b; b--) {
        std::swap(*a, *b);
        if (++a == b) return returnIt;
    }
    return returnIt;
}

#endif
