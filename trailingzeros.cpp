#include<iostream>

using namespace std;

int main () {
  long long int n;
  cin >> n;
  int ans = 0;
  while (n>0)
  {
    n/=5;
    ans += n;
  }
  
  cout << ans << endl;
  return 0;
}