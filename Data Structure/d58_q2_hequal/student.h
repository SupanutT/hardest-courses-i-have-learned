#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
    if (mSize != other.mSize) return false;
    CP::priority_queue<T, Comp> q1(*this);
    CP::priority_queue<T, Comp> q2(other);

    for(int i=0; i<mSize; i++) {
        if (q1.top() != q2.top()) return false;
        q1.pop(); q2.pop();
    }
    return true;
}

#endif
