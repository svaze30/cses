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
  int n, a;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    s.insert(a);
  }
  cout << s.size() << endl;
}