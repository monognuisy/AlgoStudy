#include <bits/stdc++.h>

#define FAST                         \
  ios_base ::sync_with_stdio(false); \
  cin.tie(NULL);                     \
  cout.tie(NULL);

#define endl "\n"

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<long long>;

struct Cmp {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) {
      return a > b;
    }

    return abs(a) > abs(b);
  }
};

int main() {
  FAST;

  priority_queue<int, vector<int>, Cmp> pq;
  int N;

  cin >> N;

  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;

    switch (num) {
      case 0: {
        if (pq.empty()) {
          cout << 0 << endl;
        }
        else {
          cout << pq.top() << endl;
          pq.pop();
        }
        break;
      }

      default: {
        pq.push(num);
        break;
      }
    }
  }
  return 0;
}