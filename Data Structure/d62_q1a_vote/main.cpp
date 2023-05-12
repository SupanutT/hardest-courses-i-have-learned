#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

bool sortbysec(const pair<string, int> &a,
               const pair<string, int> &b){
    return (a.second > b.second);
}

int main() {

    int K, N;
    string name;
    map <string, int> m;

    cin >> N >> K;

    for (int i=0; i < N; i++) {
        cin >> name;
        m[name]++;
    }

    // Sort map
    vector < pair<string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), sortbysec);
/*
    for (auto &x : v) {
        cout << x.first << " " << x.second << endl;
    }*/
    int i,vs=v.size();
    i = min(vs, K);
    cout << v[i-1].second;
}
