#include <iostream>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(0);

    map<long long, long long> m;
    int N, M;
    long long F, S, A, B;
    long long FA, FB, GA, GB;

    cin >> N >> M;

    for (int i=0; i < N; i++){
        cin >> F >> S;
        m[S] = F;
    }

    for (int i=0; i < M; i++){
        cin >> A >> B;

        // Check if A and B is the same person
        if (A == B) {
            cout << "NO\n";
            continue;
        }
        // Check A not in m
        if (!m.count(A)) {
            cout << "NO\n";
            continue;
        } else FA = m[A];

        // Check B not in m
        if (!m.count(B)) {
            cout << "NO\n";
            continue;
        } else FB = m[B];

        // Check FA not in m
        if (!m.count(FA)) {
            cout << "NO\n";
            continue;
        } else GA = m[FA];

        // Check FB not in m
        if (!m.count(FB)) {
            cout << "NO\n";
            continue;
        } else GB = m[FB];

        // Check if A and B have the same grandfather
        if (GA == GB) cout << "YES\n";
        else cout << "NO\n";
    }

}
