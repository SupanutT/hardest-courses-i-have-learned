#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    while(true) {
    long long n;
    int k;
    cin >> n >> k;
    if (n==1) cout << 0;
    else if (k==1) cout << --n;
    else {
        long long ans = log10f(n*(k-1)) / log10f(k);
        //cout << "log10f(n) = " << log10f(n) << "\n";
        //cout << "log10f(k) = " << log10f(k) << "\n";
        //cout << "log10f(n)/ log10f(k) = " << log10f(n) / log10f(k) << "\n";
        cout << "ans = " << ans << "\n";
    }}
}
