#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {

    std::vector<std::vector<T>> v(k);
    int condition = mSize % k;
    int imData = mSize - 1;

    for (int i=0; i<k; i++) {
        std::vector<T> tmp;
        int tmpSize = mSize / k;

        if (condition != 0) {
            tmpSize++;
            condition--;
        }

        for (int j=0; j<tmpSize; j++) {
            tmp.push_back(mData[imData]);
            imData--;
        }

        v[i] = tmp;
    }

    return v;
}
#endif
