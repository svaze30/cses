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
  int n, x;
  cin >> n >> x;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    if (binary_search(arr + i + 1, arr + n, x - arr[i]))
    {
      cout << i + 1 << " " < < < < endl;
      return;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}