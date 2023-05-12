#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while(m--) {
        int a, b;
        //bool found = false;
        cin >> a >> b;
        if (a==b) cout << "a and b are the same node\n";
        if (a < b) {
            for(int i=(b-1)/2; i>=0;) {
                if (i == a) {cout << "a is an ancestor of b\n"; break;}
                if (i == 0) {cout << "a and b are not related\n"; break;}
                i = (i-1)/2;
            }
        }
        if (a > b) {
            for(int i=(a-1)/2; i>=0;) {
                if (i == b) {cout << "b is an ancestor of a\n"; break;}
                if (i == 0) {cout << "a and b are not related\n"; break;}
                i = (i-1)/2;
            }
        }

    }

}
