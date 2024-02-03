#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
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
  ll n;
  cin >> n;
  ll a = 0;
  ll b = 1;
  if (n == 0) {
    cout << 0 << endl;
  } else if (n == 1) {
    cout << 1 << endl;
  } else {
    for (ll i = 2; i <= n; i++) {
      ll temp = a % MOD;
      a = b % MOD;
      b = (b % MOD + temp % MOD) % MOD;
    }
    cout << b << endl;
  }
}