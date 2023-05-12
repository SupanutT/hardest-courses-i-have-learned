#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    bool b[100000] = {false};
    vector<T> v(A);
    for (auto &x : A) {
        b[x] = true;
    }
    for (auto &x : B) {
        if (b[x]) continue;
        v.push_back(x);
    }
    return v;

}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    bool b[100000] = {false};
    vector<T> v;
    for (auto &x : B) {
        b[x] = true;
    }
    for (auto &x : A) {
        if (b[x]) v.push_back(x);
    }
    return v;
}
