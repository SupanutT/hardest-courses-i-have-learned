#include <algorithm>
#include <random>
#include <chrono>
#include <cassert>
#include <string>
#include "priority_queue.h"
#include "student.h"
#include <vector>
using std::cout;
using std::cin;
using std::endl;



int main() {
  std::ios_base::sync_with_stdio(false); cin.tie(NULL);

  CP::priority_queue<int> pq;
    int n = 10;

    for (int i = 0;i < 10;i++) pq.push(i);
    std::vector<int> v1 = pq.at_level(2);
    for (auto &x : v1) cout << x << " ";
    cout << endl;
    std::vector<int> v2 = pq.at_level(3);
    for (auto &x : v2) cout << x << " ";
    cout << endl;
    std::vector<int> v3 = pq.at_level(20);
    for (auto &x : v3) cout << x << " ";
    cout << endl;
/*
  int n,k;
  cin >> n >> k;
  while(n--) {
    int x;
    cin >> x;
    pq.push(x);
  }

  std::vector<int> r = pq.at_level(k);
  cout << "size = " << r.size() << endl;
  for (auto &x : r) {
    cout << x << " ";
  }
  cout << endl;
*/
}
