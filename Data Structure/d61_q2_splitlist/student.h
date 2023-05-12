void splitList(list<T>& list1, list<T>& list2) {
    iterator it = begin();
    int i=0;
    for (;i < mSize - mSize/2; i++) {
        it++;
    }

    mHeader->next->prev = list1.mHeader->prev;
    it.ptr->prev->next = list1.mHeader;
    list1.mHeader->prev->next = mHeader->next;
    list1.mHeader->prev = it.ptr->prev;
    list1.mSize += i;

    it.ptr->prev = list2.mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mHeader->prev->next = it.ptr;
    list2.mHeader->prev = mHeader->prev;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
