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
  int n, m, x, ph = 0, pt = 0;
  vector<int> ans;
  cin >> n >> m;
  int h[n], t[m];
  for (int i = 0; i < n; i++)
    cin >> h[i];
  for (int i = 0; i < m; i++)
    cin >> t[i];
  sort(h, h + n);

  for (int i = 0; i < m; i++)
  {
    if (h[ph] <= t[i] && ph < n)
    {
      while (ph < n && h[ph] <= t[i])
      {
        ph++;
      }
      ph--;
      ans.push_back(h[ph]);
      h[ph] = INT_MAX;
      ph++;
    }
    else
    {
      ans.push_back(-1);
    }
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
}