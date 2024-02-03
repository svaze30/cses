#include <bits/stdc++.h>
#define endl "\n"

void solve();

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;

  while (t--)
    solve();

  return 0;
}

void solve()
{
  int n, x, ans = 0;
  cin >> n >> x;
  int p[n];
  for (int i = 0; i < n; i++)
    cin >> p[i];
  sort(p, p + n);
  int s = 0, e = n - 1;
  while (s <= e)
  {
    if (p[s] + p[e] <= x)
      s++;
    e--;
    ans++;
  }
  cout << ans << endl;
}