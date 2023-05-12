#include <iostream>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;

    map <int, int> m_to, m_opp;

    for (int i=0; i<n; i++) {
        int c;
        cin >> c;
        m_to[c]++;
    }

    bool out = false;

    for (int i=0; i<m; i++) {
        int k;
        cin >> k;
        for (int j=0; j<k; j++) {
            int c;
            cin >> c;
            auto it = m_to.lower_bound(c+1);
            if (out) continue;
            // cout << c << " " << m_to.rbegin()->first << endl;
            if (c >= m_to.rbegin()->first) {
                cout << i+1;
                out = true;
                break;
            }

            if (it == m_to.end()) {
                cout << i+1;
                out = true;
                break;
            }
            //cout << it->first << endl;
            m_to[it->first]--;
            if(m_to[it->first] == 0) m_to.erase(it);

            if (i==m-1) cout << m+1;
        }

    }

}
