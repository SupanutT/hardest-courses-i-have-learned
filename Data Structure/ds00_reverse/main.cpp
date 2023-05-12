#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v, int a, int b) {
    for (int i=a, j=b; i < j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        // cout << i << " " << j << endl;
    }
}

int main() {
    //read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;

    //call function
    reverse(v, a, b);

    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}
