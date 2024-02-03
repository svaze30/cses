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
  int n, m, k, x;
  cin >> n >> m >> k;
  priority_queue<int, vector<int>, greater<int>> a, b;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    a.push(x);
  }
  for (int i = 0; i < m; i++)
  {
    cin >> x;
    b.push(x);
  }
  int ans = 0;
  while (!a.empty() && !b.empty())
  {
    if (b.top() + k >= a.top() && b.top() - k <= a.top())
    {
      ans++;
      b.pop();
      a.pop();
    }
    else if (b.top() + k < a.top())
    {
      b.pop();
    }
    else if (b.top() - k > a.top())
    {
      a.pop();
    }
  }
  cout << ans << endl;
}