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
  cin >> t;

  while (t--)
    solve();

  return 0;
}

ll bruh(ll a, ll b) {
  ll x = 1;
  ll power = a % MOD;

  while (b != 0) {
    if (b & 1)
      x = (x * power) % MOD;
    power = (power * power) % MOD;
    b /= 2;
  }
  return x;
}

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  b = bruh(b, c);
  cout << bruh(a, b) << endl;
}