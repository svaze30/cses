#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define MOD 1000000007
// #define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

// ll arr[7] = {
//     0, 1, 2, 4, 8,
// };
// ll comb(ll n) {
//   if (n <= 6) {
//     cout <<
//   }
// }

void solve() {
  ll j;
  cin >> j;
  if (j <= 6) {
    ll arr[7] = {0, 1, 2, 4, 8, 16, 32};
    cout << arr[j] << endl;
    return;
  }
  ll n = j;
  ll arr[n + 1] = {0};
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 4;
  arr[4] = 8;
  arr[5] = 16;
  arr[6] = 32;
  for (ll i = 7; i <= n; i++) {
    arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4] + arr[i - 5] +
              arr[i - 6]) %
             MOD;
  }
  cout << arr[j] << endl;
}