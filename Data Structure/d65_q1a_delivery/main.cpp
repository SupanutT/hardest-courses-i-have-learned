#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, total=0;
    cin >> n >> m;

    queue <int> tq;

    // add target sell into queue
    for (int i=0; i<m; i++){
        int c;
        cin >> c;
        tq.push(c);
    }

    queue <int> q1, q2;
    vector <int> v;

    // receive order and cook
    for (int i=0; i<n; i++) {
        int c;
        cin >> c;

        // receive order
        if (c == 1) {
            int app, price;
            cin >> app >> price;

            if (app == 1) {
                q1.push(price);
            }

            if (app == 2) {
                q2.push(price);
            }

        }

        if (c == 2) {

            if (q1.empty()) {
                total += q2.front();
                q2.pop();
            } else if (q2.empty()) {
                total += q1.front();
                q1.pop();
            } else if (q1.front() <= q2.front()) {
                total += q1.front();
                q1.pop();
            } else {
                total += q2.front();
                q2.pop();
            }

            v.push_back(total);
        }

    }

    while (!tq.empty()) {
        int target;
        target = tq.front();
        tq.pop();
        if (target > total) {
            cout << "-1 ";
            continue;
        }

        cout << lower_bound(v.begin(), v.end(), target) - v.begin() + 1 << " ";
    }

}
