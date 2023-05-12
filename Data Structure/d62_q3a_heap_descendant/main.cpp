#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    //cout << log2(8);
    vector<int> v;
    queue<int> qodd, qeven;
    int a, n;

    cin >> n >> a;
    qodd.push(a);
    v.push_back(a);
    for (int i=0; i<log2(n+1)/2; i++) {
        //cout << qodd.size();
        while(!qodd.empty()) {
            int tmp = qodd.front();
            int lc = (tmp*2) + 1;
            int rc = (tmp*2) + 2;
            if (lc >= n) break;
            else {
                //cout << "1 -> " << lc << "\n";
                v.push_back(lc);
                qeven.push(lc);
            }
            qodd.pop();
            if (rc >= n) break;
            else {
                //cout << "2 -> " << rc << "\n";
                v.push_back(rc);
                qeven.push(rc);
            }
        //cout << i << endl;
        }
        while(!qeven.empty()) {
            int tmp = qeven.front();
            int lc = (tmp*2) + 1;
            int rc = (tmp*2) + 2;
            if (lc >= n) break;
            else {
                //cout << "3 -> " << rc << "\n";
                v.push_back(lc);
                qodd.push(lc);
            }
            qeven.pop();

            if (rc >= n) break;
            else {
                //cout << "4 -> " << rc << "\n";
                v.push_back(rc);
                qodd.push(rc);
            }
        }
    }

    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(auto &x : v) cout << x << " ";
}
