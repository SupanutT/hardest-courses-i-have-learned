#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    vector <int> v;
    int n, m, k;
    cin >> n >> m >> k;

    for (int i=0; i<n; i++) {
        int c;
        cin >> c;
        v.emplace_back(c);
    }

    sort(v.begin(), v.end());

    for (int i=0; i<m; i++) {
        int c;
        cin >> c;

        if (c-k > v[v.size()-1]) {
            cout << "0 ";
            continue;
        }

        if (c+k < v[0]) {
            cout << "0 ";
            continue;
        }
        auto it1 = lower_bound(v.begin(), v.end(), max(0, c-k));
        auto it2 = upper_bound(v.begin(), v.end(), c+k);

        cout << it2-it1 << " ";

    }

}
