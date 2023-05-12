#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << std::fixed << std::setprecision(2);
    int N;

    cin >> N;

    map < int, pair<int, int> > ms;
    map < string, pair<int, int> > mt;
    for (int i=0; i<N; i++) {
        int S, c;
        string T;
        cin >> S >> T >> c;

        ms[S].first = ms[S].first + c;
        ms[S].second++;
        mt[T].first = mt[T].first + c;
        mt[T].second++;
    }

    vector < pair<int, float> >    vs;
    vector < pair<string, float> > vt;

    for (auto it=ms.begin(); it!=ms.end(); ++it) {
        vs.push_back( pair<int, float> (it->first, (it->second.first + 0.0)/ it->second.second) );
    }

    // sort(vs.begin(), vs.end());

    for (auto it=mt.begin(); it!=mt.end(); ++it) {
        vt.push_back( pair<string, float> (it->first, (it->second.first + 0.0)/ it->second.second) );
    }

    // sort(vt.begin(), vt.end());

    for (auto &x : vs) {
        cout << x.first << " " << x.second << "\n";
    }
    for (auto &x : vt) {
        cout << x.first << " " << x.second << "\n";
    }

}
