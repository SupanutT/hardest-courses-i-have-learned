#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void member_multiply(vector<int> &v,
                     vector<pair<vector<int>::iterator,int>> &multiply) {
//20:50
    vector<int> tmp;

    sort(multiply.begin(), multiply.end());

    int iMultiply = 0;

    for (int i=0; i<v.size(); i++) {
        if (multiply[iMultiply].first == v.begin()+i) {
            tmp.push_back(v[i]);
            for (int j=0; j<multiply[iMultiply].second; j++) {
                tmp.push_back(v[i]);
            }
            iMultiply++;
        } else {
            tmp.push_back(v[i]);
        }
    }
    v = tmp;

}
// 5 2 10 20 30 40 50 1 1 4 2
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
    int a,b;
    cin >> a >> b;
    multiply[i].first = v.begin()+a;
    multiply[i].second = b;
    }
    member_multiply(v,multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
