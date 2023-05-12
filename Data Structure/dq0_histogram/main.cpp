#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;
    set<string> s;
    map<string, int> m;
    for (int i=0; i<N; i++) {
        string c;
        cin >> c;
        if (s.find(c)!=s.end()) m[c]++;
        else s.insert(c);
    }

    for (auto &x : m) cout << x.first << " " << x.second << "\n";
}
