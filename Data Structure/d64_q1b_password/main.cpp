#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, M, L;
    cin >> N >> M >> L;

    vector<int> vl;

    for (int i=0; i<L; i++) {
        int c;
        cin >> c;
        vl.push_back(c);
    }

    set<string> s;

    for (int i=0; i<N; i++) {
        string s1;
        cin >> s1;
        s.insert(s1);
    }

    for (int i=0; i<M; i++) {
        string to_check;
        cin >> to_check;
        for (int j=0; j<to_check.size(); j++) {
            to_check[j] = (to_check[j] + vl[j] - 'a')%26 + 'a';
        }

        string result = (s.find(to_check) != s.end()) ? "Match\n" : "Unknown\n";
        cout << result;
    }
}

