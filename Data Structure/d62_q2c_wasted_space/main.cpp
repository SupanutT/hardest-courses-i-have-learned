#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n==1 || n==2) cout << 0;
    int power = ceil(log2(n));
    int cap = pow(2, power);
    cout << cap-n;

}
