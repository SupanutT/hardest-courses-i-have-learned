#include <iostream>
#include <vector>
using namespace std;
int relation(long long S, long long a, long long b) {
    if (a==b) return 4;
    long long sidx = 0;
    long long bidx = 0;
    if (a < b) {sidx=a; bidx=b;}
    else {sidx=b; bidx=a;}
    if (sidx==0) {
        if (bidx <= S) return 1;
        else return 2;
    }
    int count = 0;
    while(sidx<bidx) {
        long long tmp = (bidx-1)/S;
        if (tmp == sidx && count == 0) return 1;
        if (tmp == sidx) return 2;
        count++;
        bidx = tmp;
    }
    if (a < b) {sidx=a; bidx=b;}
    else {sidx=b; bidx=a;}
    while(sidx!=0 && bidx!=0) {
        sidx = (sidx-1)/S;
        bidx = (bidx-1)/S;
    }
    if (sidx==0 && bidx==0) return 4;

    return 3;


}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
        cin >> S >> a >> b;
        cout << relation(S,a,b) << " ";
    }
    cout << endl;

}
