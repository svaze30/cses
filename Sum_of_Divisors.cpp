#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define MOD 1000000007

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

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
  ll ans = 0;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans += (i) % MOD;
      if (i * i != n) {
        ans += (n / i) % MOD;
      }
    }
  }
  cout << ans << endl;
}