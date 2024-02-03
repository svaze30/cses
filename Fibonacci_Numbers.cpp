#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef long double ld;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;
#define MOD 1000000007

using namespace std;

// void debug(auto arr) {
//   for (auto i : arr)
//     cout << i << ' ';
//   cout << endl;
// }

void solve();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  ld n;
  cin >> n;
  ld a = 0;
  ld b = 1;
  // ld
  if (n == 0) {
    cout << 0 << endl;
  } else if (n == 1) {
    cout << 1 << endl;
  } else {
    ld r5 = 2.2360679775;
    ld t1 = (1 + r5) / 2;
    ld t2 = (1 - r5) / 2;
    // ll term =
    // cout << round()
  }
}