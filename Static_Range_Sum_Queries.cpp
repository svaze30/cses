#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

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
  ll n, q;
  cin >> n >> q;
  vector<ll> arr(n + 1, 0), pref(n + 1, 0);
  loop1(i, n) {
    cin >> arr[i];
    pref[i] = pref[i - 1] + arr[i];
  }
  loop0(j, q) {
    ll a, b;
    cin >> a >> b;
    cout << pref[b] - pref[a - 1] << endl;
  }
}