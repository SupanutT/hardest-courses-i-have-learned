void replace(const T& x, list<T>& y) {
    for (iterator it = begin(); it!=end(); ) {
        if (*it!=x) {it++;continue;}

        /*
        list<T> tmp = y;
        tmp.mHeader->prev->next = it.ptr->next;
        it.ptr->next->prev = tmp.mHeader->prev;
        it.ptr->prev->next = tmp.mHeader->next;
        it.ptr->next->prev = it.ptr;
        */

        it = erase(it);
        for (auto x : y) {
            insert(it, x);
        }
    }
}
