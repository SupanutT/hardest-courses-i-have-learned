#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m;

    cin >> n >> m;

    map <int, int> ma;

    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        ma[a] = b;
    }

    for (int i=0; i<m; i++) {
        int c;
        cin >> c;
        auto it = ma.lower_bound(c);
        //cout << c << " " << it->first << " " << it->second << endl;
        if (it->first == c) {
            cout << "1 ";
            continue;
        }

        if (it==ma.end() & ma.rbegin()->second >= c) {
            cout << "1 ";
            continue;
        }

        it--;

        if (it->second >= c & it->first <= c) {
            cout << "1 ";
            continue;
        }

        else cout << "0 ";
    }
}
