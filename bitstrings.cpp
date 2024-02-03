#include<iostream>
#define MOD 1000000007

using namespace std;

int main () {
  int n;
  cin >> n;
  long long ans = 1;
  for (size_t i = 0; i < n; i++)
  {
    ans = ans * 2 % MOD;
  }
  cout << ans << endl;
  
  return 0;
}