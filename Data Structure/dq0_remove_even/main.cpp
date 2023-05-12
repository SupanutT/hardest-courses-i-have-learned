#include <iostream>
#include <vector>

using namespace std;

void remove_even(vector<int> &v, int a, int b) {
    if (a%2 != 0) a++;
    // cout << a;
    for (int i=a, c=v.size(); i < a+(b-a)/2 + 1; i++, c--) {
        // cout << i << endl;
        for (int j=i; j<c-1; j++) {
            v[j]=v[j+1];
        }
        v.pop_back();
    }
}

int main() {
    //read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;

    //call function
    remove_even(v, a, b);

    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
