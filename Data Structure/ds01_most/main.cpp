#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, j=0;
    cin >> N;
    map<string,int> m;
    for (int i=0; i < N; i++) {
        string s;
        cin >> s;
        m[s]++;
    }
    pair<string,int> p;
    for (auto &x: m) {
        if (x.second > j) {
            j = x.second;
            p = x;
        }
    }
    cout << p.first << " " << p.second;
}
