#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, c;
    cin >> N >> M;

    vector<int> v1, result;

    for (int i=0; i < N; i++) {
        cin >> c;
        v1.push_back(c);
    }

    sort(v1.begin(), v1.end());

    for (int i=0; i < M; i++) {
        cin >> c;
        if (find(v1.begin(), v1.end(), c) != v1.end()){
            if (find(result.begin(), result.end(), c) == result.end()) {
                    result.push_back(c);
            }
        }
    }
    sort(result.begin(), result.end());
    for (auto &x : result){
        cout << x << " ";
    }

}
