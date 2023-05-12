#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    set <long> s;
    bool duplicated=false;

    cin >> N;

    for (int i=0; i<N; i++) {
        long c;
        cin >> c;

        if (!duplicated & s.insert(c).second == false) {
            duplicated = true;
        }
        if (!duplicated & c > N) {
            duplicated = true;
        }
    }
    if (!duplicated) cout << "YES";
    else cout << "NO";

}
