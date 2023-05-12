#include <iostream>
#include "stdio.h"

int n,m;
int k[8];
int G[20][20];
bool found;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << "HI";
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> k[i];
    }
    for (int i=0; i<m; i++) {
        int a,b,w;
        cin >> a >> b >> w;
        G[a][b] = w;
        G[b][a] = w;
    }
    return 0;

}
