#include <iostream>
#include <set>

using namespace std;

int main() {

    ios::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;

    set < pair<int, int> > s;

    for (int i=0; i<n; i++) {
        int year, month;
        cin >> year >> month;

        s.insert(make_pair(year, month));
    }
    /*
    for (auto &x : s) {
        cout << x.first << " " << x.second << endl;
    }
    */

    for (int i=0; i<m; i++) {
        int year, month;
        cin >> year >> month;

        // Case.1 exact
        if (s.find(make_pair(year, month))!=s.end()) {
            cout << "0 0 ";
            continue;
        }

        // Case.2 before
        if (year < s.begin()->first) {
            cout << "-1 -1 ";
            continue;
        } else if ( (year == s.begin()->first) && (month < s.begin()->second) ) {
            cout << "-1 -1 ";
            continue;
        }

        // Case.3 after
        while (true) {
            month--;
            if (month == 0) {
                month = 12;
                year--;
            }

            // cout << year << " " << month << endl;
            if (s.find(make_pair(year, month))!=s.end()) {
                cout << year << " " << month << " ";
                break;
            }

        }

    }

}
