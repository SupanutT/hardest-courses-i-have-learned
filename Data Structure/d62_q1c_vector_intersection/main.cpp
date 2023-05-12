#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int N, M, c;
    set<int> s1, s2;
    cin >> N >> M;
    for (int i=0; i < N; i++) {
        cin >> c;
        s1.insert(c);
    }

    for (int i=0; i < M; i++) {
        cin >> c;
        if (s1.find(c) != s1.end()){
            s2.insert(c);
        }
    }
    for (auto &x : s2) {
        cout << x << " ";
    }
}
