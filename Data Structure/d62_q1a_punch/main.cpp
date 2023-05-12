#include <iostream>
#include <vector>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it, int k){
    // write some code here
    // don't forget to return something
    int i = it - v.begin();
    int i1 = max(i-k, 0);
    int i2 = min((int)v.size(), i+k+1);
    // cout << i1 << " " << i2 << endl;
    v.erase(v.begin()+i1, v.begin()+i2);
    return v;
}

int main() {
    int n, j ,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i=0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}
