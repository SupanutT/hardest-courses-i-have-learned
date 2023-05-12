#include <iostream>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m,k,a,b;
    cin >> n >> m >> k;
    cout << "dasd";
    int l[n];
    for (int i=0; i<n; i++) {
        cin >> l[i];
    }
    cout << ":::::";
    for (int i=0; i<n; i++){cout << l[i] << "\n";}
    for (int i=1; i<n; i++) {
        l[i] = l[i]+l[i-1]+(k/i);
    }
    l[0] = l[0]+k;
    for (int i=0; i<m; i++) {
        cin >> a >> b;
    }
}
