#include <iostream>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;


int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    cout << *(find(v.begin(), v.end(), 2));

}
// 7 2 1 3 2 4 5 9 10
