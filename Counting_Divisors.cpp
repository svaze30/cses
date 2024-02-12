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

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

void solve();

map<int, int> createmp(ll n) {
  map<int, int> mp;
  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    mp[2]++;
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      mp[i]++;
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2)
    mp[n]++;
  return mp;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll x;
  cin >> x;

  ll ans = 1;
  map<int, int> div = createmp(x);
  for (auto i : div) {
    ans *= (i.second + 1);
  }
  cout << ans << endl;
}