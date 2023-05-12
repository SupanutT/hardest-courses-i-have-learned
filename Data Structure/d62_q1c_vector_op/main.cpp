#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int r;
    cin >> r;
    vector<int> v;
    for (int i=0; i < r; i++) {
        string s;
        cin >> s;
        if (s == "pb") {
            int n;
            cin >> n;
            v.push_back(n);
        } else if (s == "sa") {
            sort(v.begin(), v.end());
        } else if (s == "sd") {
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
        } else if (s == "r") {
            reverse(v.begin(), v.end());
        } else if (s == "d") {
            int i;
            cin >> i;
            v.erase(v.begin()+i);
        }
    }
    for (auto e : v) {
        cout << e << " ";
    }
}
