#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    // cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] << endl;
    bool b[2000001] = {false};
    for (int j=0; j<N; j++) {
        for (int k=0; k<N; k++) {
            if (j!=k) b[ A[j] + A[k] ] = true;

        }
    }
    for (int z=0; z<M; z++) {
        int num;
        cin >> num;
        if (b[num]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
