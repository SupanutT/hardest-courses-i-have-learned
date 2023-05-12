#include <iostream>

using namespace std;

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;

    int mFront, mSize, mCap, last, correction;
    // 3 2 0 5 3
    for (int i=0; i<n; i++) {
        cin >> mFront >> mSize >> mCap >> last >> correction;

        if ((mFront + mSize) % mCap != last) {
            cout << "WRONG";
            if (correction == 1) {
                cout << " " << (last - mSize + mCap) % mCap;
            }
            if (correction == 2) {
                cout << " " << (last - mFront + mCap) % mCap;
            }
            if (correction == 3) {
                if (mFront + mSize == last) cout << " " << last + 1;
                else cout << " " << mFront + mSize - last;
            }
            if (correction == 4) {
                cout << " " <<  (mFront + mSize) % mCap;
            }
        } else cout << "OK";
        cout << "\n";

    }

}
