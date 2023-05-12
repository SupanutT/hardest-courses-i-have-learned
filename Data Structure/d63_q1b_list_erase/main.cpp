#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
void list_erase(vector<int> &v,
                vector<int> &pos) {
    vector<int> u;
    sort(pos.begin(), pos.end());
    auto it = pos.begin();
    for (int i=0; i<v.size(); i++) {
        if (i!=*it) u.push_back(v[i]);
        else it++;
    }
    v = u;


}
int main() {
    std::ios_base::sync_with_stdio(false); cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<m; i++) cin >> pos[i];

    list_erase(v, pos);

    cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}
