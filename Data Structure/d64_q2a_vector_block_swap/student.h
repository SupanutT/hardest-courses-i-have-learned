#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    if (a<begin() || a+m-1>=end()) return false;
    if (b<begin() || b+m-1>=end()) return false;
    if (a==b) return false;
    if (m==0) return false;
    if (b-a<m) return false;
    if (a-b<m) return false;

    while(m--) {
        std::swap(*a, *b); a++; b++;
    }
    return true;

}

#endif
